#include "/home/codeleaded/System/Static/Library/WindowEngine.h"
#include "/home/codeleaded/System/Static/Library/Terminal.h"

Terminal terminal;

void Setup(AlxWindow* w){
	SetAlxFont(ALXFONT_HIGH);

	terminal = Terminal_New(
		Rect_New(
			(Vec2){ 0.0f,0.0f },
			(Vec2){  }
		),
		"."
	);
	Terminal_LoadHistory(&terminal,"./data/History.txt");
}
void Update(AlxWindow* w){
	if(terminal.exit) w->Running = 0;

	const float padding = 0.025f;
	terminal.editor.rect.p.x = (float)padding * w->Width;
	terminal.editor.rect.p.y = (float)padding * w->Height;
	terminal.editor.rect.d.x = (float)(1.0f - 2.0f * padding) * w->Width;
	terminal.editor.rect.d.y = (float)(1.0f - 2.0f * padding) * w->Height;
	
	Terminal_Update(&terminal);
	Terminal_Input(&terminal,w->Strokes,(Vec2){ w->MouseX,w->MouseY });

	Clear(DARK_GRAY);
	Terminal_Render(&terminal,WINDOW_STD_ARGS);
}
void Delete(AlxWindow* w){
	Terminal_SaveHistory(&terminal,"./data/History.txt");
	Terminal_Free(&terminal);
}

int main(){
    if(Create("Terminal",1920,1080,1,1,Setup,Update,Delete))
        Start();
    return 0;
}