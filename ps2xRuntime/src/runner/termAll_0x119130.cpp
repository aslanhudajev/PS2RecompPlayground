#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: termAll
// Address: 0x119130 - 0x1191d0
void termAll_0x119130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119130u;

    // 0x119130: 0x27bdffe0
    ctx->pc = 0x119130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119134: 0x3c040067
    ctx->pc = 0x119134u;
    SET_GPR_U32(ctx, 4, ((uint32_t)103 << 16));
    // 0x119138: 0xffb00000
    ctx->pc = 0x119138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11913c: 0xffbf0010
    ctx->pc = 0x11913cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119140: 0xc04655c
    ctx->pc = 0x119140u;
    SET_GPR_U32(ctx, 31, 0x119148u);
    ctx->pc = 0x119144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942720));
    ctx->pc = 0x119570u;
    {
        const uint32_t __entryPc = ctx->pc;
        readBufDelete_0x119570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119148u; }
    }
    if (ctx->pc != 0x119148u) { return; }
    ctx->pc = 0x119148u;
    // 0x119148: 0x3c040075
    ctx->pc = 0x119148u;
    SET_GPR_U32(ctx, 4, ((uint32_t)117 << 16));
    // 0x11914c: 0xc046a46
    ctx->pc = 0x11914Cu;
    SET_GPR_U32(ctx, 31, 0x119154u);
    ctx->pc = 0x119150u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960408));
    ctx->pc = 0x11A918u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufDelete_0x11a918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119154u; }
    }
    if (ctx->pc != 0x119154u) { return; }
    ctx->pc = 0x119154u;
    // 0x119154: 0xc04383c
    ctx->pc = 0x119154u;
    SET_GPR_U32(ctx, 31, 0x11915Cu);
    ctx->pc = 0x119158u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935748)));
    ctx->pc = 0x10E0F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TerminateThread_0x10e0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11915Cu; }
    }
    if (ctx->pc != 0x11915Cu) { return; }
    ctx->pc = 0x11915Cu;
    // 0x11915c: 0xc04382c
    ctx->pc = 0x11915Cu;
    SET_GPR_U32(ctx, 31, 0x119164u);
    ctx->pc = 0x119160u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935748)));
    ctx->pc = 0x10E0B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteThread_0x10e0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119164u; }
    }
    if (ctx->pc != 0x119164u) { return; }
    ctx->pc = 0x119164u;
    // 0x119164: 0xc04383c
    ctx->pc = 0x119164u;
    SET_GPR_U32(ctx, 31, 0x11916Cu);
    ctx->pc = 0x119168u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
    ctx->pc = 0x10E0F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TerminateThread_0x10e0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11916Cu; }
    }
    if (ctx->pc != 0x11916Cu) { return; }
    ctx->pc = 0x11916Cu;
    // 0x11916c: 0xc04382c
    ctx->pc = 0x11916Cu;
    SET_GPR_U32(ctx, 31, 0x119174u);
    ctx->pc = 0x119170u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
    ctx->pc = 0x10E0B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteThread_0x10e0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119174u; }
    }
    if (ctx->pc != 0x119174u) { return; }
    ctx->pc = 0x119174u;
    // 0x119174: 0xc043ac6
    ctx->pc = 0x119174u;
    SET_GPR_U32(ctx, 31, 0x11917Cu);
    ctx->pc = 0x119178u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x10EB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x10eb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11917Cu; }
    }
    if (ctx->pc != 0x11917Cu) { return; }
    ctx->pc = 0x11917Cu;
    // 0x11917c: 0x3c100075
    ctx->pc = 0x11917cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)117 << 16));
    // 0x119180: 0x24040002
    ctx->pc = 0x119180u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x119184: 0x2610e5c8
    ctx->pc = 0x119184u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294960584));
    // 0x119188: 0xc0437f4
    ctx->pc = 0x119188u;
    SET_GPR_U32(ctx, 31, 0x119190u);
    ctx->pc = 0x11918Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->pc = 0x10DFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x10dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119190u; }
    }
    if (ctx->pc != 0x119190u) { return; }
    ctx->pc = 0x119190u;
    // 0x119190: 0xc043a92
    ctx->pc = 0x119190u;
    SET_GPR_U32(ctx, 31, 0x119198u);
    ctx->pc = 0x119194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x10EA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisableIntc_0x10ea48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119198u; }
    }
    if (ctx->pc != 0x119198u) { return; }
    ctx->pc = 0x119198u;
    // 0x119198: 0x8e0500b4
    ctx->pc = 0x119198u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x11919c: 0xc0437e8
    ctx->pc = 0x11919Cu;
    SET_GPR_U32(ctx, 31, 0x1191A4u);
    ctx->pc = 0x1191A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x10DFA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveIntcHandler_0x10dfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1191A4u; }
    }
    if (ctx->pc != 0x1191A4u) { return; }
    ctx->pc = 0x1191A4u;
    // 0x1191a4: 0xc04683e
    ctx->pc = 0x1191A4u;
    SET_GPR_U32(ctx, 31, 0x1191ACu);
    ctx->pc = 0x1191A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11A0F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecDelete_0x11a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1191ACu; }
    }
    if (ctx->pc != 0x1191ACu) { return; }
    ctx->pc = 0x1191ACu;
    // 0x1191ac: 0x3c040075
    ctx->pc = 0x1191acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)117 << 16));
    // 0x1191b0: 0xc0465d4
    ctx->pc = 0x1191B0u;
    SET_GPR_U32(ctx, 31, 0x1191B8u);
    ctx->pc = 0x1191B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960488));
    ctx->pc = 0x119750u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecDelete_0x119750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1191B8u; }
    }
    if (ctx->pc != 0x1191B8u) { return; }
    ctx->pc = 0x1191B8u;
    // 0x1191b8: 0x3c040075
    ctx->pc = 0x1191b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)117 << 16));
    // 0x1191bc: 0xdfbf0010
    ctx->pc = 0x1191bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1191c0: 0xdfb00000
    ctx->pc = 0x1191c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1191c4: 0x2484e680
    ctx->pc = 0x1191c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960768));
    // 0x1191c8: 0x8046fce
    ctx->pc = 0x1191C8u;
    ctx->pc = 0x1191CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x11BF38u;
    strFileClose_0x11bf38(rdram, ctx, runtime); return;
    ctx->pc = 0x1191D0u;
}
