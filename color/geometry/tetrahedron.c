void tetrahedron(){
return [
    Coordinate(0,0,1),//A
    Coordinate(acos(-1/3), 0,0), // B
    Coordinate(0, -acos(-1/3),0), // C
    Coordinate(0,0,acos(-1/3)), // D
  ]
  for (let i = 0; i < vertices; ++i) {
    vertices[i] = [vertices[i][0] * r, vertices[i][1] * r, vertices[i][2] * r];
  }
}