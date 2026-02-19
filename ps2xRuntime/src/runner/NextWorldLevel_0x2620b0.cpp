#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextWorldLevel
// Address: 0x2620b0 - 0x2621dc
void NextWorldLevel_0x2620b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2620b0u;

    // 0x2620b0: 0x3c02003c
    ctx->pc = 0x2620b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2620b4: 0x8c453200
    ctx->pc = 0x2620b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12800)));
    // 0x2620b8: 0x3c020034
    ctx->pc = 0x2620b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2620bc: 0x8c42e7c0
    ctx->pc = 0x2620bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x2620c0: 0x54400004
    ctx->pc = 0x2620C0u;
    {
        const bool branch_taken_0x2620c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2620c0) {
            ctx->pc = 0x2620C4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x2620D4u;
            goto label_2620d4;
        }
    }
    ctx->pc = 0x2620C8u;
    // 0x2620c8: 0x3c020031
    ctx->pc = 0x2620c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2620cc: 0x3e00008
    ctx->pc = 0x2620CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2620D0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2620D4u: goto label_2620d4;
            case 0x2620E4u: goto label_2620e4;
            case 0x262138u: goto label_262138;
            case 0x26215Cu: goto label_26215c;
            case 0x262160u: goto label_262160;
            case 0x262174u: goto label_262174;
            case 0x262178u: goto label_262178;
            case 0x262190u: goto label_262190;
            case 0x2621B8u: goto label_2621b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2620D4u;
label_2620d4:
    // 0x2620d4: 0x14820003
    ctx->pc = 0x2620D4u;
    {
        const bool branch_taken_0x2620d4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2620D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2620d4) {
            ctx->pc = 0x2620E4u;
            goto label_2620e4;
        }
    }
    ctx->pc = 0x2620DCu;
    // 0x2620dc: 0x10000020
    ctx->pc = 0x2620DCu;
    {
        const bool branch_taken_0x2620dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2620E0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 99));
        if (branch_taken_0x2620dc) {
            ctx->pc = 0x262160u;
            goto label_262160;
        }
    }
    ctx->pc = 0x2620E4u;
label_2620e4:
    // 0x2620e4: 0x8c43e7c0
    ctx->pc = 0x2620e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x2620e8: 0x84660016
    ctx->pc = 0x2620e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x2620ec: 0x1080001b
    ctx->pc = 0x2620ECu;
    {
        const bool branch_taken_0x2620ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2620F0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x2620ec) {
            ctx->pc = 0x26215Cu;
            goto label_26215c;
        }
    }
    ctx->pc = 0x2620F4u;
    // 0x2620f4: 0x84620018
    ctx->pc = 0x2620f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2620f8: 0xc2102a
    ctx->pc = 0x2620f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x2620fc: 0x5040001e
    ctx->pc = 0x2620FCu;
    {
        const bool branch_taken_0x2620fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2620fc) {
            ctx->pc = 0x262100u;
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x262178u;
            goto label_262178;
        }
    }
    ctx->pc = 0x262104u;
    // 0x262104: 0x8c62001c
    ctx->pc = 0x262104u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x262108: 0x2403010c
    ctx->pc = 0x262108u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 268));
    // 0x26210c: 0xc31818
    ctx->pc = 0x26210cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x262110: 0x621821
    ctx->pc = 0x262110u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262114: 0x84620004
    ctx->pc = 0x262114u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x262118: 0x441024
    ctx->pc = 0x262118u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26211c: 0x14400010
    ctx->pc = 0x26211Cu;
    {
        const bool branch_taken_0x26211c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262120u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26211c) {
            ctx->pc = 0x262160u;
            goto label_262160;
        }
    }
    ctx->pc = 0x262124u;
    // 0x262124: 0x8c47e7c0
    ctx->pc = 0x262124u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x262128: 0x84e80018
    ctx->pc = 0x262128u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x26212c: 0x2409010c
    ctx->pc = 0x26212cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 268));
    // 0x262130: 0x24c60001
    ctx->pc = 0x262130u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x262134: 0x0
    ctx->pc = 0x262134u;
    // NOP
label_262138:
    // 0x262138: 0xc8102a
    ctx->pc = 0x262138u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 8)));
    // 0x26213c: 0x1040000d
    ctx->pc = 0x26213Cu;
    {
        const bool branch_taken_0x26213c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x262140u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x26213c) {
            ctx->pc = 0x262174u;
            goto label_262174;
        }
    }
    ctx->pc = 0x262144u;
    // 0x262144: 0x8ce2001c
    ctx->pc = 0x262144u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x262148: 0x621821
    ctx->pc = 0x262148u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26214c: 0x84620004
    ctx->pc = 0x26214cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x262150: 0x441024
    ctx->pc = 0x262150u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x262154: 0x5040fff8
    ctx->pc = 0x262154u;
    {
        const bool branch_taken_0x262154 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x262154) {
            ctx->pc = 0x262158u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x262138u;
            goto label_262138;
        }
    }
    ctx->pc = 0x26215Cu;
label_26215c:
    // 0x26215c: 0x3c020034
    ctx->pc = 0x26215cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_262160:
    // 0x262160: 0x8c42e7c0
    ctx->pc = 0x262160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x262164: 0x84420018
    ctx->pc = 0x262164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x262168: 0xc2102a
    ctx->pc = 0x262168u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x26216c: 0x14400012
    ctx->pc = 0x26216Cu;
    {
        const bool branch_taken_0x26216c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262170u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x26216c) {
            ctx->pc = 0x2621B8u;
            goto label_2621b8;
        }
    }
    ctx->pc = 0x262174u;
label_262174:
    // 0x262174: 0x302d
    ctx->pc = 0x262174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262178:
    // 0x262178: 0x2404002c
    ctx->pc = 0x262178u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 44));
    // 0x26217c: 0x3c020034
    ctx->pc = 0x26217cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262180: 0x2448e530
    ctx->pc = 0x262180u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x262184: 0x3c02003c
    ctx->pc = 0x262184u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x262188: 0x8c433200
    ctx->pc = 0x262188u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12800)));
    // 0x26218c: 0x24a50001
    ctx->pc = 0x26218cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_262190:
    // 0x262190: 0x2ca2000e
    ctx->pc = 0x262190u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 14));
    // 0x262194: 0x2280a
    ctx->pc = 0x262194u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
    // 0x262198: 0xa43818
    ctx->pc = 0x262198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26219c: 0xe81021
    ctx->pc = 0x26219cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2621a0: 0x8c420000
    ctx->pc = 0x2621a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2621a4: 0x54400004
    ctx->pc = 0x2621A4u;
    {
        const bool branch_taken_0x2621a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2621a4) {
            ctx->pc = 0x2621A8u;
            SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
            ctx->pc = 0x2621B8u;
            goto label_2621b8;
        }
    }
    ctx->pc = 0x2621ACu;
    // 0x2621ac: 0x54a3fff8
    ctx->pc = 0x2621ACu;
    {
        const bool branch_taken_0x2621ac = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x2621ac) {
            ctx->pc = 0x2621B0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x262190u;
            goto label_262190;
        }
    }
    ctx->pc = 0x2621B4u;
    // 0x2621b4: 0x3c030034
    ctx->pc = 0x2621b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2621b8:
    // 0x2621b8: 0x2463e520
    ctx->pc = 0x2621b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960416));
    // 0x2621bc: 0x2402002c
    ctx->pc = 0x2621bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x2621c0: 0xa21018
    ctx->pc = 0x2621c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2621c4: 0x431021
    ctx->pc = 0x2621c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2621c8: 0x8c420000
    ctx->pc = 0x2621c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2621cc: 0x21200
    ctx->pc = 0x2621ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x2621d0: 0x30c300ff
    ctx->pc = 0x2621d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 255));
    // 0x2621d4: 0x3e00008
    ctx->pc = 0x2621D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2621D8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2620D4u: goto label_2620d4;
            case 0x2620E4u: goto label_2620e4;
            case 0x262138u: goto label_262138;
            case 0x26215Cu: goto label_26215c;
            case 0x262160u: goto label_262160;
            case 0x262174u: goto label_262174;
            case 0x262178u: goto label_262178;
            case 0x262190u: goto label_262190;
            case 0x2621B8u: goto label_2621b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2621DCu;
}
