#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ShopMusicStart
// Address: 0x25cfc8 - 0x25d07c
void ShopMusicStart_0x25cfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25cfc8u;

    // 0x25cfc8: 0x27bdffd0
    ctx->pc = 0x25cfc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25cfcc: 0xffbf0020
    ctx->pc = 0x25cfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25cfd0: 0xffb10010
    ctx->pc = 0x25cfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25cfd4: 0xffb00000
    ctx->pc = 0x25cfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25cfd8: 0xc08870e
    ctx->pc = 0x25CFD8u;
    SET_GPR_U32(ctx, 31, 0x25CFE0u);
    ctx->pc = 0x25CFDCu;
    SET_GPR_U32(ctx, 4, ((uint32_t)12 << 16));
    ctx->pc = 0x221C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundKill_0x221c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CFE0u; }
    }
    if (ctx->pc != 0x25CFE0u) { return; }
    ctx->pc = 0x25CFE0u;
    // 0x25cfe0: 0xc09733e
    ctx->pc = 0x25CFE0u;
    SET_GPR_U32(ctx, 31, 0x25CFE8u);
    ctx->pc = 0x25CFE4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    ctx->pc = 0x25CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicStop_0x25ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CFE8u; }
    }
    if (ctx->pc != 0x25CFE8u) { return; }
    ctx->pc = 0x25CFE8u;
    // 0x25cfe8: 0xc0989a8
    ctx->pc = 0x25CFE8u;
    SET_GPR_U32(ctx, 31, 0x25CFF0u);
    ctx->pc = 0x25CFECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2626A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelLetter_0x2626a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CFF0u; }
    }
    if (ctx->pc != 0x25CFF0u) { return; }
    ctx->pc = 0x25CFF0u;
    // 0x25cff0: 0x40802d
    ctx->pc = 0x25cff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cff4: 0x2a03004c
    ctx->pc = 0x25cff4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 76));
    // 0x25cff8: 0x24020041
    ctx->pc = 0x25cff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x25cffc: 0x43800a
    ctx->pc = 0x25cffcu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x25d000: 0x26242ad0
    ctx->pc = 0x25d000u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 10960));
    // 0x25d004: 0x3c05003b
    ctx->pc = 0x25d004u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25d008: 0x24a59278
    ctx->pc = 0x25d008u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939256));
    // 0x25d00c: 0xc0b6252
    ctx->pc = 0x25D00Cu;
    SET_GPR_U32(ctx, 31, 0x25D014u);
    ctx->pc = 0x25D010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D014u; }
    }
    if (ctx->pc != 0x25D014u) { return; }
    ctx->pc = 0x25D014u;
    // 0x25d014: 0x26242ad0
    ctx->pc = 0x25d014u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 10960));
    // 0x25d018: 0xc0972bc
    ctx->pc = 0x25D018u;
    SET_GPR_U32(ctx, 31, 0x25D020u);
    ctx->pc = 0x25D01Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25CAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLoadStage_0x25caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D020u; }
    }
    if (ctx->pc != 0x25D020u) { return; }
    ctx->pc = 0x25D020u;
    // 0x25d020: 0x26242ad0
    ctx->pc = 0x25d020u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 10960));
    // 0x25d024: 0x3c05003b
    ctx->pc = 0x25d024u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25d028: 0x24a59280
    ctx->pc = 0x25d028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939264));
    // 0x25d02c: 0xc0b6252
    ctx->pc = 0x25D02Cu;
    SET_GPR_U32(ctx, 31, 0x25D034u);
    ctx->pc = 0x25D030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D034u; }
    }
    if (ctx->pc != 0x25D034u) { return; }
    ctx->pc = 0x25D034u;
    // 0x25d034: 0x26242ad0
    ctx->pc = 0x25d034u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 10960));
    // 0x25d038: 0x2405ffff
    ctx->pc = 0x25d038u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25d03c: 0xc088108
    ctx->pc = 0x25D03Cu;
    SET_GPR_U32(ctx, 31, 0x25D044u);
    ctx->pc = 0x25D040u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D044u; }
    }
    if (ctx->pc != 0x25D044u) { return; }
    ctx->pc = 0x25D044u;
    // 0x25d044: 0x40202d
    ctx->pc = 0x25d044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d048: 0x4800008
    ctx->pc = 0x25D048u;
    {
        const bool branch_taken_0x25d048 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25D04Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x25d048) {
            ctx->pc = 0x25D06Cu;
            goto label_25d06c;
        }
    }
    ctx->pc = 0x25D050u;
    // 0x25d050: 0x3c020032
    ctx->pc = 0x25d050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25d054: 0x8c45fd68
    ctx->pc = 0x25d054u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966632)));
    // 0x25d058: 0x24060001
    ctx->pc = 0x25d058u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d05c: 0xdfb10010
    ctx->pc = 0x25d05cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d060: 0xdfb00000
    ctx->pc = 0x25d060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d064: 0x8088a94
    ctx->pc = 0x25D064u;
    ctx->pc = 0x25D068u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x222A50u;
    AudioFX_0x222a50(rdram, ctx, runtime); return;
    ctx->pc = 0x25D06Cu;
label_25d06c:
    // 0x25d06c: 0xdfb10010
    ctx->pc = 0x25d06cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d070: 0xdfb00000
    ctx->pc = 0x25d070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d074: 0x3e00008
    ctx->pc = 0x25D074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D078u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25D06Cu: goto label_25d06c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25D07Cu;
}
