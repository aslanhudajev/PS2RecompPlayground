#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: vibrators_off
// Address: 0x206ac8 - 0x206b24
void vibrators_off_0x206ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206ac8u;

    // 0x206ac8: 0x27bdffd0
    ctx->pc = 0x206ac8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x206acc: 0xffbf0020
    ctx->pc = 0x206accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x206ad0: 0xffb10010
    ctx->pc = 0x206ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x206ad4: 0xffb00000
    ctx->pc = 0x206ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206ad8: 0x802d
    ctx->pc = 0x206ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206adc: 0x3c020031
    ctx->pc = 0x206adcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x206ae0: 0x24511d68
    ctx->pc = 0x206ae0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7528));
    // 0x206ae4: 0x1010c0
    ctx->pc = 0x206ae4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
label_206ae8:
    // 0x206ae8: 0x511021
    ctx->pc = 0x206ae8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x206aec: 0x8c420000
    ctx->pc = 0x206aecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206af0: 0x50400004
    ctx->pc = 0x206AF0u;
    {
        const bool branch_taken_0x206af0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x206af0) {
            ctx->pc = 0x206AF4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x206B04u;
            goto label_206b04;
        }
    }
    ctx->pc = 0x206AF8u;
    // 0x206af8: 0xc081a84
    ctx->pc = 0x206AF8u;
    SET_GPR_U32(ctx, 31, 0x206B00u);
    ctx->pc = 0x206AFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        vibe_off_0x206a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B00u; }
    }
    if (ctx->pc != 0x206B00u) { return; }
    ctx->pc = 0x206B00u;
    // 0x206b00: 0x26100001
    ctx->pc = 0x206b00u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_206b04:
    // 0x206b04: 0x2a020004
    ctx->pc = 0x206b04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x206b08: 0x5440fff7
    ctx->pc = 0x206B08u;
    {
        const bool branch_taken_0x206b08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x206b08) {
            ctx->pc = 0x206B0Cu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
            ctx->pc = 0x206AE8u;
            goto label_206ae8;
        }
    }
    ctx->pc = 0x206B10u;
    // 0x206b10: 0xdfbf0020
    ctx->pc = 0x206b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206b14: 0xdfb10010
    ctx->pc = 0x206b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206b18: 0xdfb00000
    ctx->pc = 0x206b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206b1c: 0x3e00008
    ctx->pc = 0x206B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206B20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206AE8u: goto label_206ae8;
            case 0x206B04u: goto label_206b04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206B24u;
}
