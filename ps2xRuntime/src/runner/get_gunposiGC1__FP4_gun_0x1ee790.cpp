#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: get_gunposiGC1__FP4_gun
// Address: 0x1ee790 - 0x1ee8d8
void get_gunposiGC1__FP4_gun_0x1ee790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("get_gunposiGC1__FP4_gun");


    ctx->pc = 0x1ee790u;

    // 0x1ee790: 0x84870006
    ctx->pc = 0x1ee790u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1ee794: 0x3c030050
    ctx->pc = 0x1ee794u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ee798: 0x2465dc4a
    ctx->pc = 0x1ee798u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294958154));
    // 0x1ee79c: 0x3c030050
    ctx->pc = 0x1ee79cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ee7a0: 0x2463dc4c
    ctx->pc = 0x1ee7a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958156));
    // 0x1ee7a4: 0x73040
    ctx->pc = 0x1ee7a4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 1));
    // 0x1ee7a8: 0xc73021
    ctx->pc = 0x1ee7a8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1ee7ac: 0x63080
    ctx->pc = 0x1ee7acu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ee7b0: 0xc73021
    ctx->pc = 0x1ee7b0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1ee7b4: 0x63040
    ctx->pc = 0x1ee7b4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1ee7b8: 0xa62821
    ctx->pc = 0x1ee7b8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ee7bc: 0x661821
    ctx->pc = 0x1ee7bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ee7c0: 0x84a50000
    ctx->pc = 0x1ee7c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ee7c4: 0x10a00004
    ctx->pc = 0x1EE7C4u;
    {
        const bool branch_taken_0x1ee7c4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE7C8u;
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x1ee7c4) {
            ctx->pc = 0x1EE7D8u;
            goto label_1ee7d8;
        }
    }
    ctx->pc = 0x1EE7CCu;
    // 0x1ee7cc: 0x24030001
    ctx->pc = 0x1ee7ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee7d0: 0x14a30005
    ctx->pc = 0x1EE7D0u;
    {
        const bool branch_taken_0x1ee7d0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x1EE7D4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
        if (branch_taken_0x1ee7d0) {
            ctx->pc = 0x1EE7E8u;
            goto label_1ee7e8;
        }
    }
    ctx->pc = 0x1EE7D8u;
label_1ee7d8:
    // 0x1ee7d8: 0x3403ffff
    ctx->pc = 0x1ee7d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1ee7dc: 0xa4830000
    ctx->pc = 0x1ee7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee7e0: 0x1000003b
    ctx->pc = 0x1EE7E0u;
    {
        const bool branch_taken_0x1ee7e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE7E4u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ee7e0) {
            ctx->pc = 0x1EE8D0u;
            goto label_1ee8d0;
        }
    }
    ctx->pc = 0x1EE7E8u;
label_1ee7e8:
    // 0x1ee7e8: 0x74940
    ctx->pc = 0x1ee7e8u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 7), 5));
    // 0x1ee7ec: 0x24630dcc
    ctx->pc = 0x1ee7ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3532));
    // 0x1ee7f0: 0x691821
    ctx->pc = 0x1ee7f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1ee7f4: 0x8c680000
    ctx->pc = 0x1ee7f4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ee7f8: 0x24a5fec0
    ctx->pc = 0x1ee7f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966976));
    // 0x1ee7fc: 0x240300eb
    ctx->pc = 0x1ee7fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 235));
    // 0x1ee800: 0xa32818
    ctx->pc = 0x1ee800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1ee804: 0x3c030050
    ctx->pc = 0x1ee804u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ee808: 0x24630dc8
    ctx->pc = 0x1ee808u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3528));
    // 0x1ee80c: 0x691821
    ctx->pc = 0x1ee80cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1ee810: 0x8c630000
    ctx->pc = 0x1ee810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ee814: 0x14600002
    ctx->pc = 0x1EE814u;
    {
        const bool branch_taken_0x1ee814 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EE818u;
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1ee814) {
            ctx->pc = 0x1EE820u;
            goto label_1ee820;
        }
    }
    ctx->pc = 0x1EE81Cu;
    // 0x1ee81c: 0x1cd
    ctx->pc = 0x1ee81cu;
    runtime->handleBreak(rdram, ctx);
label_1ee820:
    // 0x1ee820: 0x3c030050
    ctx->pc = 0x1ee820u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ee824: 0x24630dc0
    ctx->pc = 0x1ee824u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3520));
    // 0x1ee828: 0x24c5ff20
    ctx->pc = 0x1ee828u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 4294967072));
    // 0x1ee82c: 0x691821
    ctx->pc = 0x1ee82cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1ee830: 0x8c660000
    ctx->pc = 0x1ee830u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ee834: 0x3812
    ctx->pc = 0x1ee834u;
    SET_GPR_U32(ctx, 7, ctx->lo);
    // 0x1ee838: 0x51900
    ctx->pc = 0x1ee838u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ee83c: 0x652821
    ctx->pc = 0x1ee83cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ee840: 0x518c0
    ctx->pc = 0x1ee840u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ee844: 0x651823
    ctx->pc = 0x1ee844u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ee848: 0x68001a
    ctx->pc = 0x1ee848u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1ee84c: 0xe61823
    ctx->pc = 0x1ee84cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1ee850: 0x24630140
    ctx->pc = 0x1ee850u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 320));
    // 0x1ee854: 0x15000002
    ctx->pc = 0x1EE854u;
    {
        const bool branch_taken_0x1ee854 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EE858u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ee854) {
            ctx->pc = 0x1EE860u;
            goto label_1ee860;
        }
    }
    ctx->pc = 0x1EE85Cu;
    // 0x1ee85c: 0x1cd
    ctx->pc = 0x1ee85cu;
    runtime->handleBreak(rdram, ctx);
label_1ee860:
    // 0x1ee860: 0x84850006
    ctx->pc = 0x1ee860u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1ee864: 0x3c030050
    ctx->pc = 0x1ee864u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ee868: 0x24630dc4
    ctx->pc = 0x1ee868u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3524));
    // 0x1ee86c: 0x3012
    ctx->pc = 0x1ee86cu;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x1ee870: 0x52940
    ctx->pc = 0x1ee870u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 5));
    // 0x1ee874: 0x651821
    ctx->pc = 0x1ee874u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ee878: 0x8c630000
    ctx->pc = 0x1ee878u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ee87c: 0xc31823
    ctx->pc = 0x1ee87cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ee880: 0x246300e0
    ctx->pc = 0x1ee880u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 224));
    // 0x1ee884: 0xa4830002
    ctx->pc = 0x1ee884u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee888: 0x94830000
    ctx->pc = 0x1ee888u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ee88c: 0x4610002
    ctx->pc = 0x1EE88Cu;
    {
        const bool branch_taken_0x1ee88c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ee88c) {
            ctx->pc = 0x1EE898u;
            goto label_1ee898;
        }
    }
    ctx->pc = 0x1EE894u;
    // 0x1ee894: 0xa4800000
    ctx->pc = 0x1ee894u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_1ee898:
    // 0x1ee898: 0x94830000
    ctx->pc = 0x1ee898u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ee89c: 0x28610280
    ctx->pc = 0x1ee89cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 640));
    // 0x1ee8a0: 0x14200002
    ctx->pc = 0x1EE8A0u;
    {
        const bool branch_taken_0x1ee8a0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EE8A4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 639));
        if (branch_taken_0x1ee8a0) {
            ctx->pc = 0x1EE8ACu;
            goto label_1ee8ac;
        }
    }
    ctx->pc = 0x1EE8A8u;
    // 0x1ee8a8: 0xa4830000
    ctx->pc = 0x1ee8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_1ee8ac:
    // 0x1ee8ac: 0x94830002
    ctx->pc = 0x1ee8acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ee8b0: 0x4610002
    ctx->pc = 0x1EE8B0u;
    {
        const bool branch_taken_0x1ee8b0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ee8b0) {
            ctx->pc = 0x1EE8BCu;
            goto label_1ee8bc;
        }
    }
    ctx->pc = 0x1EE8B8u;
    // 0x1ee8b8: 0xa4800002
    ctx->pc = 0x1ee8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
label_1ee8bc:
    // 0x1ee8bc: 0x94830002
    ctx->pc = 0x1ee8bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ee8c0: 0x286101c0
    ctx->pc = 0x1ee8c0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 448));
    // 0x1ee8c4: 0x14200002
    ctx->pc = 0x1EE8C4u;
    {
        const bool branch_taken_0x1ee8c4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EE8C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 447));
        if (branch_taken_0x1ee8c4) {
            ctx->pc = 0x1EE8D0u;
            goto label_1ee8d0;
        }
    }
    ctx->pc = 0x1EE8CCu;
    // 0x1ee8cc: 0xa4830002
    ctx->pc = 0x1ee8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_1ee8d0:
    // 0x1ee8d0: 0x3e00008
    ctx->pc = 0x1EE8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE7D8u: goto label_1ee7d8;
            case 0x1EE7E8u: goto label_1ee7e8;
            case 0x1EE820u: goto label_1ee820;
            case 0x1EE860u: goto label_1ee860;
            case 0x1EE898u: goto label_1ee898;
            case 0x1EE8ACu: goto label_1ee8ac;
            case 0x1EE8BCu: goto label_1ee8bc;
            case 0x1EE8D0u: goto label_1ee8d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE8D8u;
}
