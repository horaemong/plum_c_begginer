#include <stdio.h>

typedef struct point
{
  int xpos;
  int ypos;
} Point;

void ShowPosition(Point pos)
{
  printf("(%d, %d)\n", pos.xpos, pos.ypos);
}

Point GetPosition()
{
  Point Cen;
  printf("한 점의 좌표를 입력하세요 : ");
  scanf_s("%d %d", &Cen.xpos, &Cen.ypos);
  return Cen;
}

void OrgSymTrans(Point *pos)
{
  pos->xpos = -(pos->xpos);
  pos->ypos = -(pos->ypos);
}

void main()
{
  Point cen = GetPosition();

  // 초기 원의 중심 좌표
  printf("원의 중심 좌표 : ");
  ShowPosition(cen);

  // 원점 대칭 이동
  OrgSymTrans(&cen);
  printf("원점 대칭 이동한 좌표 : ");
  ShowPosition(cen);
}
