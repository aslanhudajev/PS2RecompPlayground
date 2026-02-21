#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BGMusicStop
// Address: 0x25ccf8 - 0x25cd38
void BGMusicStop_0x25ccf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ccf8u;

    // 0x25ccf8: 0x27bdfff0
    ctx->pc = 0x25ccf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25ccfc: 0xffbf0000
    ctx->pc = 0x25ccfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cd00: 0x3c020034
    ctx->pc = 0x25cd00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25cd04: 0x8c42d344
    ctx->pc = 0x25cd04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955844)));
    // 0x25cd08: 0x4400004
    ctx->pc = 0x25CD08u;
    {
        const bool branch_taken_0x25cd08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25CD0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25cd08) {
            ctx->pc = 0x25CD1Cu;
            goto label_25cd1c;
        }
    }
    ctx->pc = 0x25CD10u;
    // 0x25cd10: 0xc08839e
    ctx->pc = 0x25CD10u;
    SET_GPR_U32(ctx, 31, 0x25CD18u);
    ctx->pc = 0x220E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStreamStop_0x220e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CD18u; }
    }
    if (ctx->pc != 0x25CD18u) { return; }
    ctx->pc = 0x25CD18u;
    // 0x25cd18: 0x3c020034
    ctx->pc = 0x25cd18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25cd1c:
    // 0x25cd1c: 0x2403ffff
    ctx->pc = 0x25cd1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25cd20: 0xac43d344
    ctx->pc = 0x25cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955844), GPR_U32(ctx, 3));
    // 0x25cd24: 0x3c020034
    ctx->pc = 0x25cd24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25cd28: 0xac43d348
    ctx->pc = 0x25cd28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955848), GPR_U32(ctx, 3));
    // 0x25cd2c: 0xdfbf0000
    ctx->pc = 0x25cd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cd30: 0x3e00008
    ctx->pc = 0x25CD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CD34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25CD1Cu: goto label_25cd1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25CD38u;
}
