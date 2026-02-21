#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StdCamUpdate
// Address: 0x216020 - 0x2160a4
void StdCamUpdate_0x216020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x216020u;

    // 0x216020: 0x27bdfff0
    ctx->pc = 0x216020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216024: 0xffbf0000
    ctx->pc = 0x216024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216028: 0x3c020031
    ctx->pc = 0x216028u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x21602c: 0x8c42ff9c
    ctx->pc = 0x21602cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x216030: 0x14400019
    ctx->pc = 0x216030u;
    {
        const bool branch_taken_0x216030 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x216034u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x216030) {
            ctx->pc = 0x216098u;
            goto label_216098;
        }
    }
    ctx->pc = 0x216038u;
    // 0x216038: 0x3c020031
    ctx->pc = 0x216038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x21603c: 0x8c42ffbc
    ctx->pc = 0x21603cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x216040: 0x10400014
    ctx->pc = 0x216040u;
    {
        const bool branch_taken_0x216040 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x216044u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x216040) {
            ctx->pc = 0x216094u;
            goto label_216094;
        }
    }
    ctx->pc = 0x216048u;
    // 0x216048: 0x8c42f77c
    ctx->pc = 0x216048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x21604c: 0x14400003
    ctx->pc = 0x21604Cu;
    {
        const bool branch_taken_0x21604c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21604c) {
            ctx->pc = 0x21605Cu;
            goto label_21605c;
        }
    }
    ctx->pc = 0x216054u;
    // 0x216054: 0xc0853e8
    ctx->pc = 0x216054u;
    SET_GPR_U32(ctx, 31, 0x21605Cu);
    ctx->pc = 0x216058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StdCamInit_0x214fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21605Cu; }
    }
    if (ctx->pc != 0x21605Cu) { return; }
    ctx->pc = 0x21605Cu;
label_21605c:
    // 0x21605c: 0xc0857ea
    ctx->pc = 0x21605Cu;
    SET_GPR_U32(ctx, 31, 0x216064u);
    ctx->pc = 0x215FA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StdCamStartStage_0x215fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216064u; }
    }
    if (ctx->pc != 0x216064u) { return; }
    ctx->pc = 0x216064u;
    // 0x216064: 0x1440000c
    ctx->pc = 0x216064u;
    {
        const bool branch_taken_0x216064 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x216068u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x216064) {
            ctx->pc = 0x216098u;
            goto label_216098;
        }
    }
    ctx->pc = 0x21606Cu;
    // 0x21606c: 0x3c030032
    ctx->pc = 0x21606cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x216070: 0x8c62f7e4
    ctx->pc = 0x216070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965220)));
    // 0x216074: 0x10400005
    ctx->pc = 0x216074u;
    {
        const bool branch_taken_0x216074 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x216078u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x216074) {
            ctx->pc = 0x21608Cu;
            goto label_21608c;
        }
    }
    ctx->pc = 0x21607Cu;
    // 0x21607c: 0xc0855e6
    ctx->pc = 0x21607Cu;
    SET_GPR_U32(ctx, 31, 0x216084u);
    ctx->pc = 0x216080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965220), GPR_U32(ctx, 0));
    ctx->pc = 0x215798u;
    {
        const uint32_t __entryPc = ctx->pc;
        StdCamReturn_0x215798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216084u; }
    }
    if (ctx->pc != 0x216084u) { return; }
    ctx->pc = 0x216084u;
    // 0x216084: 0x10000004
    ctx->pc = 0x216084u;
    {
        const bool branch_taken_0x216084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216088u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x216084) {
            ctx->pc = 0x216098u;
            goto label_216098;
        }
    }
    ctx->pc = 0x21608Cu;
label_21608c:
    // 0x21608c: 0xc08582a
    ctx->pc = 0x21608Cu;
    SET_GPR_U32(ctx, 31, 0x216094u);
    ctx->pc = 0x216090u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    ctx->pc = 0x2160A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateCam_0x2160a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216094u; }
    }
    if (ctx->pc != 0x216094u) { return; }
    ctx->pc = 0x216094u;
label_216094:
    // 0x216094: 0x24020001
    ctx->pc = 0x216094u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_216098:
    // 0x216098: 0xdfbf0000
    ctx->pc = 0x216098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21609c: 0x3e00008
    ctx->pc = 0x21609Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2160A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21605Cu: goto label_21605c;
            case 0x21608Cu: goto label_21608c;
            case 0x216094u: goto label_216094;
            case 0x216098u: goto label_216098;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2160A4u;
}
