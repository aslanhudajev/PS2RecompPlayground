#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_00140008
// Address: 0x140008 - 0x1400b8
void sub_00140008_0x140008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_00140008");


    ctx->pc = 0x140008u;

    // 0x140008: 0x3c02002d
    ctx->pc = 0x140008u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x14000c: 0x3c0300a2
    ctx->pc = 0x14000cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)162 << 16));
    // 0x140010: 0x24425f80
    ctx->pc = 0x140010u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 24448));
    // 0x140014: 0x2463b000
    ctx->pc = 0x140014u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294946816));
label_140018:
    // 0x140018: 0x7c400000
    ctx->pc = 0x140018u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x14001c: 0x0
    ctx->pc = 0x14001cu;
    // NOP
    // 0x140020: 0x43082b
    ctx->pc = 0x140020u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140024: 0x0
    ctx->pc = 0x140024u;
    // NOP
    // 0x140028: 0x0
    ctx->pc = 0x140028u;
    // NOP
    // 0x14002c: 0x1420fffa
    ctx->pc = 0x14002Cu;
    {
        const bool branch_taken_0x14002c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x140030u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x14002c) {
            ctx->pc = 0x140018u;
            goto label_140018;
        }
    }
    ctx->pc = 0x140034u;
    // 0x140034: 0x3c04002e
    ctx->pc = 0x140034u;
    SET_GPR_U32(ctx, 4, ((uint32_t)46 << 16));
    // 0x140038: 0x3c050000
    ctx->pc = 0x140038u;
    SET_GPR_U32(ctx, 5, ((uint32_t)0 << 16));
    // 0x14003c: 0x3c060010
    ctx->pc = 0x14003cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)16 << 16));
    // 0x140040: 0x3c07002d
    ctx->pc = 0x140040u;
    SET_GPR_U32(ctx, 7, ((uint32_t)45 << 16));
    // 0x140044: 0x3c080014
    ctx->pc = 0x140044u;
    SET_GPR_U32(ctx, 8, ((uint32_t)20 << 16));
    // 0x140048: 0x2484d670
    ctx->pc = 0x140048u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956656));
    // 0x14004c: 0x24a5ffff
    ctx->pc = 0x14004cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x140050: 0x24c60000
    ctx->pc = 0x140050u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 0));
    // 0x140054: 0x24e76780
    ctx->pc = 0x140054u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 26496));
    // 0x140058: 0x250800c0
    ctx->pc = 0x140058u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 192));
    // 0x14005c: 0x80e025
    ctx->pc = 0x14005cu;
    SET_GPR_U32(ctx, 28, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
    // 0x140060: 0x2403003c
    ctx->pc = 0x140060u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x140064: 0xc
    ctx->pc = 0x140064u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x140068: 0x40e825
    ctx->pc = 0x140068u;
    SET_GPR_U32(ctx, 29, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x14006c: 0x3c0400a2
    ctx->pc = 0x14006cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)162 << 16));
    // 0x140070: 0x3c050000
    ctx->pc = 0x140070u;
    SET_GPR_U32(ctx, 5, ((uint32_t)0 << 16));
    // 0x140074: 0x2484b000
    ctx->pc = 0x140074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946816));
    // 0x140078: 0x24a5ffff
    ctx->pc = 0x140078u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14007c: 0x2403003d
    ctx->pc = 0x14007cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 61));
    // 0x140080: 0xc
    ctx->pc = 0x140080u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x140084: 0xc057286
    ctx->pc = 0x140084u;
    SET_GPR_U32(ctx, 31, 0x14008Cu);
    ctx->pc = 0x15CA18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__InitSys_0x15ca18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14008Cu; }
        else if (ctx->pc != 0x14008Cu) { ctx->pc = 0x14008Cu; }
    }
    if (ctx->pc != 0x14008Cu) { return; }
    ctx->pc = 0x14008Cu;
    // 0x14008c: 0xc0552d8
    ctx->pc = 0x14008Cu;
    SET_GPR_U32(ctx, 31, 0x140094u);
    ctx->pc = 0x140090u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140094u; }
        else if (ctx->pc != 0x140094u) { ctx->pc = 0x140094u; }
    }
    if (ctx->pc != 0x140094u) { return; }
    ctx->pc = 0x140094u;
    // 0x140094: 0x42000038
    ctx->pc = 0x140094u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x140098: 0x3c02002d
    ctx->pc = 0x140098u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x14009c: 0x24426780
    ctx->pc = 0x14009cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26496));
    // 0x1400a0: 0x8c440000
    ctx->pc = 0x1400a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1400a4: 0xc07cb38
    ctx->pc = 0x1400A4u;
    SET_GPR_U32(ctx, 31, 0x1400ACu);
    ctx->pc = 0x1400A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x1F2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2_main_0x1f2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1400ACu; }
        else if (ctx->pc != 0x1400ACu) { ctx->pc = 0x1400ACu; }
    }
    if (ctx->pc != 0x1400ACu) { return; }
    ctx->pc = 0x1400ACu;
    // 0x1400ac: 0x8055140
    ctx->pc = 0x1400ACu;
    ctx->pc = 0x1400B0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    ctx->pc = 0x154500u;
    Exit_0x154500(rdram, ctx, runtime); return;
    ctx->pc = 0x1400B4u;
    // 0x1400b4: 0x0
    ctx->pc = 0x1400b4u;
    // NOP
}
