#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: convAsciiToDigit
// Address: 0x1a0340 - 0x1a03c0
void convAsciiToDigit_0x1a0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("convAsciiToDigit");


    ctx->pc = 0x1a0340u;

    // 0x1a0340: 0x80830000
    ctx->pc = 0x1a0340u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0344: 0x2402002e
    ctx->pc = 0x1a0344u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1a0348: 0x1062001a
    ctx->pc = 0x1A0348u;
    {
        const bool branch_taken_0x1a0348 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A034Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0348) {
            ctx->pc = 0x1A03B4u;
            goto label_1a03b4;
        }
    }
    ctx->pc = 0x1A0350u;
    // 0x1a0350: 0x24020020
    ctx->pc = 0x1a0350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a0354: 0x50620018
    ctx->pc = 0x1A0354u;
    {
        const bool branch_taken_0x1a0354 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a0354) {
            ctx->pc = 0x1A0358u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->pc = 0x1A03B8u;
            goto label_1a03b8;
        }
    }
    ctx->pc = 0x1A035Cu;
    // 0x1a035c: 0x10600015
    ctx->pc = 0x1A035Cu;
    {
        const bool branch_taken_0x1a035c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0360u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967248));
        if (branch_taken_0x1a035c) {
            ctx->pc = 0x1A03B4u;
            goto label_1a03b4;
        }
    }
    ctx->pc = 0x1A0364u;
    // 0x1a0364: 0x2c42000a
    ctx->pc = 0x1a0364u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
    // 0x1a0368: 0x10400012
    ctx->pc = 0x1A0368u;
    {
        const bool branch_taken_0x1a0368 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A036Cu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x1a0368) {
            ctx->pc = 0x1A03B4u;
            goto label_1a03b4;
        }
    }
    ctx->pc = 0x1A0370u;
    // 0x1a0370: 0x2408002e
    ctx->pc = 0x1a0370u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1a0374: 0x24070020
    ctx->pc = 0x1a0374u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a0378: 0xc91018
    ctx->pc = 0x1a0378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1a037c: 0x0
    ctx->pc = 0x1a037cu;
    // NOP
label_1a0380:
    // 0x1a0380: 0x24840001
    ctx->pc = 0x1a0380u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a0384: 0x2442ffd0
    ctx->pc = 0x1a0384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1a0388: 0x433021
    ctx->pc = 0x1a0388u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a038c: 0x80830000
    ctx->pc = 0x1a038cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0390: 0x50680009
    ctx->pc = 0x1A0390u;
    {
        const bool branch_taken_0x1a0390 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 8));
        if (branch_taken_0x1a0390) {
            ctx->pc = 0x1A0394u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->pc = 0x1A03B8u;
            goto label_1a03b8;
        }
    }
    ctx->pc = 0x1A0398u;
    // 0x1a0398: 0x50670007
    ctx->pc = 0x1A0398u;
    {
        const bool branch_taken_0x1a0398 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 7));
        if (branch_taken_0x1a0398) {
            ctx->pc = 0x1A039Cu;
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->pc = 0x1A03B8u;
            goto label_1a03b8;
        }
    }
    ctx->pc = 0x1A03A0u;
    // 0x1a03a0: 0x10600004
    ctx->pc = 0x1A03A0u;
    {
        const bool branch_taken_0x1a03a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A03A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967248));
        if (branch_taken_0x1a03a0) {
            ctx->pc = 0x1A03B4u;
            goto label_1a03b4;
        }
    }
    ctx->pc = 0x1A03A8u;
    // 0x1a03a8: 0x2c42000a
    ctx->pc = 0x1a03a8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
    // 0x1a03ac: 0x1440fff4
    ctx->pc = 0x1A03ACu;
    {
        const bool branch_taken_0x1a03ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A03B0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
        if (branch_taken_0x1a03ac) {
            ctx->pc = 0x1A0380u;
            goto label_1a0380;
        }
    }
    ctx->pc = 0x1A03B4u;
label_1a03b4:
    // 0x1a03b4: 0xaca60000
    ctx->pc = 0x1a03b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_1a03b8:
    // 0x1a03b8: 0x3e00008
    ctx->pc = 0x1A03B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A03BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0380u: goto label_1a0380;
            case 0x1A03B4u: goto label_1a03b4;
            case 0x1A03B8u: goto label_1a03b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A03C0u;
}
