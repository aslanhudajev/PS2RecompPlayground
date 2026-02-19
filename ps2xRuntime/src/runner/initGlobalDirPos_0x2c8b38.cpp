#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initGlobalDirPos
// Address: 0x2c8b38 - 0x2c8ba0
void initGlobalDirPos_0x2c8b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8b38u;

    // 0x2c8b38: 0x27bdffd0
    ctx->pc = 0x2c8b38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c8b3c: 0xffbf0020
    ctx->pc = 0x2c8b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c8b40: 0xffb10010
    ctx->pc = 0x2c8b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c8b44: 0xffb00000
    ctx->pc = 0x2c8b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c8b48: 0x80882d
    ctx->pc = 0x2c8b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b4c: 0x8e220048
    ctx->pc = 0x2c8b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2c8b50: 0x54400004
    ctx->pc = 0x2C8B50u;
    {
        const bool branch_taken_0x2c8b50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c8b50) {
            ctx->pc = 0x2C8B54u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->pc = 0x2C8B64u;
            goto label_2c8b64;
        }
    }
    ctx->pc = 0x2C8B58u;
    // 0x2c8b58: 0x240203ff
    ctx->pc = 0x2c8b58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2c8b5c: 0xae220048
    ctx->pc = 0x2c8b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x2c8b60: 0x8e300048
    ctx->pc = 0x2c8b60u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2c8b64:
    // 0x2c8b64: 0x2404000c
    ctx->pc = 0x2c8b64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c8b68: 0xc0b4f52
    ctx->pc = 0x2C8B68u;
    SET_GPR_U32(ctx, 31, 0x2C8B70u);
    ctx->pc = 0x2C8B6Cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B70u; }
    }
    if (ctx->pc != 0x2C8B70u) { return; }
    ctx->pc = 0x2C8B70u;
    // 0x2c8b70: 0xae22004c
    ctx->pc = 0x2c8b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x2c8b74: 0xc0b4f52
    ctx->pc = 0x2C8B74u;
    SET_GPR_U32(ctx, 31, 0x2C8B7Cu);
    ctx->pc = 0x2C8B78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B7Cu; }
    }
    if (ctx->pc != 0x2C8B7Cu) { return; }
    ctx->pc = 0x2C8B7Cu;
    // 0x2c8b7c: 0xae220050
    ctx->pc = 0x2c8b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x2c8b80: 0x40202d
    ctx->pc = 0x2c8b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b84: 0x282d
    ctx->pc = 0x2c8b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b88: 0x200302d
    ctx->pc = 0x2c8b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b8c: 0xdfbf0020
    ctx->pc = 0x2c8b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8b90: 0xdfb10010
    ctx->pc = 0x2c8b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8b94: 0xdfb00000
    ctx->pc = 0x2c8b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8b98: 0x80becc6
    ctx->pc = 0x2C8B98u;
    ctx->pc = 0x2C8B9Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2FB318u;
    memset_0x2fb318(rdram, ctx, runtime); return;
    ctx->pc = 0x2C8BA0u;
}
