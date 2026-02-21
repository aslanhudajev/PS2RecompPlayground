#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ChangeWindow
// Address: 0x2674e0 - 0x267688
void ChangeWindow_0x2674e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2674e0u;

    // 0x2674e0: 0x3c02003c
    ctx->pc = 0x2674e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2674e4: 0x3c04003c
    ctx->pc = 0x2674e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2674e8: 0x8c4339cc
    ctx->pc = 0x2674e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 14796)));
    // 0x2674ec: 0x8c8939c8
    ctx->pc = 0x2674ecu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 14792)));
    // 0x2674f0: 0x691023
    ctx->pc = 0x2674f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2674f4: 0x44820000
    ctx->pc = 0x2674f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2674f8: 0x46800020
    ctx->pc = 0x2674f8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2674fc: 0x3c013f00
    ctx->pc = 0x2674fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x267500: 0x44810800
    ctx->pc = 0x267500u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x267504: 0x46010002
    ctx->pc = 0x267504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x267508: 0x460000a4
    ctx->pc = 0x267508u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x26750c: 0x44071000
    ctx->pc = 0x26750cu;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[2]);
    // 0x267510: 0x691821
    ctx->pc = 0x267510u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x267514: 0x44830000
    ctx->pc = 0x267514u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x267518: 0x46800020
    ctx->pc = 0x267518u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26751c: 0x46010002
    ctx->pc = 0x26751cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x267520: 0x460000a4
    ctx->pc = 0x267520u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x267524: 0x44051000
    ctx->pc = 0x267524u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[2]);
    // 0x267528: 0x3c02003c
    ctx->pc = 0x267528u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26752c: 0x3c04003c
    ctx->pc = 0x26752cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x267530: 0x8c4339d0
    ctx->pc = 0x267530u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 14800)));
    // 0x267534: 0x8c8439d4
    ctx->pc = 0x267534u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 14804)));
    // 0x267538: 0x641023
    ctx->pc = 0x267538u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26753c: 0x44820000
    ctx->pc = 0x26753cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x267540: 0x46800020
    ctx->pc = 0x267540u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x267544: 0x46010002
    ctx->pc = 0x267544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x267548: 0x460000a4
    ctx->pc = 0x267548u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x26754c: 0x44081000
    ctx->pc = 0x26754cu;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[2]);
    // 0x267550: 0x641821
    ctx->pc = 0x267550u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x267554: 0x44830000
    ctx->pc = 0x267554u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x267558: 0x46800020
    ctx->pc = 0x267558u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26755c: 0x46010002
    ctx->pc = 0x26755cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x267560: 0x46000064
    ctx->pc = 0x267560u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x267564: 0x44060800
    ctx->pc = 0x267564u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x267568: 0x3c0a003c
    ctx->pc = 0x267568u;
    SET_GPR_U32(ctx, 10, ((uint32_t)60 << 16));
    // 0x26756c: 0x44851000
    ctx->pc = 0x26756cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 5);
    // 0x267570: 0x468010a0
    ctx->pc = 0x267570u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x267574: 0x44870800
    ctx->pc = 0x267574u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 7);
    // 0x267578: 0x46800860
    ctx->pc = 0x267578u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26757c: 0x3c020034
    ctx->pc = 0x26757cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x267580: 0xc440f94c
    ctx->pc = 0x267580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267584: 0x46000842
    ctx->pc = 0x267584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x267588: 0x46011001
    ctx->pc = 0x267588u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26758c: 0x460000e4
    ctx->pc = 0x26758cu;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x267590: 0x44031800
    ctx->pc = 0x267590u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[3]);
    // 0x267594: 0xad4339d8
    ctx->pc = 0x267594u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 14808), GPR_U32(ctx, 3));
    // 0x267598: 0x3c02003c
    ctx->pc = 0x267598u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26759c: 0x46011080
    ctx->pc = 0x26759cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2675a0: 0x46001024
    ctx->pc = 0x2675a0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x2675a4: 0xe44039dc
    ctx->pc = 0x2675a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14812), bits); }
    // 0x2675a8: 0x3c04003c
    ctx->pc = 0x2675a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2675ac: 0x44861000
    ctx->pc = 0x2675acu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 6);
    // 0x2675b0: 0x468010a0
    ctx->pc = 0x2675b0u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2675b4: 0x44880800
    ctx->pc = 0x2675b4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 8);
    // 0x2675b8: 0x46800860
    ctx->pc = 0x2675b8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2675bc: 0x3c020034
    ctx->pc = 0x2675bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2675c0: 0xc440f950
    ctx->pc = 0x2675c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2675c4: 0x46000842
    ctx->pc = 0x2675c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2675c8: 0x46011000
    ctx->pc = 0x2675c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2675cc: 0x460000e4
    ctx->pc = 0x2675ccu;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2675d0: 0xe48339e0
    ctx->pc = 0x2675d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 14816), bits); }
    // 0x2675d4: 0x3c02003c
    ctx->pc = 0x2675d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2675d8: 0x46011081
    ctx->pc = 0x2675d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2675dc: 0x46001024
    ctx->pc = 0x2675dcu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x2675e0: 0xe44039e4
    ctx->pc = 0x2675e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14820), bits); }
    // 0x2675e4: 0x69182a
    ctx->pc = 0x2675e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
    // 0x2675e8: 0x54600001
    ctx->pc = 0x2675E8u;
    {
        const bool branch_taken_0x2675e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2675e8) {
            ctx->pc = 0x2675ECu;
            WRITE32(ADD32(GPR_U32(ctx, 10), 14808), GPR_U32(ctx, 9));
            ctx->pc = 0x2675F0u;
            goto label_2675f0;
        }
    }
    ctx->pc = 0x2675F0u;
label_2675f0:
    // 0x2675f0: 0x3c04003c
    ctx->pc = 0x2675f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2675f4: 0x3c03003c
    ctx->pc = 0x2675f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2675f8: 0x8c8239dc
    ctx->pc = 0x2675f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 14812)));
    // 0x2675fc: 0x8c6339cc
    ctx->pc = 0x2675fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 14796)));
    // 0x267600: 0x62102a
    ctx->pc = 0x267600u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x267604: 0x54400001
    ctx->pc = 0x267604u;
    {
        const bool branch_taken_0x267604 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x267604) {
            ctx->pc = 0x267608u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 14812), GPR_U32(ctx, 3));
            ctx->pc = 0x26760Cu;
            goto label_26760c;
        }
    }
    ctx->pc = 0x26760Cu;
label_26760c:
    // 0x26760c: 0x3c04003c
    ctx->pc = 0x26760cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x267610: 0x3c03003c
    ctx->pc = 0x267610u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x267614: 0x8c8239e0
    ctx->pc = 0x267614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 14816)));
    // 0x267618: 0x8c6339d0
    ctx->pc = 0x267618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 14800)));
    // 0x26761c: 0x62102a
    ctx->pc = 0x26761cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x267620: 0x54400001
    ctx->pc = 0x267620u;
    {
        const bool branch_taken_0x267620 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x267620) {
            ctx->pc = 0x267624u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 14816), GPR_U32(ctx, 3));
            ctx->pc = 0x267628u;
            goto label_267628;
        }
    }
    ctx->pc = 0x267628u;
label_267628:
    // 0x267628: 0x3c04003c
    ctx->pc = 0x267628u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x26762c: 0x3c03003c
    ctx->pc = 0x26762cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x267630: 0x8c8239e4
    ctx->pc = 0x267630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 14820)));
    // 0x267634: 0x8c6339d4
    ctx->pc = 0x267634u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 14804)));
    // 0x267638: 0x43102a
    ctx->pc = 0x267638u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x26763c: 0x54400001
    ctx->pc = 0x26763Cu;
    {
        const bool branch_taken_0x26763c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x26763c) {
            ctx->pc = 0x267640u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 14820), GPR_U32(ctx, 3));
            ctx->pc = 0x267644u;
            goto label_267644;
        }
    }
    ctx->pc = 0x267644u;
label_267644:
    // 0x267644: 0x3c02003c
    ctx->pc = 0x267644u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x267648: 0x3c03003c
    ctx->pc = 0x267648u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26764c: 0x3c04003c
    ctx->pc = 0x26764cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x267650: 0x3c05003c
    ctx->pc = 0x267650u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x267654: 0x3c06003c
    ctx->pc = 0x267654u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x267658: 0xc44c39d8
    ctx->pc = 0x267658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26765c: 0x46806320
    ctx->pc = 0x26765cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x267660: 0xc46d39dc
    ctx->pc = 0x267660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x267664: 0x46806b60
    ctx->pc = 0x267664u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x267668: 0xc48e39e0
    ctx->pc = 0x267668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 14816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26766c: 0x468073a0
    ctx->pc = 0x26766cu;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x267670: 0xc4af39e4
    ctx->pc = 0x267670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 14820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x267674: 0x46807be0
    ctx->pc = 0x267674u;
    ctx->f[15] = FPU_CVT_S_W(*(int32_t*)&ctx->f[15]);
    // 0x267678: 0xc4d039e8
    ctx->pc = 0x267678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 14824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x26767c: 0x46808420
    ctx->pc = 0x26767cu;
    ctx->f[16] = FPU_CVT_S_W(*(int32_t*)&ctx->f[16]);
    // 0x267680: 0x80b43d4
    ctx->pc = 0x267680u;
    ctx->pc = 0x2D0F50u;
    MBWindowSetRegion_0x2d0f50(rdram, ctx, runtime); return;
    ctx->pc = 0x267688u;
}
