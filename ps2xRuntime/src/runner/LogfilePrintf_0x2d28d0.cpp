#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LogfilePrintf
// Address: 0x2d28d0 - 0x2d29d0
void LogfilePrintf_0x2d28d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d28d0u;

    // 0x2d28d0: 0x27bdff50
    ctx->pc = 0x2d28d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d28d4: 0xffbf0020
    ctx->pc = 0x2d28d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d28d8: 0xffb10010
    ctx->pc = 0x2d28d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d28dc: 0xffb00000
    ctx->pc = 0x2d28dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d28e0: 0xffa50078
    ctx->pc = 0x2d28e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 5));
    // 0x2d28e4: 0xffa60080
    ctx->pc = 0x2d28e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 6));
    // 0x2d28e8: 0xffa70088
    ctx->pc = 0x2d28e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
    // 0x2d28ec: 0xffa80090
    ctx->pc = 0x2d28ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x2d28f0: 0xffa90098
    ctx->pc = 0x2d28f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x2d28f4: 0xffaa00a0
    ctx->pc = 0x2d28f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    // 0x2d28f8: 0xffab00a8
    ctx->pc = 0x2d28f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    // 0x2d28fc: 0xc0b48a8
    ctx->pc = 0x2D28FCu;
    SET_GPR_U32(ctx, 31, 0x2D2904u);
    ctx->pc = 0x2D2900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D22A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        running_standalone_0x2d22a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2904u; }
    }
    if (ctx->pc != 0x2D2904u) { return; }
    ctx->pc = 0x2D2904u;
    // 0x2d2904: 0x1440002e
    ctx->pc = 0x2D2904u;
    {
        const bool branch_taken_0x2d2904 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D2908u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2d2904) {
            ctx->pc = 0x2D29C0u;
            goto label_2d29c0;
        }
    }
    ctx->pc = 0x2D290Cu;
    // 0x2d290c: 0x3c02003a
    ctx->pc = 0x2d290cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d2910: 0x8c441d10
    ctx->pc = 0x2d2910u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 7440)));
    // 0x2d2914: 0x10800003
    ctx->pc = 0x2D2914u;
    {
        const bool branch_taken_0x2d2914 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2918u;
        SET_GPR_U32(ctx, 16, ((uint32_t)61 << 16));
        if (branch_taken_0x2d2914) {
            ctx->pc = 0x2D2924u;
            goto label_2d2924;
        }
    }
    ctx->pc = 0x2D291Cu;
    // 0x2d291c: 0xc0c0d88
    ctx->pc = 0x2D291Cu;
    SET_GPR_U32(ctx, 31, 0x2D2924u);
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2924u; }
    }
    if (ctx->pc != 0x2D2924u) { return; }
    ctx->pc = 0x2D2924u;
label_2d2924:
    // 0x2d2924: 0x26042258
    ctx->pc = 0x2d2924u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 8792));
    // 0x2d2928: 0x220282d
    ctx->pc = 0x2d2928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d292c: 0xc0b5d5e
    ctx->pc = 0x2D292Cu;
    SET_GPR_U32(ctx, 31, 0x2D2934u);
    ctx->pc = 0x2D2930u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 120));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2934u; }
    }
    if (ctx->pc != 0x2D2934u) { return; }
    ctx->pc = 0x2D2934u;
    // 0x2d2934: 0x26102258
    ctx->pc = 0x2d2934u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8792));
    // 0x2d2938: 0xa20007ff
    ctx->pc = 0x2d2938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2047), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d293c: 0xc0bed0a
    ctx->pc = 0x2D293Cu;
    SET_GPR_U32(ctx, 31, 0x2D2944u);
    ctx->pc = 0x2D2940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2944u; }
    }
    if (ctx->pc != 0x2D2944u) { return; }
    ctx->pc = 0x2D2944u;
    // 0x2d2944: 0x3c02003a
    ctx->pc = 0x2d2944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d2948: 0x24441c00
    ctx->pc = 0x2d2948u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 7168));
    // 0x2d294c: 0x80421c00
    ctx->pc = 0x2d294cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 7168)));
    // 0x2d2950: 0x10400006
    ctx->pc = 0x2D2950u;
    {
        const bool branch_taken_0x2d2950 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2954u;
        SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
        if (branch_taken_0x2d2950) {
            ctx->pc = 0x2D296Cu;
            goto label_2d296c;
        }
    }
    ctx->pc = 0x2D2958u;
    // 0x2d2958: 0xc0c1b06
    ctx->pc = 0x2D2958u;
    SET_GPR_U32(ctx, 31, 0x2D2960u);
    ctx->pc = 0x2D295Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x306C18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x306c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2960u; }
    }
    if (ctx->pc != 0x2D2960u) { return; }
    ctx->pc = 0x2D2960u;
    // 0x2d2960: 0x3c03003a
    ctx->pc = 0x2d2960u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d2964: 0xac621bf8
    ctx->pc = 0x2d2964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7160), GPR_U32(ctx, 2));
    // 0x2d2968: 0x3c11003a
    ctx->pc = 0x2d2968u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
label_2d296c:
    // 0x2d296c: 0x8e241bf8
    ctx->pc = 0x2d296cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7160)));
    // 0x2d2970: 0x480000c
    ctx->pc = 0x2D2970u;
    {
        const bool branch_taken_0x2d2970 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2D2974u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d2970) {
            ctx->pc = 0x2D29A4u;
            goto label_2d29a4;
        }
    }
    ctx->pc = 0x2D2978u;
    // 0x2d2978: 0xc0c1bb4
    ctx->pc = 0x2D2978u;
    SET_GPR_U32(ctx, 31, 0x2D2980u);
    ctx->pc = 0x2D297Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x306ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x306ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2980u; }
    }
    if (ctx->pc != 0x2D2980u) { return; }
    ctx->pc = 0x2D2980u;
    // 0x2d2980: 0x3c10003d
    ctx->pc = 0x2d2980u;
    SET_GPR_U32(ctx, 16, ((uint32_t)61 << 16));
    // 0x2d2984: 0xc0bf306
    ctx->pc = 0x2D2984u;
    SET_GPR_U32(ctx, 31, 0x2D298Cu);
    ctx->pc = 0x2D2988u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 8792));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D298Cu; }
    }
    if (ctx->pc != 0x2D298Cu) { return; }
    ctx->pc = 0x2D298Cu;
    // 0x2d298c: 0x8e241bf8
    ctx->pc = 0x2d298cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7160)));
    // 0x2d2990: 0x26052258
    ctx->pc = 0x2d2990u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 8792));
    // 0x2d2994: 0xc0c1c98
    ctx->pc = 0x2D2994u;
    SET_GPR_U32(ctx, 31, 0x2D299Cu);
    ctx->pc = 0x2D2998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x307260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x307260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D299Cu; }
    }
    if (ctx->pc != 0x2D299Cu) { return; }
    ctx->pc = 0x2D299Cu;
    // 0x2d299c: 0xc0c1b76
    ctx->pc = 0x2D299Cu;
    SET_GPR_U32(ctx, 31, 0x2D29A4u);
    ctx->pc = 0x2D29A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7160)));
    ctx->pc = 0x306DD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x306dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D29A4u; }
    }
    if (ctx->pc != 0x2D29A4u) { return; }
    ctx->pc = 0x2D29A4u;
label_2d29a4:
    // 0x2d29a4: 0x3c02003a
    ctx->pc = 0x2d29a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d29a8: 0x8c441d10
    ctx->pc = 0x2d29a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 7440)));
    // 0x2d29ac: 0x10800004
    ctx->pc = 0x2D29ACu;
    {
        const bool branch_taken_0x2d29ac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D29B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2d29ac) {
            ctx->pc = 0x2D29C0u;
            goto label_2d29c0;
        }
    }
    ctx->pc = 0x2D29B4u;
    // 0x2d29b4: 0xc0c0d80
    ctx->pc = 0x2D29B4u;
    SET_GPR_U32(ctx, 31, 0x2D29BCu);
    ctx->pc = 0x303600u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x303600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D29BCu; }
    }
    if (ctx->pc != 0x2D29BCu) { return; }
    ctx->pc = 0x2D29BCu;
    // 0x2d29bc: 0xdfbf0020
    ctx->pc = 0x2d29bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d29c0:
    // 0x2d29c0: 0xdfb10010
    ctx->pc = 0x2d29c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d29c4: 0xdfb00000
    ctx->pc = 0x2d29c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d29c8: 0x3e00008
    ctx->pc = 0x2D29C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D29CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2924u: goto label_2d2924;
            case 0x2D296Cu: goto label_2d296c;
            case 0x2D29A4u: goto label_2d29a4;
            case 0x2D29C0u: goto label_2d29c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D29D0u;
}
