#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: menu_defaults
// Address: 0x281af8 - 0x281b34
void menu_defaults_0x281af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x281af8u;

    // 0x281af8: 0x28a203e8
    ctx->pc = 0x281af8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1000));
    // 0x281afc: 0x1040000b
    ctx->pc = 0x281AFCu;
    {
        const bool branch_taken_0x281afc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x281B00u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 998));
        if (branch_taken_0x281afc) {
            ctx->pc = 0x281B2Cu;
            goto label_281b2c;
        }
    }
    ctx->pc = 0x281B04u;
    // 0x281b04: 0x14400009
    ctx->pc = 0x281B04u;
    {
        const bool branch_taken_0x281b04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x281B08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x281b04) {
            ctx->pc = 0x281B2Cu;
            goto label_281b2c;
        }
    }
    ctx->pc = 0x281B0Cu;
    // 0x281b0c: 0xac4096ec
    ctx->pc = 0x281b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940396), GPR_U32(ctx, 0));
    // 0x281b10: 0x3c020035
    ctx->pc = 0x281b10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x281b14: 0xac4096f0
    ctx->pc = 0x281b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940400), GPR_U32(ctx, 0));
    // 0x281b18: 0x3c020035
    ctx->pc = 0x281b18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x281b1c: 0xac4096f4
    ctx->pc = 0x281b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940404), GPR_U32(ctx, 0));
    // 0x281b20: 0x3c020035
    ctx->pc = 0x281b20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x281b24: 0x8080d72
    ctx->pc = 0x281B24u;
    ctx->pc = 0x281B28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940408), GPR_U32(ctx, 0));
    ctx->pc = 0x2035C8u;
    default_options_0x2035c8(rdram, ctx, runtime); return;
    ctx->pc = 0x281B2Cu;
label_281b2c:
    // 0x281b2c: 0x3e00008
    ctx->pc = 0x281B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281B2Cu: goto label_281b2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x281B34u;
}
