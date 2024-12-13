#include <stdio.h>
#include <string.h>

struct Box {
  float length;
  float width;
  float height;
  float position[10];
  char color[100];
};

void boxUpdater(struct Box *box1, struct Box *box2);

int main() {
  struct Box box1 = {10.0, 1.0, 1.0, {90.0, 1.0, 75.0}, "purple"};
  struct Box box2 = {90.0, 10.0, 0.0, {1.0, 0.0, 55.0}, "purple"};

  printf("Box1: (%.2f, %.2f, %.2f)\n Color: %s\n", box1.position[0],
         box1.position[1], box1.position[2], box1.color);
  printf("Box2: (%.2f, %.2f, %.2f)\n Color: %s\n", box2.position[0],
         box2.position[1], box2.position[2], box2.color);
  printf("\n");
  boxUpdater(&box1, &box2);

  printf("Box1: (%.2f, %.2f, %.2f)\n Color: %s\n", box1.position[0],
         box1.position[1], box1.position[2], box1.color);
  printf("Box2: (%.2f, %.2f, %.2f)\n Color: %s\n", box2.position[0],
         box2.position[1], box2.position[2], box2.color);

  return 0;
}

void boxUpdater(struct Box *box1, struct Box *box2) {
  float vol1 = (*box1).length * (*box1).width * (*box1).height;
  float vol2 = (*box2).length * (*box2).width * (*box2).height;

  if (vol1 > vol2) {
    (*box1).position[0] = 0.0;
    (*box1).position[1] = 0.0;
    (*box1).position[2] = 0.0;
    strcpy((*box1).color, "green");
  } else if (vol2 > vol1) {
    (*box2).position[0] = 0.0;
    (*box2).position[1] = 0.0;
    (*box2).position[2] = 0.0;
    strcpy((*box2).color, "green");
  } else {
    (*box2).position[0] = 0.0;
    (*box2).position[1] = 0.0;
    (*box2).position[2] = 0.0;
    strcpy((*box2).color, "green");
  }
}