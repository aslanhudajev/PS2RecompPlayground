#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: exec__13PauseMgrClassFv
// Address: 0x1f3960 - 0x1f3ac0
void exec__13PauseMgrClassFv_0x1f3960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("exec__13PauseMgrClassFv");


    ctx->pc = 0x1f3960u;

    // 0x1f3960: 0x27bdffa0
    ctx->pc = 0x1f3960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f3964: 0x7fbf0050
    ctx->pc = 0x1f3964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1f3968: 0x7fb40040
    ctx->pc = 0x1f3968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f396c: 0x7fb30030
    ctx->pc = 0x1f396cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f3970: 0x7fb20020
    ctx->pc = 0x1f3970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f3974: 0x7fb10010
    ctx->pc = 0x1f3974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f3978: 0x7fb00000
    ctx->pc = 0x1f3978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f397c: 0x84830010
    ctx->pc = 0x1f397cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f3980: 0x10600033
    ctx->pc = 0x1F3980u;
    {
        const bool branch_taken_0x1f3980 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3984u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f3980) {
            ctx->pc = 0x1F3A50u;
            goto label_1f3a50;
        }
    }
    ctx->pc = 0x1F3988u;
    // 0x1f3988: 0xc07ce40
    ctx->pc = 0x1F3988u;
    SET_GPR_U32(ctx, 31, 0x1F3990u);
    ctx->pc = 0x1F3900u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkLoadWaitOvlMod__13PauseMgrClassFv_0x1f3900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3990u; }
        else if (ctx->pc != 0x1F3990u) { ctx->pc = 0x1F3990u; }
    }
    if (ctx->pc != 0x1F3990u) { return; }
    ctx->pc = 0x1F3990u;
    // 0x1f3990: 0x10400003
    ctx->pc = 0x1F3990u;
    {
        const bool branch_taken_0x1f3990 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3994u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f3990) {
            ctx->pc = 0x1F39A0u;
            goto label_1f39a0;
        }
    }
    ctx->pc = 0x1F3998u;
    // 0x1f3998: 0x10000029
    ctx->pc = 0x1F3998u;
    {
        const bool branch_taken_0x1f3998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F399Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f3998) {
            ctx->pc = 0x1F3A40u;
            goto label_1f3a40;
        }
    }
    ctx->pc = 0x1F39A0u;
label_1f39a0:
    // 0x1f39a0: 0x70009628
    ctx->pc = 0x1f39a0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f39a4:
    // 0x1f39a4: 0x8f838e04
    ctx->pc = 0x1f39a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938116)));
    // 0x1f39a8: 0x14600004
    ctx->pc = 0x1F39A8u;
    {
        const bool branch_taken_0x1f39a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f39a8) {
            ctx->pc = 0x1F39BCu;
            goto label_1f39bc;
        }
    }
    ctx->pc = 0x1F39B0u;
    // 0x1f39b0: 0x24130001
    ctx->pc = 0x1f39b0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f39b4: 0x10000020
    ctx->pc = 0x1F39B4u;
    {
        const bool branch_taken_0x1f39b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F39B8u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f39b4) {
            ctx->pc = 0x1F3A38u;
            goto label_1f3a38;
        }
    }
    ctx->pc = 0x1F39BCu;
label_1f39bc:
    // 0x1f39bc: 0x3c030051
    ctx->pc = 0x1f39bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1f39c0: 0x70008e28
    ctx->pc = 0x1f39c0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f39c4: 0x10000018
    ctx->pc = 0x1F39C4u;
    {
        const bool branch_taken_0x1f39c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F39C8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 20416));
        if (branch_taken_0x1f39c4) {
            ctx->pc = 0x1F3A28u;
            goto label_1f3a28;
        }
    }
    ctx->pc = 0x1F39CCu;
label_1f39cc:
    // 0x1f39cc: 0x8e020000
    ctx->pc = 0x1f39ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f39d0: 0x1440000c
    ctx->pc = 0x1F39D0u;
    {
        const bool branch_taken_0x1f39d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F39D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x1f39d0) {
            ctx->pc = 0x1F3A04u;
            goto label_1f3a04;
        }
    }
    ctx->pc = 0x1F39D8u;
    // 0x1f39d8: 0xc086370
    ctx->pc = 0x1F39D8u;
    SET_GPR_U32(ctx, 31, 0x1F39E0u);
    ctx->pc = 0x1F39DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkRemain__13EntryDatClassFv_0x218dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F39E0u; }
        else if (ctx->pc != 0x1F39E0u) { ctx->pc = 0x1F39E0u; }
    }
    if (ctx->pc != 0x1F39E0u) { return; }
    ctx->pc = 0x1F39E0u;
    // 0x1f39e0: 0x10400004
    ctx->pc = 0x1F39E0u;
    {
        const bool branch_taken_0x1f39e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F39E4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f39e0) {
            ctx->pc = 0x1F39F4u;
            goto label_1f39f4;
        }
    }
    ctx->pc = 0x1F39E8u;
    // 0x1f39e8: 0x1000000d
    ctx->pc = 0x1F39E8u;
    {
        const bool branch_taken_0x1f39e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F39ECu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f39e8) {
            ctx->pc = 0x1F3A20u;
            goto label_1f3a20;
        }
    }
    ctx->pc = 0x1F39F0u;
    // 0x1f39f0: 0x72802628
    ctx->pc = 0x1f39f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_1f39f4:
    // 0x1f39f4: 0xc07ce24
    ctx->pc = 0x1F39F4u;
    SET_GPR_U32(ctx, 31, 0x1F39FCu);
    ctx->pc = 0x1F39F8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1F3890u;
    {
        const uint32_t __entryPc = ctx->pc;
        deleteWaitCauseElem__13PauseMgrClassFi_0x1f3890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F39FCu; }
        else if (ctx->pc != 0x1F39FCu) { ctx->pc = 0x1F39FCu; }
    }
    if (ctx->pc != 0x1F39FCu) { return; }
    ctx->pc = 0x1F39FCu;
    // 0x1f39fc: 0x1000000e
    ctx->pc = 0x1F39FCu;
    {
        const bool branch_taken_0x1f39fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3A00u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f39fc) {
            ctx->pc = 0x1F3A38u;
            goto label_1f3a38;
        }
    }
    ctx->pc = 0x1F3A04u;
label_1f3a04:
    // 0x1f3a04: 0x8e060000
    ctx->pc = 0x1f3a04u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f3a08: 0x3c020027
    ctx->pc = 0x1f3a08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f3a0c: 0x2444c8d0
    ctx->pc = 0x1f3a0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953168));
    // 0x1f3a10: 0xc05114a
    ctx->pc = 0x1F3A10u;
    SET_GPR_U32(ctx, 31, 0x1F3A18u);
    ctx->pc = 0x1F3A14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A18u; }
        else if (ctx->pc != 0x1F3A18u) { ctx->pc = 0x1F3A18u; }
    }
    if (ctx->pc != 0x1F3A18u) { return; }
    ctx->pc = 0x1F3A18u;
    // 0x1f3a18: 0xd
    ctx->pc = 0x1f3a18u;
    runtime->handleBreak(rdram, ctx);
    // 0x1f3a1c: 0x0
    ctx->pc = 0x1f3a1cu;
    // NOP
label_1f3a20:
    // 0x1f3a20: 0x26310001
    ctx->pc = 0x1f3a20u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f3a24: 0x26100010
    ctx->pc = 0x1f3a24u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
label_1f3a28:
    // 0x1f3a28: 0x8f838e04
    ctx->pc = 0x1f3a28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938116)));
    // 0x1f3a2c: 0x223182a
    ctx->pc = 0x1f3a2cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1f3a30: 0x1460ffe6
    ctx->pc = 0x1F3A30u;
    {
        const bool branch_taken_0x1f3a30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3a30) {
            ctx->pc = 0x1F39CCu;
            goto label_1f39cc;
        }
    }
    ctx->pc = 0x1F3A38u;
label_1f3a38:
    // 0x1f3a38: 0x1640ffda
    ctx->pc = 0x1F3A38u;
    {
        const bool branch_taken_0x1f3a38 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F3A3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938168), GPR_U32(ctx, 0));
        if (branch_taken_0x1f3a38) {
            ctx->pc = 0x1F39A4u;
            goto label_1f39a4;
        }
    }
    ctx->pc = 0x1F3A40u;
label_1f3a40:
    // 0x1f3a40: 0x12600017
    ctx->pc = 0x1F3A40u;
    {
        const bool branch_taken_0x1f3a40 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3a40) {
            ctx->pc = 0x1F3AA0u;
            goto label_1f3aa0;
        }
    }
    ctx->pc = 0x1F3A48u;
    // 0x1f3a48: 0x10000015
    ctx->pc = 0x1F3A48u;
    {
        const bool branch_taken_0x1f3a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3A4Cu;
        WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1f3a48) {
            ctx->pc = 0x1F3AA0u;
            goto label_1f3aa0;
        }
    }
    ctx->pc = 0x1F3A50u;
label_1f3a50:
    // 0x1f3a50: 0x3c030051
    ctx->pc = 0x1f3a50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1f3a54: 0x70008e28
    ctx->pc = 0x1f3a54u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f3a58: 0x24704fc0
    ctx->pc = 0x1f3a58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 20416));
    // 0x1f3a5c: 0x24050005
    ctx->pc = 0x1f3a5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f3a60: 0x1000000b
    ctx->pc = 0x1F3A60u;
    {
        const bool branch_taken_0x1f3a60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3A64u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f3a60) {
            ctx->pc = 0x1F3A90u;
            goto label_1f3a90;
        }
    }
    ctx->pc = 0x1F3A68u;
label_1f3a68:
    // 0x1f3a68: 0x8e030000
    ctx->pc = 0x1f3a68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f3a6c: 0x10650005
    ctx->pc = 0x1F3A6Cu;
    {
        const bool branch_taken_0x1f3a6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        if (branch_taken_0x1f3a6c) {
            ctx->pc = 0x1F3A84u;
            goto label_1f3a84;
        }
    }
    ctx->pc = 0x1F3A74u;
    // 0x1f3a74: 0x10600003
    ctx->pc = 0x1F3A74u;
    {
        const bool branch_taken_0x1f3a74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3a74) {
            ctx->pc = 0x1F3A84u;
            goto label_1f3a84;
        }
    }
    ctx->pc = 0x1F3A7Cu;
    // 0x1f3a7c: 0x10000003
    ctx->pc = 0x1F3A7Cu;
    {
        const bool branch_taken_0x1f3a7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3A80u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1f3a7c) {
            ctx->pc = 0x1F3A8Cu;
            goto label_1f3a8c;
        }
    }
    ctx->pc = 0x1F3A84u;
label_1f3a84:
    // 0x1f3a84: 0xa6840010
    ctx->pc = 0x1f3a84u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f3a88: 0x26310001
    ctx->pc = 0x1f3a88u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1f3a8c:
    // 0x1f3a8c: 0x26100010
    ctx->pc = 0x1f3a8cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
label_1f3a90:
    // 0x1f3a90: 0x8f838e04
    ctx->pc = 0x1f3a90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938116)));
    // 0x1f3a94: 0x223182a
    ctx->pc = 0x1f3a94u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1f3a98: 0x1460fff3
    ctx->pc = 0x1F3A98u;
    {
        const bool branch_taken_0x1f3a98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3a98) {
            ctx->pc = 0x1F3A68u;
            goto label_1f3a68;
        }
    }
    ctx->pc = 0x1F3AA0u;
label_1f3aa0:
    // 0x1f3aa0: 0x7bbf0050
    ctx->pc = 0x1f3aa0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f3aa4: 0x7bb40040
    ctx->pc = 0x1f3aa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3aa8: 0x7bb30030
    ctx->pc = 0x1f3aa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3aac: 0x7bb20020
    ctx->pc = 0x1f3aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3ab0: 0x7bb10010
    ctx->pc = 0x1f3ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3ab4: 0x7bb00000
    ctx->pc = 0x1f3ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3ab8: 0x3e00008
    ctx->pc = 0x1F3AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3ABCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F39A0u: goto label_1f39a0;
            case 0x1F39A4u: goto label_1f39a4;
            case 0x1F39BCu: goto label_1f39bc;
            case 0x1F39CCu: goto label_1f39cc;
            case 0x1F39F4u: goto label_1f39f4;
            case 0x1F3A04u: goto label_1f3a04;
            case 0x1F3A20u: goto label_1f3a20;
            case 0x1F3A28u: goto label_1f3a28;
            case 0x1F3A38u: goto label_1f3a38;
            case 0x1F3A40u: goto label_1f3a40;
            case 0x1F3A50u: goto label_1f3a50;
            case 0x1F3A68u: goto label_1f3a68;
            case 0x1F3A84u: goto label_1f3a84;
            case 0x1F3A8Cu: goto label_1f3a8c;
            case 0x1F3A90u: goto label_1f3a90;
            case 0x1F3AA0u: goto label_1f3aa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3AC0u;
}
