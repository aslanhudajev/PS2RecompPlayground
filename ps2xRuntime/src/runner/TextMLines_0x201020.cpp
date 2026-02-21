#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TextMLines
// Address: 0x201020 - 0x20106c
void TextMLines_0x201020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201020u;

    // 0x201020: 0x27bdffe0
    ctx->pc = 0x201020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201024: 0xffbf0010
    ctx->pc = 0x201024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201028: 0xffb00000
    ctx->pc = 0x201028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20102c: 0x10000003
    ctx->pc = 0x20102Cu;
    {
        const bool branch_taken_0x20102c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x201030u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20102c) {
            ctx->pc = 0x20103Cu;
            goto label_20103c;
        }
    }
    ctx->pc = 0x201034u;
    // 0x201034: 0x0
    ctx->pc = 0x201034u;
    // NOP
label_201038:
    // 0x201038: 0x26100001
    ctx->pc = 0x201038u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_20103c:
    // 0x20103c: 0xc0803ce
    ctx->pc = 0x20103Cu;
    SET_GPR_U32(ctx, 31, 0x201044u);
    ctx->pc = 0x201040u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x200F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        my_strchr_0x200f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201044u; }
    }
    if (ctx->pc != 0x201044u) { return; }
    ctx->pc = 0x201044u;
    // 0x201044: 0x40202d
    ctx->pc = 0x201044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201048: 0x10800003
    ctx->pc = 0x201048u;
    {
        const bool branch_taken_0x201048 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20104Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 15));
        if (branch_taken_0x201048) {
            ctx->pc = 0x201058u;
            goto label_201058;
        }
    }
    ctx->pc = 0x201050u;
    // 0x201050: 0x5440fff9
    ctx->pc = 0x201050u;
    {
        const bool branch_taken_0x201050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x201050) {
            ctx->pc = 0x201054u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x201038u;
            goto label_201038;
        }
    }
    ctx->pc = 0x201058u;
label_201058:
    // 0x201058: 0x26020001
    ctx->pc = 0x201058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
    // 0x20105c: 0xdfbf0010
    ctx->pc = 0x20105cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201060: 0xdfb00000
    ctx->pc = 0x201060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201064: 0x3e00008
    ctx->pc = 0x201064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201068u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201038u: goto label_201038;
            case 0x20103Cu: goto label_20103c;
            case 0x201058u: goto label_201058;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20106Cu;
}
