#define DRAWOBJECT "CorelDRAW.Automation.9"


DECLARE SUB COLORMARK
DECLARE SUB JX4J
DECLARE SUB ZX4B
DECLARE SUB CMYKMARK


CALL COLORMARK

SUB COLORMARK ' ������ɫ��׼����ļ��� ��ʽ��MarkNameID&(5) ����
WITHOBJECT DRAWOBJECT
    CurDir$ = GetCurrFolder()
    IF MID(CurDir$, LEN(CurDir$), 1) = "\" THEN
        CurDir$ = LEFT(CurDir$, LEN(CurDir$) - 1)
    ENDIF
    BJ_File$ = CurDir$+"\ColorMark.cdr"
    .GetPageSize PXSize&, PYSize& '�õ�ҳ���С
    .FileImport BJ_File$, 1796, FALSE  '�����ļ�
    .AlignToCenterOfPage 3, 1
    .MoveObject 0, -(PYSize&/2+300000) 'ҳ������(3cm)��λ
    REM .ZoomToSelection
    .Ungroup

	DIM MarkNameID&(5)   ' �洢��ɫ��׼���Id��
	.SelectAllObjects   ' ��ȫѡ���ͻ�����������ѡ����

	FOR ix = 1 TO 10 STEP 1	     ' �洢��ɫ��׼��� �� MarkNameID&(5) ������
		.SelectNextObject 0
		MarkName$ = .GetObjectData( "MarkName" )

		IF MarkName$ = "CenterLine" THEN
			MarkNameID&(1) = .GetObjectID(0,TRUE,TRUE)
			.ClearObjectData ( "MarkName" )

		ELSEIF 	MarkName$ = "TargetLine" THEN
			MarkNameID&(2) = .GetObjectID(0,TRUE,TRUE)
			.ClearObjectData ( "MarkName" )

		ELSEIF 	MarkName$ = "ColorStrip" THEN
			MarkNameID&(3) = .GetObjectID(0,TRUE,TRUE)
			.ClearObjectData ( "MarkName" )

		ELSEIF 	MarkName$ = "ColorMark" THEN
			MarkNameID&(4) = .GetObjectID(0,TRUE,TRUE)
			.ClearObjectData ( "MarkName" )

		ENDIF

	NEXT ix
	

	FOR ix = 1 TO 5 STEP 1
		Id& =MarkNameID&(ix)
		.SelectObjectOfCDRStaticID Id&

     	SELECT CASE ix
            case 1
                CALL  ZX4B
            case 2
                CALL  JX4J
            case 3
                CALL  JX4J
            case 4
                CAll  CMYKMARK
            case else
            'û�в���
        END SELECT

	NEXT ix


END WITHOBJECT
END SUB



SUB JX4J ' "�ѽ��߷��õ�ҳ���Ľ�(����ѡ�����)"
WITHOBJECT DRAWOBJECT
    Id&=.GetObjectID(0,TRUE,TRUE)
    .SelectObjectOfCDRStaticID Id&
    .GetSize XSize&, YSize& '�õ������С
    .GetPageSize PXSize&, PYSize& '�õ�ҳ���С
    .SelectObjectOfCDRStaticID Id&
    .AlignToCenterOfPage 2, 1 '���϶��뵽ҳ������
    .MoveObject -PXSize&/2,  PYSize&/2 '������
    .DuplicateObject 0, 0
    .RotateObject -90000000, FALSE, 0, 0
    .AlignToCenterOfPage 1, 1
    .MoveObject  PXSize&/2,  PYSize&/2 '������
    .DuplicateObject 0, 0
    .RotateObject -180000000, FALSE, 0, 0
    .AlignToCenterOfPage 2, 2
    .MoveObject -PXSize&/2, -PYSize&/2 '������
    .DuplicateObject 0, 0
    .RotateObject 90000000, FALSE, 0, 0
    .AlignToCenterOfPage 1, 2
    .MoveObject  PXSize&/2, -PYSize&/2 '������
END WITHOBJECT
END SUB


SUB ZX4B ' "�����߷��õ�ҳ���м�(����ѡ������)"
WITHOBJECT DRAWOBJECT
    Id&=.GetObjectID(0,TRUE,TRUE)
    .SelectObjectOfCDRStaticID Id&
    .GetSize XSize&, YSize& '�õ������С
    .GetPageSize PXSize&, PYSize& '�õ�ҳ���С
    .SelectObjectOfCDRStaticID Id&
    .AlignToCenterOfPage 3, 1 '�϶��뵽ҳ������
    .MoveObject 0,  PYSize&/2 '����

    .DuplicateObject 0, 0
    .RotateObject 180000000, FALSE, 0, 0
    .AlignToCenterOfPage 3, 2
    .MoveObject  0,  -PYSize&/2 '����

    .DuplicateObject 0, 0
    .RotateObject -90000000, FALSE, 0, 0
    .AlignToCenterOfPage 2, 3
    .MoveObject -PXSize&/2, 0 '����

    .DuplicateObject 0, 0
    .RotateObject 180000000, FALSE, 0, 0
    .AlignToCenterOfPage 1, 3
    .MoveObject  PXSize&/2, 0 '����
END WITHOBJECT
END SUB

SUB CMYKMARK
WITHOBJECT DRAWOBJECT
	Id&=.GetObjectID(0,TRUE,TRUE)
    	.SelectObjectOfCDRStaticID Id&
	.ZoomToSelection

END WITHOBJECT
END SUB

