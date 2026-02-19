#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindLookoutParam
// Address: 0x24ff48 - 0x24ffb4
void FindLookoutParam_0x24ff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24ff48u;

    // 0x24ff48: 0x27bdffe0
    ctx->pc = 0x24ff48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24ff4c: 0xffbf0010
    ctx->pc = 0x24ff4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24ff50: 0x80282d
    ctx->pc = 0x24ff50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff54: 0x3c020034
    ctx->pc = 0x24ff54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24ff58: 0x2443c390
    ctx->pc = 0x24ff58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294951824));
    // 0x24ff5c: 0x3c020034
    ctx->pc = 0x24ff5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24ff60: 0x8c42cd90
    ctx->pc = 0x24ff60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954384)));
    // 0x24ff64: 0x1840000c
    ctx->pc = 0x24FF64u;
    {
        const bool branch_taken_0x24ff64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24FF68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24ff64) {
            ctx->pc = 0x24FF98u;
            goto label_24ff98;
        }
    }
    ctx->pc = 0x24FF6Cu;
    // 0x24ff6c: 0x3c020034
    ctx->pc = 0x24ff6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24ff70: 0x8c46cd90
    ctx->pc = 0x24ff70u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294954384)));
    // 0x24ff74: 0x0
    ctx->pc = 0x24ff74u;
    // NOP
label_24ff78:
    // 0x24ff78: 0x84620072
    ctx->pc = 0x24ff78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 114)));
    // 0x24ff7c: 0x54450003
    ctx->pc = 0x24FF7Cu;
    {
        const bool branch_taken_0x24ff7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x24ff7c) {
            ctx->pc = 0x24FF80u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x24FF8Cu;
            goto label_24ff8c;
        }
    }
    ctx->pc = 0x24FF84u;
    // 0x24ff84: 0x10000008
    ctx->pc = 0x24FF84u;
    {
        const bool branch_taken_0x24ff84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FF88u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24ff84) {
            ctx->pc = 0x24FFA8u;
            goto label_24ffa8;
        }
    }
    ctx->pc = 0x24FF8Cu;
label_24ff8c:
    // 0x24ff8c: 0x86102a
    ctx->pc = 0x24ff8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x24ff90: 0x1440fff9
    ctx->pc = 0x24FF90u;
    {
        const bool branch_taken_0x24ff90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24FF94u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 128));
        if (branch_taken_0x24ff90) {
            ctx->pc = 0x24FF78u;
            goto label_24ff78;
        }
    }
    ctx->pc = 0x24FF98u;
label_24ff98:
    // 0x24ff98: 0x3c04003b
    ctx->pc = 0x24ff98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x24ff9c: 0xc0b492e
    ctx->pc = 0x24FF9Cu;
    SET_GPR_U32(ctx, 31, 0x24FFA4u);
    ctx->pc = 0x24FFA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935832));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FFA4u; }
    }
    if (ctx->pc != 0x24FFA4u) { return; }
    ctx->pc = 0x24FFA4u;
    // 0x24ffa4: 0x102d
    ctx->pc = 0x24ffa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ffa8:
    // 0x24ffa8: 0xdfbf0010
    ctx->pc = 0x24ffa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ffac: 0x3e00008
    ctx->pc = 0x24FFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FFB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24FF78u: goto label_24ff78;
            case 0x24FF8Cu: goto label_24ff8c;
            case 0x24FF98u: goto label_24ff98;
            case 0x24FFA8u: goto label_24ffa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24FFB4u;
}
