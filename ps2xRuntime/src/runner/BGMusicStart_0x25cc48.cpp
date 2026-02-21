#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BGMusicStart
// Address: 0x25cc48 - 0x25ccf8
void BGMusicStart_0x25cc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25cc48u;

    // 0x25cc48: 0x27bdffe0
    ctx->pc = 0x25cc48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25cc4c: 0xffbf0010
    ctx->pc = 0x25cc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25cc50: 0xffb00000
    ctx->pc = 0x25cc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25cc54: 0x3c020034
    ctx->pc = 0x25cc54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25cc58: 0x8c42e7f0
    ctx->pc = 0x25cc58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25cc5c: 0x28200
    ctx->pc = 0x25cc5cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 8));
    // 0x25cc60: 0x3c020034
    ctx->pc = 0x25cc60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25cc64: 0x9042e7f4
    ctx->pc = 0x25cc64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961140)));
    // 0x25cc68: 0x2028025
    ctx->pc = 0x25cc68u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25cc6c: 0x0
    ctx->pc = 0x25cc6cu;
    // NOP
label_25cc70:
    // 0x25cc70: 0xc088b7e
    ctx->pc = 0x25CC70u;
    SET_GPR_U32(ctx, 31, 0x25CC78u);
    ctx->pc = 0x25CC74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x222DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStillPlaying_0x222df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC78u; }
    }
    if (ctx->pc != 0x25CC78u) { return; }
    ctx->pc = 0x25CC78u;
    // 0x25cc78: 0x1440fffd
    ctx->pc = 0x25CC78u;
    {
        const bool branch_taken_0x25cc78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25cc78) {
            ctx->pc = 0x25CC70u;
            goto label_25cc70;
        }
    }
    ctx->pc = 0x25CC80u;
    // 0x25cc80: 0xc09710c
    ctx->pc = 0x25CC80u;
    SET_GPR_U32(ctx, 31, 0x25CC88u);
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC88u; }
    }
    if (ctx->pc != 0x25CC88u) { return; }
    ctx->pc = 0x25CC88u;
    // 0x25cc88: 0x3c020034
    ctx->pc = 0x25cc88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25cc8c: 0x8c42e7c8
    ctx->pc = 0x25cc8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x25cc90: 0x8c440064
    ctx->pc = 0x25cc90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25cc94: 0xc0972bc
    ctx->pc = 0x25CC94u;
    SET_GPR_U32(ctx, 31, 0x25CC9Cu);
    ctx->pc = 0x25CC98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25CAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLoadStage_0x25caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC9Cu; }
    }
    if (ctx->pc != 0x25CC9Cu) { return; }
    ctx->pc = 0x25CC9Cu;
    // 0x25cc9c: 0x3c020034
    ctx->pc = 0x25cc9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25cca0: 0xac50d344
    ctx->pc = 0x25cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955844), GPR_U32(ctx, 16));
    // 0x25cca4: 0x3c030034
    ctx->pc = 0x25cca4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25cca8: 0x3c020032
    ctx->pc = 0x25cca8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25ccac: 0x8c42fd68
    ctx->pc = 0x25ccacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966632)));
    // 0x25ccb0: 0xac62d34c
    ctx->pc = 0x25ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955852), GPR_U32(ctx, 2));
    // 0x25ccb4: 0x3c020034
    ctx->pc = 0x25ccb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ccb8: 0xac40d348
    ctx->pc = 0x25ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955848), GPR_U32(ctx, 0));
    // 0x25ccbc: 0x3c020034
    ctx->pc = 0x25ccbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ccc0: 0xac40d350
    ctx->pc = 0x25ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955856), GPR_U32(ctx, 0));
    // 0x25ccc4: 0x3c020034
    ctx->pc = 0x25ccc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ccc8: 0xac40d320
    ctx->pc = 0x25ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955808), GPR_U32(ctx, 0));
    // 0x25cccc: 0x3c020034
    ctx->pc = 0x25ccccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ccd0: 0xac40d324
    ctx->pc = 0x25ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955812), GPR_U32(ctx, 0));
    // 0x25ccd4: 0x3c02003c
    ctx->pc = 0x25ccd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25ccd8: 0xac402b10
    ctx->pc = 0x25ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11024), GPR_U32(ctx, 0));
    // 0x25ccdc: 0x3c020032
    ctx->pc = 0x25ccdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25cce0: 0xc0971e6
    ctx->pc = 0x25CCE0u;
    SET_GPR_U32(ctx, 31, 0x25CCE8u);
    ctx->pc = 0x25CCE4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966684), GPR_U32(ctx, 0));
    ctx->pc = 0x25C798u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGPlayStream_0x25c798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CCE8u; }
    }
    if (ctx->pc != 0x25CCE8u) { return; }
    ctx->pc = 0x25CCE8u;
    // 0x25cce8: 0xdfbf0010
    ctx->pc = 0x25cce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ccec: 0xdfb00000
    ctx->pc = 0x25ccecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ccf0: 0x8097154
    ctx->pc = 0x25CCF0u;
    ctx->pc = 0x25CCF4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x25C550u;
    AudioWorldInit_0x25c550(rdram, ctx, runtime); return;
    ctx->pc = 0x25CCF8u;
}
