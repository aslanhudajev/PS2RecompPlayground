#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: pflt_calc_gain
// Address: 0x16eec8 - 0x16ef40
void pflt_calc_gain_0x16eec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("pflt_calc_gain");


    ctx->pc = 0x16eec8u;

    // 0x16eec8: 0x27bdffe0
    ctx->pc = 0x16eec8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16eecc: 0x24050007
    ctx->pc = 0x16eeccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x16eed0: 0xffb00000
    ctx->pc = 0x16eed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16eed4: 0x302d
    ctx->pc = 0x16eed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eed8: 0xffbf0010
    ctx->pc = 0x16eed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16eedc: 0x80802d
    ctx->pc = 0x16eedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eee0: 0x50a60001
    ctx->pc = 0x16EEE0u;
    {
        const bool branch_taken_0x16eee0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 6));
        if (branch_taken_0x16eee0) {
            ctx->pc = 0x16EEE4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16EEE8u;
            goto label_16eee8;
        }
    }
    ctx->pc = 0x16EEE8u;
label_16eee8:
    // 0x16eee8: 0x24070001
    ctx->pc = 0x16eee8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16eeec: 0x8e040078
    ctx->pc = 0x16eeecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x16eef0: 0x8f8381fc
    ctx->pc = 0x16eef0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935036)));
    // 0x16eef4: 0x2482ffff
    ctx->pc = 0x16eef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16eef8: 0x45001a
    ctx->pc = 0x16eef8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x16eefc: 0x1012
    ctx->pc = 0x16eefcu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x16ef00: 0x24420001
    ctx->pc = 0x16ef00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16ef04: 0x43282a
    ctx->pc = 0x16ef04u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x16ef08: 0x45180b
    ctx->pc = 0x16ef08u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x16ef0c: 0xc3302a
    ctx->pc = 0x16ef0cu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 3)));
    // 0x16ef10: 0xe6180a
    ctx->pc = 0x16ef10u;
    if (GPR_U32(ctx, 6) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 7));
    // 0x16ef14: 0xc052e16
    ctx->pc = 0x16EF14u;
    SET_GPR_U32(ctx, 31, 0x16EF1Cu);
    ctx->pc = 0x16EF18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF1Cu; }
        else if (ctx->pc != 0x16EF1Cu) { ctx->pc = 0x16EF1Cu; }
    }
    if (ctx->pc != 0x16EF1Cu) { return; }
    ctx->pc = 0x16EF1Cu;
    // 0x16ef1c: 0x3c01002c
    ctx->pc = 0x16ef1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x16ef20: 0xdc24a158
    ctx->pc = 0x16ef20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 4294943064)));
    // 0x16ef24: 0xc052d62
    ctx->pc = 0x16EF24u;
    SET_GPR_U32(ctx, 31, 0x16EF2Cu);
    ctx->pc = 0x16EF28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x14b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF2Cu; }
        else if (ctx->pc != 0x16EF2Cu) { ctx->pc = 0x16EF2Cu; }
    }
    if (ctx->pc != 0x16EF2Cu) { return; }
    ctx->pc = 0x16EF2Cu;
    // 0x16ef2c: 0xfe020080
    ctx->pc = 0x16ef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 2));
    // 0x16ef30: 0xdfbf0010
    ctx->pc = 0x16ef30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ef34: 0xdfb00000
    ctx->pc = 0x16ef34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ef38: 0x3e00008
    ctx->pc = 0x16EF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EEE8u: goto label_16eee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EF40u;
}
