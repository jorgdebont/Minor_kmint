//
// Created by mafn on 11/15/16.
//

#include "SummonersRift.hpp"

SummonersRift::SummonersRift()
{
    this->_init_field();
}

void SummonersRift::_init_field()
{
    const int WEIGHT_NORMAL = 1;
    const int WEIGHT_WATER = 2;
    const int WEIGHT_LANE = 3;

    auto vertex1 = new Vertex(12, 564);this->field.add_vertex(vertex1);auto vertex103 = new Vertex(105, 548);this->field.add_vertex(vertex103);auto vertex104 = new Vertex(37, 540);this->field.add_vertex(vertex104);auto vertex105 = new Vertex(31, 470);this->field.add_vertex(vertex105);auto vertex107 = new Vertex(109, 488);this->field.add_vertex(vertex107);auto vertex108 = new Vertex(60, 420);this->field.add_vertex(vertex108);auto vertex109 = new Vertex(24, 424);this->field.add_vertex(vertex109);auto vertex110 = new Vertex(121, 417);this->field.add_vertex(vertex110);auto vertex111 = new Vertex(153, 456);this->field.add_vertex(vertex111);auto vertex112 = new Vertex(150, 506);this->field.add_vertex(vertex112);auto vertex113 = new Vertex(151, 550);this->field.add_vertex(vertex113);auto vertex114 = new Vertex(205, 528);this->field.add_vertex(vertex114);auto vertex115 = new Vertex(44, 376);this->field.add_vertex(vertex115);auto vertex116 = new Vertex(172, 400);this->field.add_vertex(vertex116);auto vertex117 = new Vertex(79, 466);this->field.add_vertex(vertex117);auto vertex118 = new Vertex(105, 370);this->field.add_vertex(vertex118);auto vertex119 = new Vertex(104, 291);this->field.add_vertex(vertex119);auto vertex120 = new Vertex(120, 258);this->field.add_vertex(vertex120);auto vertex121 = new Vertex(90, 244);this->field.add_vertex(vertex121);auto vertex122 = new Vertex(98, 212);this->field.add_vertex(vertex122);auto vertex123 = new Vertex(151, 268);this->field.add_vertex(vertex123);auto vertex124 = new Vertex(138, 226);this->field.add_vertex(vertex124);auto vertex125 = new Vertex(112, 186);this->field.add_vertex(vertex125);auto vertex126 = new Vertex(164, 200);this->field.add_vertex(vertex126);auto vertex127 = new Vertex(195, 171);this->field.add_vertex(vertex127);auto vertex128 = new Vertex(136, 144);this->field.add_vertex(vertex128);auto vertex129 = new Vertex(164, 135);this->field.add_vertex(vertex129);auto vertex130 = new Vertex(166, 98);this->field.add_vertex(vertex130);auto vertex131 = new Vertex(141, 58);this->field.add_vertex(vertex131);auto vertex132 = new Vertex(90, 96);this->field.add_vertex(vertex132);auto vertex133 = new Vertex(54, 156);this->field.add_vertex(vertex133);auto vertex134 = new Vertex(55, 211);this->field.add_vertex(vertex134);auto vertex135 = new Vertex(57, 268);this->field.add_vertex(vertex135);auto vertex136 = new Vertex(180, 331);this->field.add_vertex(vertex136);auto vertex137 = new Vertex(212, 354);this->field.add_vertex(vertex137);auto vertex138 = new Vertex(138, 332);this->field.add_vertex(vertex138);auto vertex139 = new Vertex(129, 294);this->field.add_vertex(vertex139);auto vertex140 = new Vertex(176, 292);this->field.add_vertex(vertex140);auto vertex141 = new Vertex(188, 267);this->field.add_vertex(vertex141);auto vertex142 = new Vertex(181, 249);this->field.add_vertex(vertex142);auto vertex143 = new Vertex(213, 223);this->field.add_vertex(vertex143);auto vertex144 = new Vertex(291, 283);this->field.add_vertex(vertex144);auto vertex145 = new Vertex(259, 313);this->field.add_vertex(vertex145);auto vertex146 = new Vertex(325, 357);this->field.add_vertex(vertex146);auto vertex147 = new Vertex(242, 379);this->field.add_vertex(vertex147);auto vertex148 = new Vertex(231, 428);this->field.add_vertex(vertex148);auto vertex149 = new Vertex(195, 439);this->field.add_vertex(vertex149);auto vertex150 = new Vertex(236, 528);this->field.add_vertex(vertex150);auto vertex151 = new Vertex(252, 469);this->field.add_vertex(vertex151);auto vertex152 = new Vertex(285, 469);this->field.add_vertex(vertex152);auto vertex153 = new Vertex(292, 450);this->field.add_vertex(vertex153);auto vertex154 = new Vertex(303, 415);this->field.add_vertex(vertex154);auto vertex155 = new Vertex(268, 413);this->field.add_vertex(vertex155);auto vertex156 = new Vertex(270, 384);this->field.add_vertex(vertex156);auto vertex157 = new Vertex(345, 387);this->field.add_vertex(vertex157);auto vertex158 = new Vertex(349, 430);this->field.add_vertex(vertex158);auto vertex159 = new Vertex(400, 452);this->field.add_vertex(vertex159);auto vertex160 = new Vertex(313, 488);this->field.add_vertex(vertex160);auto vertex161 = new Vertex(308, 528);this->field.add_vertex(vertex161);auto vertex162 = new Vertex(374, 472);this->field.add_vertex(vertex162);auto vertex163 = new Vertex(423, 481);this->field.add_vertex(vertex163);auto vertex164 = new Vertex(434, 519);this->field.add_vertex(vertex164);auto vertex165 = new Vertex(493, 480);this->field.add_vertex(vertex165);auto vertex166 = new Vertex(529, 427);this->field.add_vertex(vertex166);auto vertex167 = new Vertex(526, 366);this->field.add_vertex(vertex167);auto vertex168 = new Vertex(491, 367);this->field.add_vertex(vertex168);auto vertex169 = new Vertex(478, 386);this->field.add_vertex(vertex169);auto vertex170 = new Vertex(452, 340);this->field.add_vertex(vertex170);auto vertex171 = new Vertex(417, 369);this->field.add_vertex(vertex171);auto vertex172 = new Vertex(390, 404);this->field.add_vertex(vertex172);auto vertex184 = new Vertex(171, 481);this->field.add_vertex(vertex184);auto vertex200 = new Vertex(84, 402);this->field.add_vertex(vertex200);auto vertex231 = new Vertex(214, 55);this->field.add_vertex(vertex231);auto vertex232 = new Vertex(265, 56);this->field.add_vertex(vertex232);auto vertex233 = new Vertex(336, 54);this->field.add_vertex(vertex233);auto vertex234 = new Vertex(369, 54);this->field.add_vertex(vertex234);auto vertex235 = new Vertex(376, 135);this->field.add_vertex(vertex235);auto vertex236 = new Vertex(404, 171);this->field.add_vertex(vertex236);auto vertex237 = new Vertex(331, 190);this->field.add_vertex(vertex237);auto vertex238 = new Vertex(369, 210);this->field.add_vertex(vertex238);auto vertex239 = new Vertex(343, 145);this->field.add_vertex(vertex239);auto vertex240 = new Vertex(322, 103);this->field.add_vertex(vertex240);auto vertex241 = new Vertex(294, 104);this->field.add_vertex(vertex241);auto vertex242 = new Vertex(285, 134);this->field.add_vertex(vertex242);auto vertex243 = new Vertex(278, 152);this->field.add_vertex(vertex243);auto vertex244 = new Vertex(231, 142);this->field.add_vertex(vertex244);auto vertex245 = new Vertex(187, 127);this->field.add_vertex(vertex245);auto vertex248 = new Vertex(236, 183);this->field.add_vertex(vertex248);auto vertex249 = new Vertex(253, 204);this->field.add_vertex(vertex249);auto vertex255 = new Vertex(268, 84);this->field.add_vertex(vertex255);auto vertex262 = new Vertex(220, 102);this->field.add_vertex(vertex262);auto vertex266 = new Vertex(340, 85);this->field.add_vertex(vertex266);auto vertex277 = new Vertex(313, 259);this->field.add_vertex(vertex277);auto vertex280 = new Vertex(297, 184);this->field.add_vertex(vertex280);auto vertex281 = new Vertex(313, 176);this->field.add_vertex(vertex281);auto vertex282 = new Vertex(307, 206);this->field.add_vertex(vertex282);auto vertex287 = new Vertex(309, 147);this->field.add_vertex(vertex287);auto vertex304 = new Vertex(82, 201);this->field.add_vertex(vertex304);auto vertex309 = new Vertex(268, 358);this->field.add_vertex(vertex309);auto vertex311 = new Vertex(312, 375);this->field.add_vertex(vertex311);auto vertex330 = new Vertex(355, 339);this->field.add_vertex(vertex330);auto vertex343 = new Vertex(438, 313);this->field.add_vertex(vertex343);auto vertex345 = new Vertex(490, 324);this->field.add_vertex(vertex345);auto vertex348 = new Vertex(462, 303);this->field.add_vertex(vertex348);auto vertex351 = new Vertex(468, 282);this->field.add_vertex(vertex351);auto vertex352 = new Vertex(394, 232);this->field.add_vertex(vertex352);auto vertex353 = new Vertex(429, 229);this->field.add_vertex(vertex353);auto vertex354 = new Vertex(400, 272);this->field.add_vertex(vertex354);auto vertex355 = new Vertex(397, 309);this->field.add_vertex(vertex355);auto vertex356 = new Vertex(386, 341);this->field.add_vertex(vertex356);auto vertex360 = new Vertex(384, 297);this->field.add_vertex(vertex360);auto vertex364 = new Vertex(447, 273);this->field.add_vertex(vertex364);auto vertex371 = new Vertex(524, 298);this->field.add_vertex(vertex371);auto vertex372 = new Vertex(522, 199);this->field.add_vertex(vertex372);auto vertex373 = new Vertex(468, 202);this->field.add_vertex(vertex373);auto vertex374 = new Vertex(465, 228);this->field.add_vertex(vertex374);auto vertex375 = new Vertex(475, 248);this->field.add_vertex(vertex375);auto vertex383 = new Vertex(453, 145);this->field.add_vertex(vertex383);auto vertex384 = new Vertex(418, 118);this->field.add_vertex(vertex384);auto vertex385 = new Vertex(417, 31);this->field.add_vertex(vertex385);auto vertex386 = new Vertex(420, 67);this->field.add_vertex(vertex386);auto vertex387 = new Vertex(398, 94);this->field.add_vertex(vertex387);auto vertex388 = new Vertex(451, 88);this->field.add_vertex(vertex388);auto vertex389 = new Vertex(481, 110);this->field.add_vertex(vertex389);auto vertex390 = new Vertex(476, 168);this->field.add_vertex(vertex390);auto vertex391 = new Vertex(500, 151);this->field.add_vertex(vertex391);auto vertex392 = new Vertex(546, 146);this->field.add_vertex(vertex392);auto vertex393 = new Vertex(541, 103);this->field.add_vertex(vertex393);auto vertex394 = new Vertex(531, 45);this->field.add_vertex(vertex394);auto vertex395 = new Vertex(550, 24);this->field.add_vertex(vertex395);auto vertex396 = new Vertex(470, 42);this->field.add_vertex(vertex396);auto vertex432 = new Vertex(440, 424);this->field.add_vertex(vertex432);
    this->field.add_edge(new Edge(vertex1, vertex104, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex103, vertex107, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex117, vertex107, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex117, vertex105, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex105, vertex104, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex104, vertex103, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex103, vertex113, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex113, vertex112, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex112, vertex107, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex107, vertex111, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex111, vertex184, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex184, vertex112, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex112, vertex114, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex184, vertex114, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex114, vertex113, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex117, vertex110, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex108, vertex117, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex110, vertex116, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex116, vertex111, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex110, vertex111, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex105, vertex109, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex109, vertex108, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex108, vertex115, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex115, vertex109, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex108, vertex200, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex200, vertex110, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex115, vertex200, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex114, vertex149, WEIGHT_LANE));this->field.add_edge(new Edge(vertex149, vertex116, WEIGHT_LANE));this->field.add_edge(new Edge(vertex116, vertex118, WEIGHT_LANE));this->field.add_edge(new Edge(vertex118, vertex115, WEIGHT_LANE));this->field.add_edge(new Edge(vertex114, vertex150, WEIGHT_LANE));this->field.add_edge(new Edge(vertex150, vertex151, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex151, vertex148, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex148, vertex149, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex148, vertex147, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex147, vertex137, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex137, vertex116, WEIGHT_LANE));this->field.add_edge(new Edge(vertex137, vertex136, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex136, vertex140, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex140, vertex141, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex141, vertex145, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex145, vertex137, WEIGHT_LANE));this->field.add_edge(new Edge(vertex136, vertex138, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex138, vertex139, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex139, vertex140, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex139, vertex119, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex119, vertex118, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex119, vertex135, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex135, vertex115, WEIGHT_LANE));this->field.add_edge(new Edge(vertex135, vertex134, WEIGHT_LANE));this->field.add_edge(new Edge(vertex134, vertex133, WEIGHT_LANE));this->field.add_edge(new Edge(vertex133, vertex132, WEIGHT_LANE));this->field.add_edge(new Edge(vertex132, vertex131, WEIGHT_LANE));this->field.add_edge(new Edge(vertex245, vertex244, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex244, vertex242, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex244, vertex248, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex248, vertex249, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex242, vertex243, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex242, vertex241, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex241, vertex240, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex241, vertex255, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex255, vertex232, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex232, vertex231, WEIGHT_LANE));this->field.add_edge(new Edge(vertex231, vertex131, WEIGHT_LANE));this->field.add_edge(new Edge(vertex131, vertex130, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex130, vertex262, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex262, vertex255, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex233, vertex232, WEIGHT_LANE));this->field.add_edge(new Edge(vertex240, vertex266, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex266, vertex233, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex233, vertex234, WEIGHT_LANE));this->field.add_edge(new Edge(vertex234, vertex235, WEIGHT_LANE));this->field.add_edge(new Edge(vertex235, vertex239, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex239, vertex240, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex239, vertex237, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex237, vertex238, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex238, vertex236, WEIGHT_LANE));this->field.add_edge(new Edge(vertex236, vertex235, WEIGHT_LANE));this->field.add_edge(new Edge(vertex277, vertex238, WEIGHT_LANE));this->field.add_edge(new Edge(vertex277, vertex249, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex282, vertex280, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex280, vertex249, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex280, vertex281, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex287, vertex281, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex287, vertex242, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex127, vertex126, WEIGHT_WATER));this->field.add_edge(new Edge(vertex126, vertex124, WEIGHT_WATER));this->field.add_edge(new Edge(vertex126, vertex128, WEIGHT_WATER));this->field.add_edge(new Edge(vertex128, vertex132, WEIGHT_WATER));this->field.add_edge(new Edge(vertex143, vertex126, WEIGHT_WATER));this->field.add_edge(new Edge(vertex143, vertex144, WEIGHT_WATER));this->field.add_edge(new Edge(vertex144, vertex277, WEIGHT_LANE));this->field.add_edge(new Edge(vertex144, vertex145, WEIGHT_LANE));this->field.add_edge(new Edge(vertex143, vertex142, WEIGHT_WATER));this->field.add_edge(new Edge(vertex142, vertex141, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex119, vertex120, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex120, vertex123, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex120, vertex121, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex121, vertex122, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex134, vertex304, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex124, vertex125, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex123, vertex124, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex146, vertex145, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex309, vertex156, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex146, vertex311, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex311, vertex156, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex156, vertex155, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex155, vertex153, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex153, vertex154, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex153, vertex152, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex152, vertex151, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex152, vertex160, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex160, vertex161, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex161, vertex150, WEIGHT_LANE));this->field.add_edge(new Edge(vertex161, vertex164, WEIGHT_LANE));this->field.add_edge(new Edge(vertex164, vertex163, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex163, vertex162, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex162, vertex160, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex159, vertex158, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex158, vertex153, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex158, vertex157, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex157, vertex311, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex330, vertex146, WEIGHT_WATER));this->field.add_edge(new Edge(vertex330, vertex144, WEIGHT_WATER));this->field.add_edge(new Edge(vertex171, vertex172, WEIGHT_WATER));this->field.add_edge(new Edge(vertex165, vertex164, WEIGHT_LANE));this->field.add_edge(new Edge(vertex165, vertex166, WEIGHT_LANE));this->field.add_edge(new Edge(vertex166, vertex167, WEIGHT_LANE));this->field.add_edge(new Edge(vertex167, vertex168, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex168, vertex169, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex169, vertex170, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex171, vertex170, WEIGHT_WATER));this->field.add_edge(new Edge(vertex343, vertex170, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex345, vertex168, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex348, vertex345, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex348, vertex343, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex330, vertex356, WEIGHT_WATER));this->field.add_edge(new Edge(vertex356, vertex171, WEIGHT_WATER));this->field.add_edge(new Edge(vertex356, vertex355, WEIGHT_WATER));this->field.add_edge(new Edge(vertex355, vertex360, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex360, vertex277, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex360, vertex354, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex364, vertex354, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex354, vertex352, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex352, vertex353, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex353, vertex364, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex364, vertex351, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex348, vertex351, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex375, vertex351, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex375, vertex374, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex374, vertex373, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex373, vertex372, WEIGHT_LANE));this->field.add_edge(new Edge(vertex372, vertex371, WEIGHT_LANE));this->field.add_edge(new Edge(vertex371, vertex167, WEIGHT_LANE));this->field.add_edge(new Edge(vertex373, vertex236, WEIGHT_LANE));this->field.add_edge(new Edge(vertex395, vertex394, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex394, vertex396, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex396, vertex385, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex385, vertex386, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex385, vertex234, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex234, vertex386, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex386, vertex387, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex387, vertex384, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex384, vertex388, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex388, vertex386, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex388, vertex396, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex388, vertex389, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex389, vertex383, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex384, vertex383, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex383, vertex236, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex236, vertex384, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex383, vertex390, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex390, vertex391, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex391, vertex389, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex389, vertex393, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex393, vertex392, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex392, vertex391, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex391, vertex372, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex372, vertex392, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex393, vertex394, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex352, vertex238, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex129, vertex128, WEIGHT_WATER));this->field.add_edge(new Edge(vertex129, vertex130, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex245, vertex129, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex245, vertex130, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex249, vertex143, WEIGHT_WATER));this->field.add_edge(new Edge(vertex122, vertex304, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex125, vertex304, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex159, vertex163, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex432, vertex171, WEIGHT_WATER));this->field.add_edge(new Edge(vertex432, vertex159, WEIGHT_NORMAL));this->field.add_edge(new Edge(vertex432, vertex165, WEIGHT_WATER));this->field.add_edge(new Edge(vertex351, vertex371, WEIGHT_NORMAL));
}

void SummonersRift::Draw()
{
    this->_draw_edges();
    this->_draw_vertices();

    this->mApplication->SetColor(Color {255,255,255,255});
}

void SummonersRift::Update(float deltaTime)
{
    (void)deltaTime;
}

void SummonersRift::_draw_vertices()
{
    this->mApplication->SetColor(Color {0, 0, 255, 255});

    for (auto vertex : this->field.get_vertices()) {
        this->mApplication->DrawCircle(vertex->coordinates.x, vertex->coordinates.y, this->_vertex_draw_width, true);
    }
}

void SummonersRift::_draw_edges()
{
    this->mApplication->SetColor(Color {0,0,0,255});

    for (auto edge : this->field.get_edges()) {
        this->mApplication->DrawLine(
            edge->first->coordinates.x,
            edge->first->coordinates.y,
            edge->second->coordinates.x,
            edge->second->coordinates.y
        );
    }
}
