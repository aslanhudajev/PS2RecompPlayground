#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kCopy
// Address: 0x10ec88 - 0x10ecc0
void kCopy_0x10ec88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ec88u;

    // 0x10ec88: 0x63082
    ctx->pc = 0x10ec88u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 2));
    // 0x10ec8c: 0x10c0000a
    ctx->pc = 0x10EC8Cu;
    {
        const bool branch_taken_0x10ec8c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x10EC90u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10ec8c) {
            ctx->pc = 0x10ECB8u;
            goto label_10ecb8;
        }
    }
    ctx->pc = 0x10EC94u;
    // 0x10ec94: 0x0
    ctx->pc = 0x10ec94u;
    // NOP
label_10ec98:
    // 0x10ec98: 0x8ca30000
    ctx->pc = 0x10ec98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10ec9c: 0x24e70001
    ctx->pc = 0x10ec9cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x10eca0: 0x24a50004
    ctx->pc = 0x10eca0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x10eca4: 0xe6102b
    ctx->pc = 0x10eca4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x10eca8: 0xac830000
    ctx->pc = 0x10eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x10ecac: 0x24840004
    ctx->pc = 0x10ecacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x10ecb0: 0x1440fff9
    ctx->pc = 0x10ECB0u;
    {
        const bool branch_taken_0x10ecb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10ecb0) {
            ctx->pc = 0x10EC98u;
            goto label_10ec98;
        }
    }
    ctx->pc = 0x10ECB8u;
label_10ecb8:
    // 0x10ecb8: 0x3e00008
    ctx->pc = 0x10ECB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ECBCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EC98u: goto label_10ec98;
            case 0x10ECB8u: goto label_10ecb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10ECC0u;
}
