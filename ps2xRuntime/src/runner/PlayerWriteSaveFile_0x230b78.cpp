#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerWriteSaveFile
// Address: 0x230b78 - 0x230bd4
void PlayerWriteSaveFile_0x230b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x230b78u;

    // 0x230b78: 0x27bdffe0
    ctx->pc = 0x230b78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230b7c: 0xffbf0010
    ctx->pc = 0x230b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x230b80: 0xffb00000
    ctx->pc = 0x230b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230b84: 0x24022b00
    ctx->pc = 0x230b84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x230b88: 0x828018
    ctx->pc = 0x230b88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x230b8c: 0x3c020032
    ctx->pc = 0x230b8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x230b90: 0x24421bc0
    ctx->pc = 0x230b90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x230b94: 0x2028021
    ctx->pc = 0x230b94u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x230b98: 0xae052af4
    ctx->pc = 0x230b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10996), GPR_U32(ctx, 5));
    // 0x230b9c: 0xc08c06a
    ctx->pc = 0x230B9Cu;
    SET_GPR_U32(ctx, 31, 0x230BA4u);
    ctx->pc = 0x230BA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2301A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_store_in_save_0x2301a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230BA4u; }
    }
    if (ctx->pc != 0x230BA4u) { return; }
    ctx->pc = 0x230BA4u;
    // 0x230ba4: 0x8e042ae8
    ctx->pc = 0x230ba4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10984)));
    // 0x230ba8: 0x8e052aec
    ctx->pc = 0x230ba8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 10988)));
    // 0x230bac: 0x8e062af4
    ctx->pc = 0x230bacu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 10996)));
    // 0x230bb0: 0x2607099c
    ctx->pc = 0x230bb0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 2460));
    // 0x230bb4: 0xc082504
    ctx->pc = 0x230BB4u;
    SET_GPR_U32(ctx, 31, 0x230BBCu);
    ctx->pc = 0x230BB8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4212));
    ctx->pc = 0x209410u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveSave_0x209410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230BBCu; }
    }
    if (ctx->pc != 0x230BBCu) { return; }
    ctx->pc = 0x230BBCu;
    // 0x230bbc: 0x24030001
    ctx->pc = 0x230bbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x230bc0: 0xa20309a7
    ctx->pc = 0x230bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2471), (uint8_t)GPR_U32(ctx, 3));
    // 0x230bc4: 0xdfbf0010
    ctx->pc = 0x230bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230bc8: 0xdfb00000
    ctx->pc = 0x230bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230bcc: 0x3e00008
    ctx->pc = 0x230BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230BD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x230BD4u;
}
