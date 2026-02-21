#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_BGLoadModelDone
// Address: 0x2c78f8 - 0x2c7b54
void MBOX_BGLoadModelDone_0x2c78f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c78f8u;

label_2c78f8:
    // 0x2c78f8: 0x27bdffb0
    ctx->pc = 0x2c78f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c78fc:
    // 0x2c78fc: 0xffbf0040
    ctx->pc = 0x2c78fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c7900:
    // 0x2c7900: 0xffb30030
    ctx->pc = 0x2c7900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2c7904:
    // 0x2c7904: 0xffb20020
    ctx->pc = 0x2c7904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c7908:
    // 0x2c7908: 0xffb10010
    ctx->pc = 0x2c7908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2c790c:
    // 0x2c790c: 0xffb00000
    ctx->pc = 0x2c790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c7910:
    // 0x2c7910: 0x3c020036
    ctx->pc = 0x2c7910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2c7914:
    // 0x2c7914: 0x8c44dee0
    ctx->pc = 0x2c7914u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
label_2c7918:
    // 0x2c7918: 0x3c020038
    ctx->pc = 0x2c7918u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c791c:
    // 0x2c791c: 0x8c42c968
    ctx->pc = 0x2c791cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953320)));
label_2c7920:
    // 0x2c7920: 0x4400042
label_2c7924:
    if (ctx->pc == 0x2C7924u) {
        ctx->pc = 0x2C7924u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        ctx->pc = 0x2C7928u;
        goto label_2c7928;
    }
    ctx->pc = 0x2C7920u;
    {
        const bool branch_taken_0x2c7920 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C7924u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c7920) {
            ctx->pc = 0x2C7A2Cu;
            goto label_2c7a2c;
        }
    }
    ctx->pc = 0x2C7928u;
label_2c7928:
    // 0x2c7928: 0x8c53c968
    ctx->pc = 0x2c7928u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294953320)));
label_2c792c:
    // 0x2c792c: 0x24030018
    ctx->pc = 0x2c792cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
label_2c7930:
    // 0x2c7930: 0x2631818
    ctx->pc = 0x2c7930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2c7934:
    // 0x2c7934: 0x3c020038
    ctx->pc = 0x2c7934u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c7938:
    // 0x2c7938: 0x2442c508
    ctx->pc = 0x2c7938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952200));
label_2c793c:
    // 0x2c793c: 0x629021
    ctx->pc = 0x2c793cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c7940:
    // 0x2c7940: 0x131100
    ctx->pc = 0x2c7940u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 4));
label_2c7944:
    // 0x2c7944: 0x24420004
    ctx->pc = 0x2c7944u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
label_2c7948:
    // 0x2c7948: 0x8c830038
    ctx->pc = 0x2c7948u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_2c794c:
    // 0x2c794c: 0x438021
    ctx->pc = 0x2c794cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c7950:
    // 0x2c7950: 0x8e43000c
    ctx->pc = 0x2c7950u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2c7954:
    // 0x2c7954: 0x2c620005
    ctx->pc = 0x2c7954u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_2c7958:
    // 0x2c7958: 0x10400076
label_2c795c:
    if (ctx->pc == 0x2C795Cu) {
        ctx->pc = 0x2C795Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2C7960u;
        goto label_2c7960;
    }
    ctx->pc = 0x2C7958u;
    {
        const bool branch_taken_0x2c7958 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C795Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2c7958) {
            ctx->pc = 0x2C7B34u;
            goto label_2c7b34;
        }
    }
    ctx->pc = 0x2C7960u;
label_2c7960:
    // 0x2c7960: 0x24427290
    ctx->pc = 0x2c7960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29328));
label_2c7964:
    // 0x2c7964: 0x31880
    ctx->pc = 0x2c7964u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2c7968:
    // 0x2c7968: 0x621821
    ctx->pc = 0x2c7968u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c796c:
    // 0x2c796c: 0x8c620000
    ctx->pc = 0x2c796cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c7970:
    // 0x2c7970: 0x400008
label_2c7974:
    if (ctx->pc == 0x2C7974u) {
        ctx->pc = 0x2C7978u;
        goto label_2c7978;
    }
    ctx->pc = 0x2C7970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C78F8u: goto label_2c78f8;
            case 0x2C78FCu: goto label_2c78fc;
            case 0x2C7900u: goto label_2c7900;
            case 0x2C7904u: goto label_2c7904;
            case 0x2C7908u: goto label_2c7908;
            case 0x2C790Cu: goto label_2c790c;
            case 0x2C7910u: goto label_2c7910;
            case 0x2C7914u: goto label_2c7914;
            case 0x2C7918u: goto label_2c7918;
            case 0x2C791Cu: goto label_2c791c;
            case 0x2C7920u: goto label_2c7920;
            case 0x2C7924u: goto label_2c7924;
            case 0x2C7928u: goto label_2c7928;
            case 0x2C792Cu: goto label_2c792c;
            case 0x2C7930u: goto label_2c7930;
            case 0x2C7934u: goto label_2c7934;
            case 0x2C7938u: goto label_2c7938;
            case 0x2C793Cu: goto label_2c793c;
            case 0x2C7940u: goto label_2c7940;
            case 0x2C7944u: goto label_2c7944;
            case 0x2C7948u: goto label_2c7948;
            case 0x2C794Cu: goto label_2c794c;
            case 0x2C7950u: goto label_2c7950;
            case 0x2C7954u: goto label_2c7954;
            case 0x2C7958u: goto label_2c7958;
            case 0x2C795Cu: goto label_2c795c;
            case 0x2C7960u: goto label_2c7960;
            case 0x2C7964u: goto label_2c7964;
            case 0x2C7968u: goto label_2c7968;
            case 0x2C796Cu: goto label_2c796c;
            case 0x2C7970u: goto label_2c7970;
            case 0x2C7974u: goto label_2c7974;
            case 0x2C7978u: goto label_2c7978;
            case 0x2C797Cu: goto label_2c797c;
            case 0x2C7980u: goto label_2c7980;
            case 0x2C7984u: goto label_2c7984;
            case 0x2C7988u: goto label_2c7988;
            case 0x2C798Cu: goto label_2c798c;
            case 0x2C7990u: goto label_2c7990;
            case 0x2C7994u: goto label_2c7994;
            case 0x2C7998u: goto label_2c7998;
            case 0x2C799Cu: goto label_2c799c;
            case 0x2C79A0u: goto label_2c79a0;
            case 0x2C79A4u: goto label_2c79a4;
            case 0x2C79A8u: goto label_2c79a8;
            case 0x2C79ACu: goto label_2c79ac;
            case 0x2C79B0u: goto label_2c79b0;
            case 0x2C79B4u: goto label_2c79b4;
            case 0x2C79B8u: goto label_2c79b8;
            case 0x2C79BCu: goto label_2c79bc;
            case 0x2C79C0u: goto label_2c79c0;
            case 0x2C79C4u: goto label_2c79c4;
            case 0x2C79C8u: goto label_2c79c8;
            case 0x2C79CCu: goto label_2c79cc;
            case 0x2C79D0u: goto label_2c79d0;
            case 0x2C79D4u: goto label_2c79d4;
            case 0x2C79D8u: goto label_2c79d8;
            case 0x2C79DCu: goto label_2c79dc;
            case 0x2C79E0u: goto label_2c79e0;
            case 0x2C79E4u: goto label_2c79e4;
            case 0x2C79E8u: goto label_2c79e8;
            case 0x2C79ECu: goto label_2c79ec;
            case 0x2C79F0u: goto label_2c79f0;
            case 0x2C79F4u: goto label_2c79f4;
            case 0x2C79F8u: goto label_2c79f8;
            case 0x2C79FCu: goto label_2c79fc;
            case 0x2C7A00u: goto label_2c7a00;
            case 0x2C7A04u: goto label_2c7a04;
            case 0x2C7A08u: goto label_2c7a08;
            case 0x2C7A0Cu: goto label_2c7a0c;
            case 0x2C7A10u: goto label_2c7a10;
            case 0x2C7A14u: goto label_2c7a14;
            case 0x2C7A18u: goto label_2c7a18;
            case 0x2C7A1Cu: goto label_2c7a1c;
            case 0x2C7A20u: goto label_2c7a20;
            case 0x2C7A24u: goto label_2c7a24;
            case 0x2C7A28u: goto label_2c7a28;
            case 0x2C7A2Cu: goto label_2c7a2c;
            case 0x2C7A30u: goto label_2c7a30;
            case 0x2C7A34u: goto label_2c7a34;
            case 0x2C7A38u: goto label_2c7a38;
            case 0x2C7A3Cu: goto label_2c7a3c;
            case 0x2C7A40u: goto label_2c7a40;
            case 0x2C7A44u: goto label_2c7a44;
            case 0x2C7A48u: goto label_2c7a48;
            case 0x2C7A4Cu: goto label_2c7a4c;
            case 0x2C7A50u: goto label_2c7a50;
            case 0x2C7A54u: goto label_2c7a54;
            case 0x2C7A58u: goto label_2c7a58;
            case 0x2C7A5Cu: goto label_2c7a5c;
            case 0x2C7A60u: goto label_2c7a60;
            case 0x2C7A64u: goto label_2c7a64;
            case 0x2C7A68u: goto label_2c7a68;
            case 0x2C7A6Cu: goto label_2c7a6c;
            case 0x2C7A70u: goto label_2c7a70;
            case 0x2C7A74u: goto label_2c7a74;
            case 0x2C7A78u: goto label_2c7a78;
            case 0x2C7A7Cu: goto label_2c7a7c;
            case 0x2C7A80u: goto label_2c7a80;
            case 0x2C7A84u: goto label_2c7a84;
            case 0x2C7A88u: goto label_2c7a88;
            case 0x2C7A8Cu: goto label_2c7a8c;
            case 0x2C7A90u: goto label_2c7a90;
            case 0x2C7A94u: goto label_2c7a94;
            case 0x2C7A98u: goto label_2c7a98;
            case 0x2C7A9Cu: goto label_2c7a9c;
            case 0x2C7AA0u: goto label_2c7aa0;
            case 0x2C7AA4u: goto label_2c7aa4;
            case 0x2C7AA8u: goto label_2c7aa8;
            case 0x2C7AACu: goto label_2c7aac;
            case 0x2C7AB0u: goto label_2c7ab0;
            case 0x2C7AB4u: goto label_2c7ab4;
            case 0x2C7AB8u: goto label_2c7ab8;
            case 0x2C7ABCu: goto label_2c7abc;
            case 0x2C7AC0u: goto label_2c7ac0;
            case 0x2C7AC4u: goto label_2c7ac4;
            case 0x2C7AC8u: goto label_2c7ac8;
            case 0x2C7ACCu: goto label_2c7acc;
            case 0x2C7AD0u: goto label_2c7ad0;
            case 0x2C7AD4u: goto label_2c7ad4;
            case 0x2C7AD8u: goto label_2c7ad8;
            case 0x2C7ADCu: goto label_2c7adc;
            case 0x2C7AE0u: goto label_2c7ae0;
            case 0x2C7AE4u: goto label_2c7ae4;
            case 0x2C7AE8u: goto label_2c7ae8;
            case 0x2C7AECu: goto label_2c7aec;
            case 0x2C7AF0u: goto label_2c7af0;
            case 0x2C7AF4u: goto label_2c7af4;
            case 0x2C7AF8u: goto label_2c7af8;
            case 0x2C7AFCu: goto label_2c7afc;
            case 0x2C7B00u: goto label_2c7b00;
            case 0x2C7B04u: goto label_2c7b04;
            case 0x2C7B08u: goto label_2c7b08;
            case 0x2C7B0Cu: goto label_2c7b0c;
            case 0x2C7B10u: goto label_2c7b10;
            case 0x2C7B14u: goto label_2c7b14;
            case 0x2C7B18u: goto label_2c7b18;
            case 0x2C7B1Cu: goto label_2c7b1c;
            case 0x2C7B20u: goto label_2c7b20;
            case 0x2C7B24u: goto label_2c7b24;
            case 0x2C7B28u: goto label_2c7b28;
            case 0x2C7B2Cu: goto label_2c7b2c;
            case 0x2C7B30u: goto label_2c7b30;
            case 0x2C7B34u: goto label_2c7b34;
            case 0x2C7B38u: goto label_2c7b38;
            case 0x2C7B3Cu: goto label_2c7b3c;
            case 0x2C7B40u: goto label_2c7b40;
            case 0x2C7B44u: goto label_2c7b44;
            case 0x2C7B48u: goto label_2c7b48;
            case 0x2C7B4Cu: goto label_2c7b4c;
            case 0x2C7B50u: goto label_2c7b50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C7978u;
label_2c7978:
    // 0x2c7978: 0x8c820038
    ctx->pc = 0x2c7978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_2c797c:
    // 0x2c797c: 0x131900
    ctx->pc = 0x2c797cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 4));
label_2c7980:
    // 0x2c7980: 0x431021
    ctx->pc = 0x2c7980u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c7984:
    // 0x2c7984: 0x8c470008
    ctx->pc = 0x2c7984u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2c7988:
    // 0x2c7988: 0x8e080000
    ctx->pc = 0x2c7988u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c798c:
    // 0x2c798c: 0x24020002
    ctx->pc = 0x2c798cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2c7990:
    // 0x2c7990: 0xae02000c
    ctx->pc = 0x2c7990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2c7994:
    // 0x2c7994: 0x138140
    ctx->pc = 0x2c7994u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 5));
label_2c7998:
    // 0x2c7998: 0x3c020038
    ctx->pc = 0x2c7998u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c799c:
    // 0x2c799c: 0x2442c6e8
    ctx->pc = 0x2c799cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952680));
label_2c79a0:
    // 0x2c79a0: 0x2028021
    ctx->pc = 0x2c79a0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c79a4:
    // 0x2c79a4: 0x200202d
    ctx->pc = 0x2c79a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c79a8:
    // 0x2c79a8: 0x3c05003b
    ctx->pc = 0x2c79a8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_2c79ac:
    // 0x2c79ac: 0x24a570c0
    ctx->pc = 0x2c79acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28864));
label_2c79b0:
    // 0x2c79b0: 0x302d
    ctx->pc = 0x2c79b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c79b4:
    // 0x2c79b4: 0x3c09002c
    ctx->pc = 0x2c79b4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)44 << 16));
label_2c79b8:
    // 0x2c79b8: 0xc0b5094
label_2c79bc:
    if (ctx->pc == 0x2C79BCu) {
        ctx->pc = 0x2C79BCu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 30600));
        ctx->pc = 0x2C79C0u;
        goto label_2c79c0;
    }
    ctx->pc = 0x2C79B8u;
    SET_GPR_U32(ctx, 31, 0x2C79C0u);
    ctx->pc = 0x2C79BCu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 30600));
    ctx->pc = 0x2D4250u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFileRead_0x2d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C79C0u; }
    }
    if (ctx->pc != 0x2C79C0u) { return; }
    ctx->pc = 0x2C79C0u;
label_2c79c0:
    // 0x2c79c0: 0xae420000
    ctx->pc = 0x2c79c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2c79c4:
    // 0x2c79c4: 0x24020001
    ctx->pc = 0x2c79c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2c79c8:
    // 0x2c79c8: 0xae42000c
    ctx->pc = 0x2c79c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2c79cc:
    // 0x2c79cc: 0x3c020031
    ctx->pc = 0x2c79ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2c79d0:
    // 0x2c79d0: 0x3c04003b
    ctx->pc = 0x2c79d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2c79d4:
    // 0x2c79d4: 0x1000002f
label_2c79d8:
    if (ctx->pc == 0x2C79D8u) {
        ctx->pc = 0x2C79D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29184));
        ctx->pc = 0x2C79DCu;
        goto label_2c79dc;
    }
    ctx->pc = 0x2C79D4u;
    {
        const bool branch_taken_0x2c79d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C79D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29184));
        if (branch_taken_0x2c79d4) {
            ctx->pc = 0x2C7A94u;
            goto label_2c7a94;
        }
    }
    ctx->pc = 0x2C79DCu;
label_2c79dc:
    // 0x2c79dc: 0x8e430000
    ctx->pc = 0x2c79dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c79e0:
    // 0x2c79e0: 0x8c620010
    ctx->pc = 0x2c79e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2c79e4:
    // 0x2c79e4: 0x10400053
label_2c79e8:
    if (ctx->pc == 0x2C79E8u) {
        ctx->pc = 0x2C79E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2C79ECu;
        goto label_2c79ec;
    }
    ctx->pc = 0x2C79E4u;
    {
        const bool branch_taken_0x2c79e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C79E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2c79e4) {
            ctx->pc = 0x2C7B34u;
            goto label_2c7b34;
        }
    }
    ctx->pc = 0x2C79ECu;
label_2c79ec:
    // 0x2c79ec: 0xac620010
    ctx->pc = 0x2c79ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2c79f0:
    // 0x2c79f0: 0x131140
    ctx->pc = 0x2c79f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 5));
label_2c79f4:
    // 0x2c79f4: 0x3c050038
    ctx->pc = 0x2c79f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)56 << 16));
label_2c79f8:
    // 0x2c79f8: 0x24a5c6e8
    ctx->pc = 0x2c79f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294952680));
label_2c79fc:
    // 0x2c79fc: 0x260202d
    ctx->pc = 0x2c79fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a00:
    // 0x2c7a00: 0xc0b1cbc
label_2c7a04:
    if (ctx->pc == 0x2C7A04u) {
        ctx->pc = 0x2C7A04u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->pc = 0x2C7A08u;
        goto label_2c7a08;
    }
    ctx->pc = 0x2C7A00u;
    SET_GPR_U32(ctx, 31, 0x2C7A08u);
    ctx->pc = 0x2C7A04u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x2C72F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupModel_0x2c72f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A08u; }
    }
    if (ctx->pc != 0x2C7A08u) { return; }
    ctx->pc = 0x2C7A08u;
label_2c7a08:
    // 0x2c7a08: 0xae400000
    ctx->pc = 0x2c7a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2c7a0c:
    // 0x2c7a0c: 0x24020002
    ctx->pc = 0x2c7a0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2c7a10:
    // 0x2c7a10: 0xc0abbf8
label_2c7a14:
    if (ctx->pc == 0x2C7A14u) {
        ctx->pc = 0x2C7A14u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x2C7A18u;
        goto label_2c7a18;
    }
    ctx->pc = 0x2C7A10u;
    SET_GPR_U32(ctx, 31, 0x2C7A18u);
    ctx->pc = 0x2C7A14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x2AEFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetTime_0x2aefe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A18u; }
    }
    if (ctx->pc != 0x2C7A18u) { return; }
    ctx->pc = 0x2C7A18u;
label_2c7a18:
    // 0x2c7a18: 0xae420014
    ctx->pc = 0x2c7a18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_2c7a1c:
    // 0x2c7a1c: 0x8e02000c
    ctx->pc = 0x2c7a1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c7a20:
    // 0x2c7a20: 0x2c420009
    ctx->pc = 0x2c7a20u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 9));
label_2c7a24:
    // 0x2c7a24: 0x14400003
label_2c7a28:
    if (ctx->pc == 0x2C7A28u) {
        ctx->pc = 0x2C7A28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2C7A2Cu;
        goto label_2c7a2c;
    }
    ctx->pc = 0x2C7A24u;
    {
        const bool branch_taken_0x2c7a24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C7A28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2c7a24) {
            ctx->pc = 0x2C7A34u;
            goto label_2c7a34;
        }
    }
    ctx->pc = 0x2C7A2Cu;
label_2c7a2c:
    // 0x2c7a2c: 0x10000042
label_2c7a30:
    if (ctx->pc == 0x2C7A30u) {
        ctx->pc = 0x2C7A30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C7A34u;
        goto label_2c7a34;
    }
    ctx->pc = 0x2C7A2Cu;
    {
        const bool branch_taken_0x2c7a2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7A30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c7a2c) {
            ctx->pc = 0x2C7B38u;
            goto label_2c7b38;
        }
    }
    ctx->pc = 0x2C7A34u;
label_2c7a34:
    // 0x2c7a34: 0x1000003f
label_2c7a38:
    if (ctx->pc == 0x2C7A38u) {
        ctx->pc = 0x2C7A38u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x2C7A3Cu;
        goto label_2c7a3c;
    }
    ctx->pc = 0x2C7A34u;
    {
        const bool branch_taken_0x2c7a34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7A38u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x2c7a34) {
            ctx->pc = 0x2C7B34u;
            goto label_2c7b34;
        }
    }
    ctx->pc = 0x2C7A3Cu;
label_2c7a3c:
    // 0x2c7a3c: 0x8e030000
    ctx->pc = 0x2c7a3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c7a40:
    // 0x2c7a40: 0x8e080004
    ctx->pc = 0x2c7a40u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c7a44:
    // 0x2c7a44: 0x8e070008
    ctx->pc = 0x2c7a44u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2c7a48:
    // 0x2c7a48: 0x24110003
    ctx->pc = 0x2c7a48u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 3));
label_2c7a4c:
    // 0x2c7a4c: 0xae11000c
    ctx->pc = 0x2c7a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_2c7a50:
    // 0x2c7a50: 0x138140
    ctx->pc = 0x2c7a50u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 5));
label_2c7a54:
    // 0x2c7a54: 0x3c020038
    ctx->pc = 0x2c7a54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c7a58:
    // 0x2c7a58: 0x2442c6e8
    ctx->pc = 0x2c7a58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952680));
label_2c7a5c:
    // 0x2c7a5c: 0x2028021
    ctx->pc = 0x2c7a5cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c7a60:
    // 0x2c7a60: 0x200202d
    ctx->pc = 0x2c7a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a64:
    // 0x2c7a64: 0x3c05003b
    ctx->pc = 0x2c7a64u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_2c7a68:
    // 0x2c7a68: 0x24a570d0
    ctx->pc = 0x2c7a68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28880));
label_2c7a6c:
    // 0x2c7a6c: 0x302d
    ctx->pc = 0x2c7a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a70:
    // 0x2c7a70: 0x684021
    ctx->pc = 0x2c7a70u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2c7a74:
    // 0x2c7a74: 0x3c09002c
    ctx->pc = 0x2c7a74u;
    SET_GPR_U32(ctx, 9, ((uint32_t)44 << 16));
label_2c7a78:
    // 0x2c7a78: 0xc0b5094
label_2c7a7c:
    if (ctx->pc == 0x2C7A7Cu) {
        ctx->pc = 0x2C7A7Cu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 30640));
        ctx->pc = 0x2C7A80u;
        goto label_2c7a80;
    }
    ctx->pc = 0x2C7A78u;
    SET_GPR_U32(ctx, 31, 0x2C7A80u);
    ctx->pc = 0x2C7A7Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 30640));
    ctx->pc = 0x2D4250u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFileRead_0x2d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A80u; }
    }
    if (ctx->pc != 0x2C7A80u) { return; }
    ctx->pc = 0x2C7A80u;
label_2c7a80:
    // 0x2c7a80: 0xae420004
    ctx->pc = 0x2c7a80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2c7a84:
    // 0x2c7a84: 0xae51000c
    ctx->pc = 0x2c7a84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_2c7a88:
    // 0x2c7a88: 0x3c020031
    ctx->pc = 0x2c7a88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2c7a8c:
    // 0x2c7a8c: 0x3c04003b
    ctx->pc = 0x2c7a8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2c7a90:
    // 0x2c7a90: 0x24847230
    ctx->pc = 0x2c7a90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29232));
label_2c7a94:
    // 0x2c7a94: 0x260282d
    ctx->pc = 0x2c7a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a98:
    // 0x2c7a98: 0x200302d
    ctx->pc = 0x2c7a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a9c:
    // 0x2c7a9c: 0xc0b4a34
label_2c7aa0:
    if (ctx->pc == 0x2C7AA0u) {
        ctx->pc = 0x2C7AA0u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294967216)));
        ctx->pc = 0x2C7AA4u;
        goto label_2c7aa4;
    }
    ctx->pc = 0x2C7A9Cu;
    SET_GPR_U32(ctx, 31, 0x2C7AA4u);
    ctx->pc = 0x2C7AA0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294967216)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7AA4u; }
    }
    if (ctx->pc != 0x2C7AA4u) { return; }
    ctx->pc = 0x2C7AA4u;
label_2c7aa4:
    // 0x2c7aa4: 0x10000024
label_2c7aa8:
    if (ctx->pc == 0x2C7AA8u) {
        ctx->pc = 0x2C7AA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7AACu;
        goto label_2c7aac;
    }
    ctx->pc = 0x2C7AA4u;
    {
        const bool branch_taken_0x2c7aa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7AA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c7aa4) {
            ctx->pc = 0x2C7B38u;
            goto label_2c7b38;
        }
    }
    ctx->pc = 0x2C7AACu;
label_2c7aac:
    // 0x2c7aac: 0x8e430004
    ctx->pc = 0x2c7aacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2c7ab0:
    // 0x2c7ab0: 0x8c620010
    ctx->pc = 0x2c7ab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2c7ab4:
    // 0x2c7ab4: 0x1040001f
label_2c7ab8:
    if (ctx->pc == 0x2C7AB8u) {
        ctx->pc = 0x2C7AB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2C7ABCu;
        goto label_2c7abc;
    }
    ctx->pc = 0x2C7AB4u;
    {
        const bool branch_taken_0x2c7ab4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7AB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2c7ab4) {
            ctx->pc = 0x2C7B34u;
            goto label_2c7b34;
        }
    }
    ctx->pc = 0x2C7ABCu;
label_2c7abc:
    // 0x2c7abc: 0xac620010
    ctx->pc = 0x2c7abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2c7ac0:
    // 0x2c7ac0: 0xae400004
    ctx->pc = 0x2c7ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2c7ac4:
    // 0x2c7ac4: 0x24020004
    ctx->pc = 0x2c7ac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2c7ac8:
    // 0x2c7ac8: 0xc0abbf8
label_2c7acc:
    if (ctx->pc == 0x2C7ACCu) {
        ctx->pc = 0x2C7ACCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x2C7AD0u;
        goto label_2c7ad0;
    }
    ctx->pc = 0x2C7AC8u;
    SET_GPR_U32(ctx, 31, 0x2C7AD0u);
    ctx->pc = 0x2C7ACCu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x2AEFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetTime_0x2aefe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7AD0u; }
    }
    if (ctx->pc != 0x2C7AD0u) { return; }
    ctx->pc = 0x2C7AD0u;
label_2c7ad0:
    // 0x2c7ad0: 0xae420014
    ctx->pc = 0x2c7ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_2c7ad4:
    // 0x2c7ad4: 0xc0ab9b6
label_2c7ad8:
    if (ctx->pc == 0x2C7AD8u) {
        ctx->pc = 0x2C7AD8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7ADCu;
        goto label_2c7adc;
    }
    ctx->pc = 0x2C7AD4u;
    SET_GPR_U32(ctx, 31, 0x2C7ADCu);
    ctx->pc = 0x2C7AD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AE6D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetupTexture_0x2ae6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7ADCu; }
    }
    if (ctx->pc != 0x2C7ADCu) { return; }
    ctx->pc = 0x2C7ADCu;
label_2c7adc:
    // 0x2c7adc: 0x8e02000c
    ctx->pc = 0x2c7adcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c7ae0:
    // 0x2c7ae0: 0x2c420009
    ctx->pc = 0x2c7ae0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 9));
label_2c7ae4:
    // 0x2c7ae4: 0x10400014
label_2c7ae8:
    if (ctx->pc == 0x2C7AE8u) {
        ctx->pc = 0x2C7AE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C7AECu;
        goto label_2c7aec;
    }
    ctx->pc = 0x2C7AE4u;
    {
        const bool branch_taken_0x2c7ae4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7AE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c7ae4) {
            ctx->pc = 0x2C7B38u;
            goto label_2c7b38;
        }
    }
    ctx->pc = 0x2C7AECu;
label_2c7aec:
    // 0x2c7aec: 0x10000011
label_2c7af0:
    if (ctx->pc == 0x2C7AF0u) {
        ctx->pc = 0x2C7AF0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x2C7AF4u;
        goto label_2c7af4;
    }
    ctx->pc = 0x2C7AECu;
    {
        const bool branch_taken_0x2c7aec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7AF0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x2c7aec) {
            ctx->pc = 0x2C7B34u;
            goto label_2c7b34;
        }
    }
    ctx->pc = 0x2C7AF4u;
label_2c7af4:
    // 0x2c7af4: 0x131940
    ctx->pc = 0x2c7af4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 5));
label_2c7af8:
    // 0x2c7af8: 0x3c060038
    ctx->pc = 0x2c7af8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)56 << 16));
label_2c7afc:
    // 0x2c7afc: 0x24c6c6e8
    ctx->pc = 0x2c7afcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952680));
label_2c7b00:
    // 0x2c7b00: 0x3c020031
    ctx->pc = 0x2c7b00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2c7b04:
    // 0x2c7b04: 0x3c04003b
    ctx->pc = 0x2c7b04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2c7b08:
    // 0x2c7b08: 0x24847260
    ctx->pc = 0x2c7b08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29280));
label_2c7b0c:
    // 0x2c7b0c: 0x260282d
    ctx->pc = 0x2c7b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b10:
    // 0x2c7b10: 0x663021
    ctx->pc = 0x2c7b10u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2c7b14:
    // 0x2c7b14: 0xc0b4a34
label_2c7b18:
    if (ctx->pc == 0x2C7B18u) {
        ctx->pc = 0x2C7B18u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294967216)));
        ctx->pc = 0x2C7B1Cu;
        goto label_2c7b1c;
    }
    ctx->pc = 0x2C7B14u;
    SET_GPR_U32(ctx, 31, 0x2C7B1Cu);
    ctx->pc = 0x2C7B18u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294967216)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B1Cu; }
    }
    if (ctx->pc != 0x2C7B1Cu) { return; }
    ctx->pc = 0x2C7B1Cu;
label_2c7b1c:
    // 0x2c7b1c: 0x3c030038
    ctx->pc = 0x2c7b1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
label_2c7b20:
    // 0x2c7b20: 0x2402ffff
    ctx->pc = 0x2c7b20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c7b24:
    // 0x2c7b24: 0xac62c968
    ctx->pc = 0x2c7b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953320), GPR_U32(ctx, 2));
label_2c7b28:
    // 0x2c7b28: 0x24020001
    ctx->pc = 0x2c7b28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2c7b2c:
    // 0x2c7b2c: 0x10000002
label_2c7b30:
    if (ctx->pc == 0x2C7B30u) {
        ctx->pc = 0x2C7B30u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2C7B34u;
        goto label_2c7b34;
    }
    ctx->pc = 0x2C7B2Cu;
    {
        const bool branch_taken_0x2c7b2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7B30u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2c7b2c) {
            ctx->pc = 0x2C7B38u;
            goto label_2c7b38;
        }
    }
    ctx->pc = 0x2C7B34u;
label_2c7b34:
    // 0x2c7b34: 0x102d
    ctx->pc = 0x2c7b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b38:
    // 0x2c7b38: 0xdfbf0040
    ctx->pc = 0x2c7b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c7b3c:
    // 0x2c7b3c: 0xdfb30030
    ctx->pc = 0x2c7b3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c7b40:
    // 0x2c7b40: 0xdfb20020
    ctx->pc = 0x2c7b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7b44:
    // 0x2c7b44: 0xdfb10010
    ctx->pc = 0x2c7b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7b48:
    // 0x2c7b48: 0xdfb00000
    ctx->pc = 0x2c7b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7b4c:
    // 0x2c7b4c: 0x3e00008
label_2c7b50:
    if (ctx->pc == 0x2C7B50u) {
        ctx->pc = 0x2C7B50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2C7B54u;
        goto label_fallthrough_0x2c7b4c;
    }
    ctx->pc = 0x2C7B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7B50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C78F8u: goto label_2c78f8;
            case 0x2C78FCu: goto label_2c78fc;
            case 0x2C7900u: goto label_2c7900;
            case 0x2C7904u: goto label_2c7904;
            case 0x2C7908u: goto label_2c7908;
            case 0x2C790Cu: goto label_2c790c;
            case 0x2C7910u: goto label_2c7910;
            case 0x2C7914u: goto label_2c7914;
            case 0x2C7918u: goto label_2c7918;
            case 0x2C791Cu: goto label_2c791c;
            case 0x2C7920u: goto label_2c7920;
            case 0x2C7924u: goto label_2c7924;
            case 0x2C7928u: goto label_2c7928;
            case 0x2C792Cu: goto label_2c792c;
            case 0x2C7930u: goto label_2c7930;
            case 0x2C7934u: goto label_2c7934;
            case 0x2C7938u: goto label_2c7938;
            case 0x2C793Cu: goto label_2c793c;
            case 0x2C7940u: goto label_2c7940;
            case 0x2C7944u: goto label_2c7944;
            case 0x2C7948u: goto label_2c7948;
            case 0x2C794Cu: goto label_2c794c;
            case 0x2C7950u: goto label_2c7950;
            case 0x2C7954u: goto label_2c7954;
            case 0x2C7958u: goto label_2c7958;
            case 0x2C795Cu: goto label_2c795c;
            case 0x2C7960u: goto label_2c7960;
            case 0x2C7964u: goto label_2c7964;
            case 0x2C7968u: goto label_2c7968;
            case 0x2C796Cu: goto label_2c796c;
            case 0x2C7970u: goto label_2c7970;
            case 0x2C7974u: goto label_2c7974;
            case 0x2C7978u: goto label_2c7978;
            case 0x2C797Cu: goto label_2c797c;
            case 0x2C7980u: goto label_2c7980;
            case 0x2C7984u: goto label_2c7984;
            case 0x2C7988u: goto label_2c7988;
            case 0x2C798Cu: goto label_2c798c;
            case 0x2C7990u: goto label_2c7990;
            case 0x2C7994u: goto label_2c7994;
            case 0x2C7998u: goto label_2c7998;
            case 0x2C799Cu: goto label_2c799c;
            case 0x2C79A0u: goto label_2c79a0;
            case 0x2C79A4u: goto label_2c79a4;
            case 0x2C79A8u: goto label_2c79a8;
            case 0x2C79ACu: goto label_2c79ac;
            case 0x2C79B0u: goto label_2c79b0;
            case 0x2C79B4u: goto label_2c79b4;
            case 0x2C79B8u: goto label_2c79b8;
            case 0x2C79BCu: goto label_2c79bc;
            case 0x2C79C0u: goto label_2c79c0;
            case 0x2C79C4u: goto label_2c79c4;
            case 0x2C79C8u: goto label_2c79c8;
            case 0x2C79CCu: goto label_2c79cc;
            case 0x2C79D0u: goto label_2c79d0;
            case 0x2C79D4u: goto label_2c79d4;
            case 0x2C79D8u: goto label_2c79d8;
            case 0x2C79DCu: goto label_2c79dc;
            case 0x2C79E0u: goto label_2c79e0;
            case 0x2C79E4u: goto label_2c79e4;
            case 0x2C79E8u: goto label_2c79e8;
            case 0x2C79ECu: goto label_2c79ec;
            case 0x2C79F0u: goto label_2c79f0;
            case 0x2C79F4u: goto label_2c79f4;
            case 0x2C79F8u: goto label_2c79f8;
            case 0x2C79FCu: goto label_2c79fc;
            case 0x2C7A00u: goto label_2c7a00;
            case 0x2C7A04u: goto label_2c7a04;
            case 0x2C7A08u: goto label_2c7a08;
            case 0x2C7A0Cu: goto label_2c7a0c;
            case 0x2C7A10u: goto label_2c7a10;
            case 0x2C7A14u: goto label_2c7a14;
            case 0x2C7A18u: goto label_2c7a18;
            case 0x2C7A1Cu: goto label_2c7a1c;
            case 0x2C7A20u: goto label_2c7a20;
            case 0x2C7A24u: goto label_2c7a24;
            case 0x2C7A28u: goto label_2c7a28;
            case 0x2C7A2Cu: goto label_2c7a2c;
            case 0x2C7A30u: goto label_2c7a30;
            case 0x2C7A34u: goto label_2c7a34;
            case 0x2C7A38u: goto label_2c7a38;
            case 0x2C7A3Cu: goto label_2c7a3c;
            case 0x2C7A40u: goto label_2c7a40;
            case 0x2C7A44u: goto label_2c7a44;
            case 0x2C7A48u: goto label_2c7a48;
            case 0x2C7A4Cu: goto label_2c7a4c;
            case 0x2C7A50u: goto label_2c7a50;
            case 0x2C7A54u: goto label_2c7a54;
            case 0x2C7A58u: goto label_2c7a58;
            case 0x2C7A5Cu: goto label_2c7a5c;
            case 0x2C7A60u: goto label_2c7a60;
            case 0x2C7A64u: goto label_2c7a64;
            case 0x2C7A68u: goto label_2c7a68;
            case 0x2C7A6Cu: goto label_2c7a6c;
            case 0x2C7A70u: goto label_2c7a70;
            case 0x2C7A74u: goto label_2c7a74;
            case 0x2C7A78u: goto label_2c7a78;
            case 0x2C7A7Cu: goto label_2c7a7c;
            case 0x2C7A80u: goto label_2c7a80;
            case 0x2C7A84u: goto label_2c7a84;
            case 0x2C7A88u: goto label_2c7a88;
            case 0x2C7A8Cu: goto label_2c7a8c;
            case 0x2C7A90u: goto label_2c7a90;
            case 0x2C7A94u: goto label_2c7a94;
            case 0x2C7A98u: goto label_2c7a98;
            case 0x2C7A9Cu: goto label_2c7a9c;
            case 0x2C7AA0u: goto label_2c7aa0;
            case 0x2C7AA4u: goto label_2c7aa4;
            case 0x2C7AA8u: goto label_2c7aa8;
            case 0x2C7AACu: goto label_2c7aac;
            case 0x2C7AB0u: goto label_2c7ab0;
            case 0x2C7AB4u: goto label_2c7ab4;
            case 0x2C7AB8u: goto label_2c7ab8;
            case 0x2C7ABCu: goto label_2c7abc;
            case 0x2C7AC0u: goto label_2c7ac0;
            case 0x2C7AC4u: goto label_2c7ac4;
            case 0x2C7AC8u: goto label_2c7ac8;
            case 0x2C7ACCu: goto label_2c7acc;
            case 0x2C7AD0u: goto label_2c7ad0;
            case 0x2C7AD4u: goto label_2c7ad4;
            case 0x2C7AD8u: goto label_2c7ad8;
            case 0x2C7ADCu: goto label_2c7adc;
            case 0x2C7AE0u: goto label_2c7ae0;
            case 0x2C7AE4u: goto label_2c7ae4;
            case 0x2C7AE8u: goto label_2c7ae8;
            case 0x2C7AECu: goto label_2c7aec;
            case 0x2C7AF0u: goto label_2c7af0;
            case 0x2C7AF4u: goto label_2c7af4;
            case 0x2C7AF8u: goto label_2c7af8;
            case 0x2C7AFCu: goto label_2c7afc;
            case 0x2C7B00u: goto label_2c7b00;
            case 0x2C7B04u: goto label_2c7b04;
            case 0x2C7B08u: goto label_2c7b08;
            case 0x2C7B0Cu: goto label_2c7b0c;
            case 0x2C7B10u: goto label_2c7b10;
            case 0x2C7B14u: goto label_2c7b14;
            case 0x2C7B18u: goto label_2c7b18;
            case 0x2C7B1Cu: goto label_2c7b1c;
            case 0x2C7B20u: goto label_2c7b20;
            case 0x2C7B24u: goto label_2c7b24;
            case 0x2C7B28u: goto label_2c7b28;
            case 0x2C7B2Cu: goto label_2c7b2c;
            case 0x2C7B30u: goto label_2c7b30;
            case 0x2C7B34u: goto label_2c7b34;
            case 0x2C7B38u: goto label_2c7b38;
            case 0x2C7B3Cu: goto label_2c7b3c;
            case 0x2C7B40u: goto label_2c7b40;
            case 0x2C7B44u: goto label_2c7b44;
            case 0x2C7B48u: goto label_2c7b48;
            case 0x2C7B4Cu: goto label_2c7b4c;
            case 0x2C7B50u: goto label_2c7b50;
            default: break;
        }
        return;
    }
label_fallthrough_0x2c7b4c:
    ctx->pc = 0x2C7B54u;
}
