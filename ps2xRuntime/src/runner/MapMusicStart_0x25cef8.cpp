#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MapMusicStart
// Address: 0x25cef8 - 0x25cfc0
void MapMusicStart_0x25cef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25cef8u;

    // 0x25cef8: 0x27bdffd0
    ctx->pc = 0x25cef8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25cefc: 0xffbf0020
    ctx->pc = 0x25cefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25cf00: 0xffb10010
    ctx->pc = 0x25cf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25cf04: 0xffb00000
    ctx->pc = 0x25cf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25cf08: 0xc0989a8
    ctx->pc = 0x25CF08u;
    SET_GPR_U32(ctx, 31, 0x25CF10u);
    ctx->pc = 0x25CF0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2626A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelLetter_0x2626a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF10u; }
    }
    if (ctx->pc != 0x25CF10u) { return; }
    ctx->pc = 0x25CF10u;
    // 0x25cf10: 0x40882d
    ctx->pc = 0x25cf10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf14: 0xc08870e
    ctx->pc = 0x25CF14u;
    SET_GPR_U32(ctx, 31, 0x25CF1Cu);
    ctx->pc = 0x25CF18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)12 << 16));
    ctx->pc = 0x221C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundKill_0x221c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF1Cu; }
    }
    if (ctx->pc != 0x25CF1Cu) { return; }
    ctx->pc = 0x25CF1Cu;
    // 0x25cf1c: 0xc09733e
    ctx->pc = 0x25CF1Cu;
    SET_GPR_U32(ctx, 31, 0x25CF24u);
    ctx->pc = 0x25CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicStop_0x25ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF24u; }
    }
    if (ctx->pc != 0x25CF24u) { return; }
    ctx->pc = 0x25CF24u;
    // 0x25cf24: 0x24020053
    ctx->pc = 0x25cf24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 83));
    // 0x25cf28: 0x12220020
    ctx->pc = 0x25CF28u;
    {
        const bool branch_taken_0x25cf28 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x25CF2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 76));
        if (branch_taken_0x25cf28) {
            ctx->pc = 0x25CFACu;
            goto label_25cfac;
        }
    }
    ctx->pc = 0x25CF30u;
    // 0x25cf30: 0x1222001e
    ctx->pc = 0x25CF30u;
    {
        const bool branch_taken_0x25cf30 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x25CF34u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x25cf30) {
            ctx->pc = 0x25CFACu;
            goto label_25cfac;
        }
    }
    ctx->pc = 0x25CF38u;
    // 0x25cf38: 0x26042ad0
    ctx->pc = 0x25cf38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    // 0x25cf3c: 0x3c05003b
    ctx->pc = 0x25cf3cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25cf40: 0x24a59260
    ctx->pc = 0x25cf40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939232));
    // 0x25cf44: 0xc0b6252
    ctx->pc = 0x25CF44u;
    SET_GPR_U32(ctx, 31, 0x25CF4Cu);
    ctx->pc = 0x25CF48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF4Cu; }
    }
    if (ctx->pc != 0x25CF4Cu) { return; }
    ctx->pc = 0x25CF4Cu;
    // 0x25cf4c: 0x26042ad0
    ctx->pc = 0x25cf4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    // 0x25cf50: 0xc0972bc
    ctx->pc = 0x25CF50u;
    SET_GPR_U32(ctx, 31, 0x25CF58u);
    ctx->pc = 0x25CF54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25CAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLoadStage_0x25caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF58u; }
    }
    if (ctx->pc != 0x25CF58u) { return; }
    ctx->pc = 0x25CF58u;
    // 0x25cf58: 0xc0989a8
    ctx->pc = 0x25CF58u;
    SET_GPR_U32(ctx, 31, 0x25CF60u);
    ctx->pc = 0x25CF5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2626A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelLetter_0x2626a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF60u; }
    }
    if (ctx->pc != 0x25CF60u) { return; }
    ctx->pc = 0x25CF60u;
    // 0x25cf60: 0x26042ad0
    ctx->pc = 0x25cf60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    // 0x25cf64: 0x3c05003b
    ctx->pc = 0x25cf64u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25cf68: 0x24a59268
    ctx->pc = 0x25cf68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939240));
    // 0x25cf6c: 0xc0b6252
    ctx->pc = 0x25CF6Cu;
    SET_GPR_U32(ctx, 31, 0x25CF74u);
    ctx->pc = 0x25CF70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF74u; }
    }
    if (ctx->pc != 0x25CF74u) { return; }
    ctx->pc = 0x25CF74u;
    // 0x25cf74: 0x26042ad0
    ctx->pc = 0x25cf74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    // 0x25cf78: 0x2405ffff
    ctx->pc = 0x25cf78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25cf7c: 0xc088108
    ctx->pc = 0x25CF7Cu;
    SET_GPR_U32(ctx, 31, 0x25CF84u);
    ctx->pc = 0x25CF80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF84u; }
    }
    if (ctx->pc != 0x25CF84u) { return; }
    ctx->pc = 0x25CF84u;
    // 0x25cf84: 0x40202d
    ctx->pc = 0x25cf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf88: 0x4800009
    ctx->pc = 0x25CF88u;
    {
        const bool branch_taken_0x25cf88 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25CF8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x25cf88) {
            ctx->pc = 0x25CFB0u;
            goto label_25cfb0;
        }
    }
    ctx->pc = 0x25CF90u;
    // 0x25cf90: 0x3c020032
    ctx->pc = 0x25cf90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25cf94: 0x8c45fd68
    ctx->pc = 0x25cf94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966632)));
    // 0x25cf98: 0x24060001
    ctx->pc = 0x25cf98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25cf9c: 0xdfb10010
    ctx->pc = 0x25cf9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cfa0: 0xdfb00000
    ctx->pc = 0x25cfa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cfa4: 0x8088a94
    ctx->pc = 0x25CFA4u;
    ctx->pc = 0x25CFA8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x222A50u;
    AudioFX_0x222a50(rdram, ctx, runtime); return;
    ctx->pc = 0x25CFACu;
label_25cfac:
    // 0x25cfac: 0xdfbf0020
    ctx->pc = 0x25cfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25cfb0:
    // 0x25cfb0: 0xdfb10010
    ctx->pc = 0x25cfb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cfb4: 0xdfb00000
    ctx->pc = 0x25cfb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cfb8: 0x3e00008
    ctx->pc = 0x25CFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CFBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25CFACu: goto label_25cfac;
            case 0x25CFB0u: goto label_25cfb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25CFC0u;
}
