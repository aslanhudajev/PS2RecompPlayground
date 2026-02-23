#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: set_alpha_frame_buffer
// Address: 0x1a55a0 - 0x1a5714
void set_alpha_frame_buffer_0x1a55a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("set_alpha_frame_buffer");


    ctx->pc = 0x1a55a0u;

    // 0x1a55a0: 0x27bdff90
    ctx->pc = 0x1a55a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a55a4: 0x7fbf0060
    ctx->pc = 0x1a55a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1a55a8: 0x7fb50050
    ctx->pc = 0x1a55a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a55ac: 0x7fb40040
    ctx->pc = 0x1a55acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a55b0: 0x7fb30030
    ctx->pc = 0x1a55b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a55b4: 0x7fb20020
    ctx->pc = 0x1a55b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a55b8: 0x7fb10010
    ctx->pc = 0x1a55b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a55bc: 0x7080ae28
    ctx->pc = 0x1a55bcu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a55c0: 0xc069528
    ctx->pc = 0x1A55C0u;
    SET_GPR_U32(ctx, 31, 0x1A55C8u);
    ctx->pc = 0x1A55C4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55C8u; }
        else if (ctx->pc != 0x1A55C8u) { ctx->pc = 0x1A55C8u; }
    }
    if (ctx->pc != 0x1A55C8u) { return; }
    ctx->pc = 0x1A55C8u;
    // 0x1a55c8: 0x70409628
    ctx->pc = 0x1a55c8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a55cc: 0x3c021000
    ctx->pc = 0x1a55ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1a55d0: 0x3443d000
    ctx->pc = 0x1a55d0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 53248));
label_1a55d4:
    // 0x1a55d4: 0x8c620000
    ctx->pc = 0x1a55d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a55d8: 0x30420100
    ctx->pc = 0x1a55d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a55dc: 0x0
    ctx->pc = 0x1a55dcu;
    // NOP
    // 0x1a55e0: 0x0
    ctx->pc = 0x1a55e0u;
    // NOP
    // 0x1a55e4: 0x0
    ctx->pc = 0x1a55e4u;
    // NOP
    // 0x1a55e8: 0x1440fffa
    ctx->pc = 0x1A55E8u;
    {
        const bool branch_taken_0x1a55e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a55e8) {
            ctx->pc = 0x1A55D4u;
            goto label_1a55d4;
        }
    }
    ctx->pc = 0x1A55F0u;
    // 0x1a55f0: 0x3c020026
    ctx->pc = 0x1a55f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1a55f4: 0x2445e160
    ctx->pc = 0x1a55f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x1a55f8: 0x72402628
    ctx->pc = 0x1a55f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a55fc: 0xc06ac36
    ctx->pc = 0x1A55FCu;
    SET_GPR_U32(ctx, 31, 0x1A5604u);
    ctx->pc = 0x1A5600u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5604u; }
        else if (ctx->pc != 0x1A5604u) { ctx->pc = 0x1A5604u; }
    }
    if (ctx->pc != 0x1A5604u) { return; }
    ctx->pc = 0x1A5604u;
    // 0x1a5604: 0x8ea30004
    ctx->pc = 0x1a5604u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1a5608: 0xae430044
    ctx->pc = 0x1a5608u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
    // 0x1a560c: 0x8ea30008
    ctx->pc = 0x1a560cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1a5610: 0xae430048
    ctx->pc = 0x1a5610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
    // 0x1a5614: 0x8ea30008
    ctx->pc = 0x1a5614u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1a5618: 0xae430058
    ctx->pc = 0x1a5618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
    // 0x1a561c: 0x8ea3001c
    ctx->pc = 0x1a561cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1a5620: 0xae43003c
    ctx->pc = 0x1a5620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
    // 0x1a5624: 0x8eb10010
    ctx->pc = 0x1a5624u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1a5628: 0x1a200031
    ctx->pc = 0x1A5628u;
    {
        const bool branch_taken_0x1a5628 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1a5628) {
            ctx->pc = 0x1A56F0u;
            goto label_1a56f0;
        }
    }
    ctx->pc = 0x1A5630u;
label_1a5630:
    // 0x1a5630: 0x8eb40018
    ctx->pc = 0x1a5630u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1a5634: 0x291082a
    ctx->pc = 0x1a5634u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 17)));
    // 0x1a5638: 0x50200004
    ctx->pc = 0x1A5638u;
    {
        const bool branch_taken_0x1a5638 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5638) {
            ctx->pc = 0x1A563Cu;
            SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1A564Cu;
            goto label_1a564c;
        }
    }
    ctx->pc = 0x1A5640u;
    // 0x1a5640: 0x10000004
    ctx->pc = 0x1A5640u;
    {
        const bool branch_taken_0x1a5640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5644u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 68)));
        if (branch_taken_0x1a5640) {
            ctx->pc = 0x1A5654u;
            goto label_1a5654;
        }
    }
    ctx->pc = 0x1A5648u;
    // 0x1a5648: 0x7220a628
    ctx->pc = 0x1a5648u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1a564c:
    // 0x1a564c: 0x0
    ctx->pc = 0x1a564cu;
    // NOP
    // 0x1a5650: 0x8e430044
    ctx->pc = 0x1a5650u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1a5654:
    // 0x1a5654: 0x8eb0000c
    ctx->pc = 0x1a5654u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1a5658: 0x741821
    ctx->pc = 0x1a5658u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1a565c: 0xae430054
    ctx->pc = 0x1a565cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
    // 0x1a5660: 0x8ea30000
    ctx->pc = 0x1a5660u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1a5664: 0x1a00001c
    ctx->pc = 0x1A5664u;
    {
        const bool branch_taken_0x1a5664 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1A5668u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
        if (branch_taken_0x1a5664) {
            ctx->pc = 0x1A56D8u;
            goto label_1a56d8;
        }
    }
    ctx->pc = 0x1A566Cu;
    // 0x1a566c: 0x0
    ctx->pc = 0x1a566cu;
    // NOP
label_1a5670:
    // 0x1a5670: 0x8eb30014
    ctx->pc = 0x1a5670u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1a5674: 0x270082a
    ctx->pc = 0x1a5674u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 16)));
    // 0x1a5678: 0x50200004
    ctx->pc = 0x1A5678u;
    {
        const bool branch_taken_0x1a5678 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5678) {
            ctx->pc = 0x1A567Cu;
            SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1A568Cu;
            goto label_1a568c;
        }
    }
    ctx->pc = 0x1A5680u;
    // 0x1a5680: 0x10000004
    ctx->pc = 0x1A5680u;
    {
        const bool branch_taken_0x1a5680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5684u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 64)));
        if (branch_taken_0x1a5680) {
            ctx->pc = 0x1A5694u;
            goto label_1a5694;
        }
    }
    ctx->pc = 0x1A5688u;
    // 0x1a5688: 0x72009e28
    ctx->pc = 0x1a5688u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1a568c:
    // 0x1a568c: 0x0
    ctx->pc = 0x1a568cu;
    // NOP
    // 0x1a5690: 0x8e420040
    ctx->pc = 0x1a5690u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1a5694:
    // 0x1a5694: 0x24040006
    ctx->pc = 0x1a5694u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a5698: 0x531021
    ctx->pc = 0x1a5698u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a569c: 0xc06952c
    ctx->pc = 0x1A569Cu;
    SET_GPR_U32(ctx, 31, 0x1A56A4u);
    ctx->pc = 0x1A56A0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A56A4u; }
        else if (ctx->pc != 0x1A56A4u) { ctx->pc = 0x1A56A4u; }
    }
    if (ctx->pc != 0x1A56A4u) { return; }
    ctx->pc = 0x1A56A4u;
    // 0x1a56a4: 0x0
    ctx->pc = 0x1a56a4u;
    // NOP
label_1a56a8:
    // 0x1a56a8: 0x3c011001
    ctx->pc = 0x1a56a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a56ac: 0x8c23d000
    ctx->pc = 0x1a56acu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a56b0: 0x30630100
    ctx->pc = 0x1a56b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1a56b4: 0x0
    ctx->pc = 0x1a56b4u;
    // NOP
    // 0x1a56b8: 0x0
    ctx->pc = 0x1a56b8u;
    // NOP
    // 0x1a56bc: 0x1460fffa
    ctx->pc = 0x1A56BCu;
    {
        const bool branch_taken_0x1a56bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a56bc) {
            ctx->pc = 0x1A56A8u;
            goto label_1a56a8;
        }
    }
    ctx->pc = 0x1A56C4u;
    // 0x1a56c4: 0x8e430040
    ctx->pc = 0x1a56c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1a56c8: 0x2138023
    ctx->pc = 0x1a56c8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1a56cc: 0x731821
    ctx->pc = 0x1a56ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1a56d0: 0x1e00ffe7
    ctx->pc = 0x1A56D0u;
    {
        const bool branch_taken_0x1a56d0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1A56D4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
        if (branch_taken_0x1a56d0) {
            ctx->pc = 0x1A5670u;
            goto label_1a5670;
        }
    }
    ctx->pc = 0x1A56D8u;
label_1a56d8:
    // 0x1a56d8: 0x8e430044
    ctx->pc = 0x1a56d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1a56dc: 0x2348823
    ctx->pc = 0x1a56dcu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1a56e0: 0x741821
    ctx->pc = 0x1a56e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1a56e4: 0x1e20ffd2
    ctx->pc = 0x1A56E4u;
    {
        const bool branch_taken_0x1a56e4 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x1A56E8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
        if (branch_taken_0x1a56e4) {
            ctx->pc = 0x1A5630u;
            goto label_1a5630;
        }
    }
    ctx->pc = 0x1A56ECu;
    // 0x1a56ec: 0x0
    ctx->pc = 0x1a56ecu;
    // NOP
label_1a56f0:
    // 0x1a56f0: 0x7bbf0060
    ctx->pc = 0x1a56f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a56f4: 0x7bb50050
    ctx->pc = 0x1a56f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a56f8: 0x7bb40040
    ctx->pc = 0x1a56f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a56fc: 0x7bb30030
    ctx->pc = 0x1a56fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5700: 0x7bb20020
    ctx->pc = 0x1a5700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5704: 0x7bb10010
    ctx->pc = 0x1a5704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5708: 0x7bb00000
    ctx->pc = 0x1a5708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a570c: 0x3e00008
    ctx->pc = 0x1A570Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5710u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A55D4u: goto label_1a55d4;
            case 0x1A5630u: goto label_1a5630;
            case 0x1A564Cu: goto label_1a564c;
            case 0x1A5654u: goto label_1a5654;
            case 0x1A5670u: goto label_1a5670;
            case 0x1A568Cu: goto label_1a568c;
            case 0x1A5694u: goto label_1a5694;
            case 0x1A56A8u: goto label_1a56a8;
            case 0x1A56D8u: goto label_1a56d8;
            case 0x1A56F0u: goto label_1a56f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5714u;
}
