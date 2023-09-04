//
//
//Made by LIBBHHH (N1KRYY) sep 4 Year 2023
//
#include "imgui.h"
bool showFPS = true;

void Tracking() {
    // Отобразить контент вашего приложения
    
    if (showFPS) {
        ImGui::SetNextWindowBgAlpha(0.35f); // Установить прозрачность заднего фона
        ImGui::Begin("FPS Overlay", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoFocusOnAppearing | ImGuiWindowFlags_NoNav);
        
        // Отобразить ФПС
        float fps = ImGui::GetIO().Framerate;

        if (fps < 30.0f) {
            ImGui::TextColored(ImVec4(1.0f, 0.0f, 0.0f, 1.0f), "FPS: %.1f", fps); // Красный цвет текста при низком FPS
        } else if (fps < 60.0f) {
            ImGui::TextColored(ImVec4(1.0f, 1.0f, 0.0f, 1.0f), "FPS: %.1f", fps); // Желтый цвет текста при среднем FPS
        } else {
            ImGui::TextColored(ImVec4(0.0f, 1.0f, 0.0f, 1.0f), "FPS: %.1f", fps); // Зеленый цвет текста при высоком FPS
        }

        ImGui::End();
    }
}
