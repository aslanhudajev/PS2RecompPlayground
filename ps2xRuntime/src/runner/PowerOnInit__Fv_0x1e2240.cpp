#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"
#include <iostream>
#include <iomanip>

// Function: PowerOnInit__Fv
// Address: 0x1e2240 - 0x1e275c
void PowerOnInit__Fv_0x1e2240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY_CTX("PowerOnInit", ctx);
    ctx->pc = 0x1e2240u;

label_1e2240:
    // 0x1e2240: 0x27bdffc0
    ctx->pc = 0x1e2240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e2244:
    // 0x1e2244: 0x7fbf0030
    ctx->pc = 0x1e2244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_1e2248:
    // 0x1e2248: 0x7fb10020
    ctx->pc = 0x1e2248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e224c:
    // 0x1e224c: 0x7fb00010
    ctx->pc = 0x1e224cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e2250:
    // 0x1e2250: 0xaf808be8
    ctx->pc = 0x1e2250u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937576), GPR_U32(ctx, 0));
label_1e2254:
    // 0x1e2254: 0x24040001
    ctx->pc = 0x1e2254u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1e2258:
    // 0x1e2258: 0xaf808bec
    ctx->pc = 0x1e2258u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937580), GPR_U32(ctx, 0));
label_1e225c:
    // 0x1e225c: 0xc0547ee
label_1e2260:
    if (ctx->pc == 0x1E2260u) {
        ctx->pc = 0x1E2260u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 0));
        ctx->pc = 0x1E2264u;
        goto label_1e2264;
    }
    ctx->pc = 0x1E225Cu;
    SET_GPR_U32(ctx, 31, 0x1E2264u);
    ctx->pc = 0x1E2260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 0));
    ctx->pc = 0x151FB8u;
    {
        PS2_INIT_LOG_ENTRY("sceDmaReset");
        const uint32_t __entryPc = ctx->pc;
        sceDmaReset_0x151fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2264u; }
        else if (ctx->pc != 0x1E2264u) { ctx->pc = 0x1E2264u; }
    }
    if (ctx->pc != 0x1E2264u) { return; }
    ctx->pc = 0x1E2264u;
label_1e2264:
    // 0x1e2264: 0xc054af2
label_1e2268:
    if (ctx->pc == 0x1E2268u) {
        ctx->pc = 0x1E226Cu;
        goto label_1e226c;
    }
    ctx->pc = 0x1E2264u;
    SET_GPR_U32(ctx, 31, 0x1E226Cu);
    ctx->pc = 0x152BC8u;
    {
        PS2_INIT_LOG_ENTRY("sceGsResetPath");
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x152bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E226Cu; }
        else if (ctx->pc != 0x1E226Cu) { ctx->pc = 0x1E226Cu; }
    }
    if (ctx->pc != 0x1E226Cu) { return; }
    ctx->pc = 0x1E226Cu;
label_1e226c:
    // 0x1e226c: 0x3c020050
    ctx->pc = 0x1e226cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1e2270:
    // 0x1e2270: 0xc074d94
label_1e2274:
    if (ctx->pc == 0x1E2274u) {
        ctx->pc = 0x1E2274u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
        ctx->pc = 0x1E2278u;
        goto label_1e2278;
    }
    ctx->pc = 0x1E2270u;
    SET_GPR_U32(ctx, 31, 0x1E2278u);
    ctx->pc = 0x1E2274u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D3650u;
    {
        PS2_INIT_LOG_ENTRY("init1_SysCfgMgr");
        const uint32_t __entryPc = ctx->pc;
        init1__14SysCfgMgrClassFv_0x1d3650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2278u; }
        else if (ctx->pc != 0x1E2278u) { ctx->pc = 0x1E2278u; }
    }
    if (ctx->pc != 0x1E2278u) { return; }
    ctx->pc = 0x1E2278u;
label_1e2278:
    // 0x1e2278: 0xc07bb94
label_1e227c:
    if (ctx->pc == 0x1E227Cu) {
        ctx->pc = 0x1E227Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937436));
        ctx->pc = 0x1E2280u;
        goto label_1e2280;
    }
    ctx->pc = 0x1E2278u;
    SET_GPR_U32(ctx, 31, 0x1E2280u);
    ctx->pc = 0x1E227Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937436));
    ctx->pc = 0x1EEE50u;
    {
        PS2_INIT_LOG_ENTRY("init_SwitchMgr");
        const uint32_t __entryPc = ctx->pc;
        init__14SwitchMgrClassFv_0x1eee50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2280u; }
        else if (ctx->pc != 0x1E2280u) { ctx->pc = 0x1E2280u; }
    }
    if (ctx->pc != 0x1E2280u) { return; }
    ctx->pc = 0x1E2280u;
label_1e2280:
    // 0x1e2280: 0x3c020050
    ctx->pc = 0x1e2280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1e2284:
    // 0x1e2284: 0xc07b6fc
label_1e2288:
    if (ctx->pc == 0x1E2288u) {
        ctx->pc = 0x1E2288u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957936));
        ctx->pc = 0x1E228Cu;
        goto label_1e228c;
    }
    ctx->pc = 0x1E2284u;
    SET_GPR_U32(ctx, 31, 0x1E228Cu);
    ctx->pc = 0x1E2288u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957936));
    ctx->pc = 0x1EDBF0u;
    {
        PS2_INIT_LOG_ENTRY("init_GunMgr");
        const uint32_t __entryPc = ctx->pc;
        init__11GunMgrClassFv_0x1edbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E228Cu; }
        else if (ctx->pc != 0x1E228Cu) { ctx->pc = 0x1E228Cu; }
    }
    if (ctx->pc != 0x1E228Cu) { return; }
    ctx->pc = 0x1E228Cu;
label_1e228c:
    // 0x1e228c: 0xc086bc4
label_1e2290:
    if (ctx->pc == 0x1E2290u) {
        ctx->pc = 0x1E2290u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294938016));
        ctx->pc = 0x1E2294u;
        goto label_1e2294;
    }
    ctx->pc = 0x1E228Cu;
    SET_GPR_U32(ctx, 31, 0x1E2294u);
    ctx->pc = 0x1E2290u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294938016));
    ctx->pc = 0x21AF10u;
    {
        PS2_INIT_LOG_ENTRY("init_Vibration");
        const uint32_t __entryPc = ctx->pc;
        init__14VibrationClassFv_0x21af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2294u; }
        else if (ctx->pc != 0x1E2294u) { ctx->pc = 0x1E2294u; }
    }
    if (ctx->pc != 0x1E2294u) { return; }
    ctx->pc = 0x1E2294u;
label_1e2294:
    // 0x1e2294: 0x3c020050
    ctx->pc = 0x1e2294u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1e2298:
    // 0x1e2298: 0xc075090
label_1e229c:
    if (ctx->pc == 0x1E229Cu) {
        ctx->pc = 0x1E229Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
        ctx->pc = 0x1E22A0u;
        goto label_1e22a0;
    }
    ctx->pc = 0x1E2298u;
    SET_GPR_U32(ctx, 31, 0x1E22A0u);
    ctx->pc = 0x1E229Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    ctx->pc = 0x1D4240u;
    {
        PS2_INIT_LOG_ENTRY("init_Credit");
        const uint32_t __entryPc = ctx->pc;
        init__11CreditClassFv_0x1d4240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22A0u; }
        else if (ctx->pc != 0x1E22A0u) { ctx->pc = 0x1E22A0u; }
    }
    if (ctx->pc != 0x1E22A0u) { return; }
    ctx->pc = 0x1E22A0u;
label_1e22a0:
    // 0x1e22a0: 0x3c02001f
    ctx->pc = 0x1e22a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)31 << 16));
label_1e22a4:
    // 0x1e22a4: 0x24040002
    ctx->pc = 0x1e22a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1e22a8:
    // 0x1e22a8: 0x2445ec50
    ctx->pc = 0x1e22a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294962256));
label_1e22ac:
    // 0x1e22ac: 0x70003628
    ctx->pc = 0x1e22acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e22b0:
    // 0x1e22b0: 0xc055170
label_1e22b4:
    if (ctx->pc == 0x1E22B4u) {
        ctx->pc = 0x1E22B4u;
        ps2_init_log::log_write32(ADD32(GPR_U32(ctx, 28), 4294937864), GPR_U32(ctx, 0), "0x1e22b4");
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937864), GPR_U32(ctx, 0));
        ctx->pc = 0x1E22B8u;
        goto label_1e22b8;
    }
    ctx->pc = 0x1E22B0u;
    SET_GPR_U32(ctx, 31, 0x1E22B8u);
    ctx->pc = 0x1E22B4u;
    ps2_init_log::log_write32(ADD32(GPR_U32(ctx, 28), 4294937864), GPR_U32(ctx, 0), "0x1e22b4");
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937864), GPR_U32(ctx, 0));
    ctx->pc = 0x1545C0u;
    {
        PS2_INIT_LOG_ENTRY("AddIntcHandler");
        const uint32_t __entryPc = ctx->pc;
        AddIntcHandler_0x1545c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22B8u; }
        else if (ctx->pc != 0x1E22B8u) { ctx->pc = 0x1E22B8u; }
    }
    if (ctx->pc != 0x1E22B8u) { return; }
    ctx->pc = 0x1E22B8u;
label_1e22b8:
    // 0x1e22b8: 0x4410006
label_1e22bc:
    if (ctx->pc == 0x1E22BCu) {
        ctx->pc = 0x1E22BCu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 2));
        ctx->pc = 0x1E22C0u;
        goto label_1e22c0;
    }
    ctx->pc = 0x1E22B8u;
    {
        const bool branch_taken_0x1e22b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E22BCu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 2));
        if (branch_taken_0x1e22b8) {
            ctx->pc = 0x1E22D4u;
            goto label_1e22d4;
        }
    }
    ctx->pc = 0x1E22C0u;
label_1e22c0:
    // 0x1e22c0: 0x3c020027
    ctx->pc = 0x1e22c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1e22c4:
    // 0x1e22c4: 0xc05114a
label_1e22c8:
    if (ctx->pc == 0x1E22C8u) {
        ctx->pc = 0x1E22C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294940768));
        ctx->pc = 0x1E22CCu;
        goto label_1e22cc;
    }
    ctx->pc = 0x1E22C4u;
    SET_GPR_U32(ctx, 31, 0x1E22CCu);
    ctx->pc = 0x1E22C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294940768));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22CCu; }
        else if (ctx->pc != 0x1E22CCu) { ctx->pc = 0x1E22CCu; }
    }
    if (ctx->pc != 0x1E22CCu) { return; }
    ctx->pc = 0x1E22CCu;
label_1e22cc:
    // 0x1e22cc: 0x1000ffff
label_1e22d0:
    if (ctx->pc == 0x1E22D0u) {
        ctx->pc = 0x1E22D4u;
        goto label_1e22d4;
    }
    ctx->pc = 0x1E22CCu;
    {
        const bool branch_taken_0x1e22cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e22cc) {
            ctx->pc = 0x1E22CCu;
            goto label_1e22cc;
        }
    }
    ctx->pc = 0x1E22D4u;
label_1e22d4:
    // 0x1e22d4: 0x3c02001f
    ctx->pc = 0x1e22d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)31 << 16));
label_1e22d8:
    // 0x1e22d8: 0x24040003
    ctx->pc = 0x1e22d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_1e22dc:
    // 0x1e22dc: 0x2445ecc0
    ctx->pc = 0x1e22dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294962368));
label_1e22e0:
    // 0x1e22e0: 0xc055170
label_1e22e4:
    if (ctx->pc == 0x1E22E4u) {
        ctx->pc = 0x1E22E4u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E22E8u;
        goto label_1e22e8;
    }
    ctx->pc = 0x1E22E0u;
    SET_GPR_U32(ctx, 31, 0x1E22E8u);
    ctx->pc = 0x1E22E4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1545C0u;
    {
        PS2_INIT_LOG_ENTRY("AddIntcHandler");
        const uint32_t __entryPc = ctx->pc;
        AddIntcHandler_0x1545c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22E8u; }
        else if (ctx->pc != 0x1E22E8u) { ctx->pc = 0x1E22E8u; }
    }
    if (ctx->pc != 0x1E22E8u) { return; }
    ctx->pc = 0x1E22E8u;
label_1e22e8:
    // 0x1e22e8: 0x4410006
label_1e22ec:
    if (ctx->pc == 0x1E22ECu) {
        ctx->pc = 0x1E22ECu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
        ctx->pc = 0x1E22F0u;
        goto label_1e22f0;
    }
    ctx->pc = 0x1E22E8u;
    {
        const bool branch_taken_0x1e22e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E22ECu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
        if (branch_taken_0x1e22e8) {
            ctx->pc = 0x1E2304u;
            goto label_1e2304;
        }
    }
    ctx->pc = 0x1E22F0u;
label_1e22f0:
    // 0x1e22f0: 0x3c020027
    ctx->pc = 0x1e22f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1e22f4:
    // 0x1e22f4: 0xc05114a
label_1e22f8:
    if (ctx->pc == 0x1E22F8u) {
        ctx->pc = 0x1E22F8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294940800));
        ctx->pc = 0x1E22FCu;
        goto label_1e22fc;
    }
    ctx->pc = 0x1E22F4u;
    SET_GPR_U32(ctx, 31, 0x1E22FCu);
    ctx->pc = 0x1E22F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294940800));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22FCu; }
        else if (ctx->pc != 0x1E22FCu) { ctx->pc = 0x1E22FCu; }
    }
    if (ctx->pc != 0x1E22FCu) { return; }
    ctx->pc = 0x1E22FCu;
label_1e22fc:
    // 0x1e22fc: 0x1000ffff
label_1e2300:
    if (ctx->pc == 0x1E2300u) {
        ctx->pc = 0x1E2304u;
        goto label_1e2304;
    }
    ctx->pc = 0x1E22FCu;
    {
        const bool branch_taken_0x1e22fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e22fc) {
            ctx->pc = 0x1E22FCu;
            goto label_1e22fc;
        }
    }
    ctx->pc = 0x1E2304u;
label_1e2304:
    // 0x1e2304: 0xc0554dc
label_1e2308:
    if (ctx->pc == 0x1E2308u) {
        ctx->pc = 0x1E2308u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1E230Cu;
        goto label_1e230c;
    }
    ctx->pc = 0x1E2304u;
    SET_GPR_U32(ctx, 31, 0x1E230Cu);
    ctx->pc = 0x1E2308u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x155370u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnableIntc_0x155370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E230Cu; }
        else if (ctx->pc != 0x1E230Cu) { ctx->pc = 0x1E230Cu; }
    }
    if (ctx->pc != 0x1E230Cu) { return; }
    ctx->pc = 0x1E230Cu;
label_1e230c:
    // 0x1e230c: 0xc0554dc
label_1e2310:
    if (ctx->pc == 0x1E2310u) {
        ctx->pc = 0x1E2310u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1E2314u;
        goto label_1e2314;
    }
    ctx->pc = 0x1E230Cu;
    SET_GPR_U32(ctx, 31, 0x1E2314u);
    ctx->pc = 0x1E2310u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x155370u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnableIntc_0x155370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2314u; }
        else if (ctx->pc != 0x1E2314u) { ctx->pc = 0x1E2314u; }
    }
    if (ctx->pc != 0x1E2314u) { return; }
    ctx->pc = 0x1E2314u;
label_1e2314:
    // 0x1e2314: 0x24022000
    ctx->pc = 0x1e2314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8192));
label_1e2318:
    // 0x1e2318: 0xffa20000
    ctx->pc = 0x1e2318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e231c:
    // 0x1e231c: 0x24080001
    ctx->pc = 0x1e231cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_1e2320:
    // 0x1e2320: 0x3c027000
    ctx->pc = 0x1e2320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
label_1e2324:
    // 0x1e2324: 0xffa80008
    ctx->pc = 0x1e2324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
label_1e2328:
    // 0x1e2328: 0x24040026
    ctx->pc = 0x1e2328u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 38));
label_1e232c:
    // 0x1e232c: 0x70002e28
    ctx->pc = 0x1e232cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e2330:
    // 0x1e2330: 0x24060002
    ctx->pc = 0x1e2330u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_1e2334:
    // 0x1e2334: 0x24070030
    ctx->pc = 0x1e2334u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 48));
label_1e2338:
    // 0x1e2338: 0x3c090010
    ctx->pc = 0x1e2338u;
    SET_GPR_U32(ctx, 9, ((uint32_t)16 << 16));
label_1e233c:
    // 0x1e233c: 0x3c0a0004
    ctx->pc = 0x1e233cu;
    SET_GPR_U32(ctx, 10, ((uint32_t)4 << 16));
label_1e2340:
    // 0x1e2340: 0xc06bae8
label_1e2344:
    if (ctx->pc == 0x1E2344u) {
        ctx->pc = 0x1E2344u;
        SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 2), 8192));
        ctx->pc = 0x1E2348u;
        goto label_1e2348;
    }
    ctx->pc = 0x1E2340u;
    SET_GPR_U32(ctx, 31, 0x1E2348u);
    ctx->pc = 0x1E2344u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 2), 8192));
    ctx->pc = 0x1AEBA0u;
    {
        PS2_INIT_LOG_ENTRY("nlInitLibrary");
        const uint32_t __entryPc = ctx->pc;
        nlInitLibrary_0x1aeba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2348u; }
        else if (ctx->pc != 0x1E2348u) { ctx->pc = 0x1E2348u; }
    }
    if (ctx->pc != 0x1E2348u) { return; }
    ctx->pc = 0x1E2348u;
label_1e2348:
    // 0x1e2348: 0xc06bdfc
label_1e234c:
    if (ctx->pc == 0x1E234Cu) {
        ctx->pc = 0x1E234Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E2350u;
        goto label_1e2350;
    }
    ctx->pc = 0x1E2348u;
    SET_GPR_U32(ctx, 31, 0x1E2350u);
    ctx->pc = 0x1E234Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetVSyncFunc_0x1af7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2350u; }
        else if (ctx->pc != 0x1E2350u) { ctx->pc = 0x1E2350u; }
    }
    if (ctx->pc != 0x1E2350u) { return; }
    ctx->pc = 0x1E2350u;
label_1e2350:
    // 0x1e2350: 0x70002628
    ctx->pc = 0x1e2350u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e2354:
    // 0x1e2354: 0xc06bb90
label_1e2358:
    if (ctx->pc == 0x1E2358u) {
        ctx->pc = 0x1E2358u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E235Cu;
        goto label_1e235c;
    }
    ctx->pc = 0x1E2354u;
    SET_GPR_U32(ctx, 31, 0x1E235Cu);
    ctx->pc = 0x1E2358u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AEE40u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetDisplayOffset_0x1aee40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E235Cu; }
        else if (ctx->pc != 0x1E235Cu) { ctx->pc = 0x1E235Cu; }
    }
    if (ctx->pc != 0x1E235Cu) { return; }
    ctx->pc = 0x1E235Cu;
label_1e235c:
    // 0x1e235c: 0xc06c490
label_1e2360:
    if (ctx->pc == 0x1E2360u) {
        ctx->pc = 0x1E2364u;
        goto label_1e2364;
    }
    ctx->pc = 0x1E235Cu;
    SET_GPR_U32(ctx, 31, 0x1E2364u);
    ctx->pc = 0x1B1240u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGetDefaultRendEnv_0x1b1240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2364u; }
        else if (ctx->pc != 0x1E2364u) { ctx->pc = 0x1E2364u; }
    }
    if (ctx->pc != 0x1E2364u) { return; }
    ctx->pc = 0x1E2364u;
label_1e2364:
    // 0x1e2364: 0xa0400110
    ctx->pc = 0x1e2364u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 272), (uint8_t)GPR_U32(ctx, 0));
label_1e2368:
    // 0x1e2368: 0xa0400111
    ctx->pc = 0x1e2368u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 273), (uint8_t)GPR_U32(ctx, 0));
label_1e236c:
    // 0x1e236c: 0xa0400112
    ctx->pc = 0x1e236cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 274), (uint8_t)GPR_U32(ctx, 0));
label_1e2370:
    // 0x1e2370: 0xa0400200
    ctx->pc = 0x1e2370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 512), (uint8_t)GPR_U32(ctx, 0));
label_1e2374:
    // 0x1e2374: 0xa0400201
    ctx->pc = 0x1e2374u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 513), (uint8_t)GPR_U32(ctx, 0));
label_1e2378:
    // 0x1e2378: 0xa0400202
    ctx->pc = 0x1e2378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 514), (uint8_t)GPR_U32(ctx, 0));
label_1e237c:
    // 0x1e237c: 0x90460010
    ctx->pc = 0x1e237cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_1e2380:
    // 0x1e2380: 0x30030001
    ctx->pc = 0x1e2380u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 0), 1));
label_1e2384:
    // 0x1e2384: 0x32840
    ctx->pc = 0x1e2384u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 1));
label_1e2388:
    // 0x1e2388: 0x2404fffd
    ctx->pc = 0x1e2388u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967293));
label_1e238c:
    // 0x1e238c: 0x24500010
    ctx->pc = 0x1e238cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 16));
label_1e2390:
    // 0x1e2390: 0x70008e28
    ctx->pc = 0x1e2390u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e2394:
    // 0x1e2394: 0xc41824
    ctx->pc = 0x1e2394u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1e2398:
    // 0x1e2398: 0x651825
    ctx->pc = 0x1e2398u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e239c:
    // 0x1e239c: 0xa0430010
    ctx->pc = 0x1e239cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
label_1e23a0:
    // 0x1e23a0: 0x90430038
    ctx->pc = 0x1e23a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
label_1e23a4:
    // 0x1e23a4: 0x641824
    ctx->pc = 0x1e23a4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e23a8:
    // 0x1e23a8: 0x651825
    ctx->pc = 0x1e23a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e23ac:
    // 0x1e23ac: 0xa0430038
    ctx->pc = 0x1e23acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 3));
label_1e23b0:
    // 0x1e23b0: 0x70002628
    ctx->pc = 0x1e23b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e23b4:
    // 0x1e23b4: 0xc054de4
label_1e23b8:
    if (ctx->pc == 0x1E23B8u) {
        ctx->pc = 0x1E23B8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E23BCu;
        goto label_1e23bc;
    }
    ctx->pc = 0x1E23B4u;
    SET_GPR_U32(ctx, 31, 0x1E23BCu);
    ctx->pc = 0x1E23B8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x153790u;
    {
        PS2_INIT_LOG_ENTRY("sceGsSyncPath");
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x153790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E23BCu; }
        else if (ctx->pc != 0x1E23BCu) { ctx->pc = 0x1E23BCu; }
    }
    if (ctx->pc != 0x1E23BCu) { return; }
    ctx->pc = 0x1E23BCu;
label_1e23bc:
    // 0x1e23bc: 0xc06bdf0
label_1e23c0:
    if (ctx->pc == 0x1E23C0u) {
        ctx->pc = 0x1E23C4u;
        goto label_1e23c4;
    }
    ctx->pc = 0x1E23BCu;
    SET_GPR_U32(ctx, 31, 0x1E23C4u);
    ctx->pc = 0x1AF7C0u;
    {
        PS2_INIT_LOG_ENTRY("nlIncFrameCnt");
        const uint32_t __entryPc = ctx->pc;
        nlIncFrameCnt_0x1af7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E23C4u; }
        else if (ctx->pc != 0x1E23C4u) { ctx->pc = 0x1E23C4u; }
    }
    if (ctx->pc != 0x1E23C4u) { return; }
    ctx->pc = 0x1E23C4u;
label_1e23c4:
    // 0x1e23c4: 0xc06bdb0
label_1e23c8:
    if (ctx->pc == 0x1E23C8u) {
        ctx->pc = 0x1E23CCu;
        goto label_1e23cc;
    }
    ctx->pc = 0x1E23C4u;
    SET_GPR_U32(ctx, 31, 0x1E23CCu);
    ctx->pc = 0x1AF6C0u;
    {
        PS2_INIT_LOG_ENTRY("nlWaitVSync");
        const uint32_t __entryPc = ctx->pc;
        nlWaitVSync_0x1af6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E23CCu; }
        // Workaround: nlWaitVSync can return with wrong ctx->pc via indirect-call path; coerce to continue init
        if (ctx->pc != 0x1E23CCu) { ctx->pc = 0x1E23CCu; }
    }
    ctx->pc = 0x1E23CCu;
label_1e23cc:
    // 0x1e23cc: 0xc06bdc4
label_1e23d0:
    if (ctx->pc == 0x1E23D0u) {
        ctx->pc = 0x1E23D0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E23D4u;
        goto label_1e23d4;
    }
    ctx->pc = 0x1E23CCu;
    SET_GPR_U32(ctx, 31, 0x1E23D4u);
    ctx->pc = 0x1E23D0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF710u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlExecVint_0x1af710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E23D4u; }
        else if (ctx->pc != 0x1E23D4u) { ctx->pc = 0x1E23D4u; }
    }
    if (ctx->pc != 0x1E23D4u) { return; }
    ctx->pc = 0x1E23D4u;
label_1e23d4:
    // 0x1e23d4: 0x0
    ctx->pc = 0x1e23d4u;
    // NOP
label_1e23d8:
    // 0x1e23d8: 0x3c011001
    ctx->pc = 0x1e23d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1e23dc:
    // 0x1e23dc: 0x8c22a000
    ctx->pc = 0x1e23dcu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294942720))); // MMIO: 0x1000a000
label_1e23e0:
    // 0x1e23e0: 0x30420100
    ctx->pc = 0x1e23e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
label_1e23e4:
    // 0x1e23e4: 0x0
    ctx->pc = 0x1e23e4u;
    // NOP
label_1e23e8:
    // 0x1e23e8: 0x0
    ctx->pc = 0x1e23e8u;
    // NOP
label_1e23ec:
    // 0x1e23ec: 0x1440fffa
label_1e23f0:
    if (ctx->pc == 0x1E23F0u) {
        ctx->pc = 0x1E23F4u;
        goto label_1e23f4;
    }
    ctx->pc = 0x1E23ECu;
    {
        const bool branch_taken_0x1e23ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e23ec) {
            ctx->pc = 0x1E23D8u;
            goto label_1e23d8;
        }
    }
    ctx->pc = 0x1E23F4u;
label_1e23f4:
    // 0x1e23f4: 0x26310001
    ctx->pc = 0x1e23f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1e23f8:
    // 0x1e23f8: 0x2a220002
    ctx->pc = 0x1e23f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
label_1e23fc:
    // 0x1e23fc: 0x1440ffed
label_1e2400:
    if (ctx->pc == 0x1E2400u) {
        ctx->pc = 0x1E2400u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E2404u;
        goto label_1e2404;
    }
    ctx->pc = 0x1E23FCu;
    {
        const bool branch_taken_0x1e23fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E2400u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e23fc) {
            ctx->pc = 0x1E23B4u;
            goto label_1e23b4;
        }
    }
    ctx->pc = 0x1E2404u;
label_1e2404:
    // 0x1e2404: 0x92060000
    ctx->pc = 0x1e2404u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2408:
    // 0x1e2408: 0x3c02001f
    ctx->pc = 0x1e2408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)31 << 16));
label_1e240c:
    // 0x1e240c: 0x2403fffd
    ctx->pc = 0x1e240cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967293));
label_1e2410:
    // 0x1e2410: 0x24443130
    ctx->pc = 0x1e2410u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 12592));
label_1e2414:
    // 0x1e2414: 0x64050002
    ctx->pc = 0x1e2414u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)2);
label_1e2418:
    // 0x1e2418: 0xc31024
    ctx->pc = 0x1e2418u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1e241c:
    // 0x1e241c: 0x451025
    ctx->pc = 0x1e241cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e2420:
    // 0x1e2420: 0xa2020000
    ctx->pc = 0x1e2420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e2424:
    // 0x1e2424: 0x92020028
    ctx->pc = 0x1e2424u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_1e2428:
    // 0x1e2428: 0x431024
    ctx->pc = 0x1e2428u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e242c:
    // 0x1e242c: 0x451025
    ctx->pc = 0x1e242cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e2430:
    // 0x1e2430: 0xc06bdfc
label_1e2434:
    if (ctx->pc == 0x1E2434u) {
        ctx->pc = 0x1E2434u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1E2438u;
        goto label_1e2438;
    }
    ctx->pc = 0x1E2430u;
    SET_GPR_U32(ctx, 31, 0x1E2438u);
    ctx->pc = 0x1E2434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1AF7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetVSyncFunc_0x1af7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2438u; }
        else if (ctx->pc != 0x1E2438u) { ctx->pc = 0x1E2438u; }
    }
    if (ctx->pc != 0x1E2438u) { return; }
    ctx->pc = 0x1E2438u;
label_1e2438:
    // 0x1e2438: 0xc055c62
label_1e243c:
    if (ctx->pc == 0x1E243Cu) {
        ctx->pc = 0x1E243Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E2440u;
        goto label_1e2440;
    }
    ctx->pc = 0x1E2438u;
    SET_GPR_U32(ctx, 31, 0x1E2440u);
    ctx->pc = 0x1E243Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x157188u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x157188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2440u; }
        else if (ctx->pc != 0x1E2440u) { ctx->pc = 0x1E2440u; }
    }
    if (ctx->pc != 0x1E2440u) { return; }
    ctx->pc = 0x1E2440u;
label_1e2440:
    // 0x1e2440: 0xc0545a2
label_1e2444:
    if (ctx->pc == 0x1E2444u) {
        ctx->pc = 0x1E2444u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E2448u;
        goto label_1e2448;
    }
    ctx->pc = 0x1E2440u;
    SET_GPR_U32(ctx, 31, 0x1E2448u);
    ctx->pc = 0x1E2444u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x151688u;
    {
        PS2_INIT_LOG_ENTRY("sceCdInit");
        const uint32_t __entryPc = ctx->pc;
        sceCdInit_0x151688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2448u; }
        else if (ctx->pc != 0x1E2448u) { ctx->pc = 0x1E2448u; }
    }
    if (ctx->pc != 0x1E2448u) { return; }
    ctx->pc = 0x1E2448u;
label_1e2448:
    // 0x1e2448: 0xc0546d8
label_1e244c:
    if (ctx->pc == 0x1E244Cu) {
        ctx->pc = 0x1E244Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1E2450u;
        goto label_1e2450;
    }
    ctx->pc = 0x1E2448u;
    SET_GPR_U32(ctx, 31, 0x1E2450u);
    ctx->pc = 0x1E244Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x151B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdMmode_0x151b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2450u; }
        else if (ctx->pc != 0x1E2450u) { ctx->pc = 0x1E2450u; }
    }
    if (ctx->pc != 0x1E2450u) { return; }
    ctx->pc = 0x1E2450u;
label_1e2450:
    // 0x1e2450: 0x3c020027
    ctx->pc = 0x1e2450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1e2454:
    // 0x1e2454: 0xc057218
label_1e2458:
    if (ctx->pc == 0x1E2458u) {
        ctx->pc = 0x1E2458u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294940832));
        ctx->pc = 0x1E245Cu;
        goto label_1e245c;
    }
    ctx->pc = 0x1E2454u;
    SET_GPR_U32(ctx, 31, 0x1E245Cu);
    ctx->pc = 0x1E2458u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294940832));
    ctx->pc = 0x15C860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifRebootIop_0x15c860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E245Cu; }
        else if (ctx->pc != 0x1E245Cu) { ctx->pc = 0x1E245Cu; }
    }
    if (ctx->pc != 0x1E245Cu) { return; }
    ctx->pc = 0x1E245Cu;
label_1e245c:
    // 0x1e245c: 0x0
    ctx->pc = 0x1e245cu;
    // NOP
label_1e2460:
    // 0x1e2460: 0x0
    ctx->pc = 0x1e2460u;
    // NOP
label_1e2464:
    // 0x1e2464: 0x1040fffa
label_1e2468:
    if (ctx->pc == 0x1E2468u) {
        ctx->pc = 0x1E246Cu;
        goto label_1e246c;
    }
    ctx->pc = 0x1E2464u;
    {
        const bool branch_taken_0x1e2464 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e2464) {
            ctx->pc = 0x1E2450u;
            goto label_1e2450;
        }
    }
    ctx->pc = 0x1E246Cu;
label_1e246c:
    // 0x1e246c: 0x0
    ctx->pc = 0x1e246cu;
    // NOP
label_1e2470:
    // 0x1e2470: 0xc05720a
label_1e2474:
    if (ctx->pc == 0x1E2474u) {
        ctx->pc = 0x1E2478u;
        goto label_1e2478;
    }
    ctx->pc = 0x1E2470u;
    SET_GPR_U32(ctx, 31, 0x1E2478u);
    ctx->pc = 0x15C828u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSyncIop_0x15c828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2478u; }
        else if (ctx->pc != 0x1E2478u) { ctx->pc = 0x1E2478u; }
    }
    if (ctx->pc != 0x1E2478u) { return; }
    ctx->pc = 0x1E2478u;
label_1e2478:
    // 0x1e2478: 0x0
    ctx->pc = 0x1e2478u;
    // NOP
label_1e247c:
    // 0x1e247c: 0x0
    ctx->pc = 0x1e247cu;
    // NOP
label_1e2480:
    // 0x1e2480: 0x0
    ctx->pc = 0x1e2480u;
    // NOP
label_1e2484:
    // 0x1e2484: 0x0
    ctx->pc = 0x1e2484u;
    // NOP
label_1e2488:
    // 0x1e2488: 0x1040fff9
label_1e248c:
    if (ctx->pc == 0x1E248Cu) {
        ctx->pc = 0x1E2490u;
        goto label_1e2490;
    }
    ctx->pc = 0x1E2488u;
    {
        const bool branch_taken_0x1e2488 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e2488) {
            ctx->pc = 0x1E2470u;
            goto label_1e2470;
        }
    }
    ctx->pc = 0x1E2490u;
label_1e2490:
    // 0x1e2490: 0xc055c62
label_1e2494:
    if (ctx->pc == 0x1E2494u) {
        ctx->pc = 0x1E2494u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E2498u;
        goto label_1e2498;
    }
    ctx->pc = 0x1E2490u;
    SET_GPR_U32(ctx, 31, 0x1E2498u);
    ctx->pc = 0x1E2494u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x157188u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x157188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2498u; }
        else if (ctx->pc != 0x1E2498u) { ctx->pc = 0x1E2498u; }
    }
    if (ctx->pc != 0x1E2498u) { return; }
    ctx->pc = 0x1E2498u;
label_1e2498:
    // 0x1e2498: 0xc0545a2
label_1e249c:
    if (ctx->pc == 0x1E249Cu) {
        ctx->pc = 0x1E249Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E24A0u;
        goto label_1e24a0;
    }
    ctx->pc = 0x1E2498u;
    SET_GPR_U32(ctx, 31, 0x1E24A0u);
    ctx->pc = 0x1E249Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x151688u;
    {
        PS2_INIT_LOG_ENTRY("sceCdInit");
        const uint32_t __entryPc = ctx->pc;
        sceCdInit_0x151688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24A0u; }
        else if (ctx->pc != 0x1E24A0u) { ctx->pc = 0x1E24A0u; }
    }
    if (ctx->pc != 0x1E24A0u) { return; }
    ctx->pc = 0x1E24A0u;
label_1e24a0:
    // 0x1e24a0: 0xc0546d8
label_1e24a4:
    if (ctx->pc == 0x1E24A4u) {
        ctx->pc = 0x1E24A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1E24A8u;
        goto label_1e24a8;
    }
    ctx->pc = 0x1E24A0u;
    SET_GPR_U32(ctx, 31, 0x1E24A8u);
    ctx->pc = 0x1E24A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x151B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdMmode_0x151b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24A8u; }
        else if (ctx->pc != 0x1E24A8u) { ctx->pc = 0x1E24A8u; }
    }
    if (ctx->pc != 0x1E24A8u) { return; }
    ctx->pc = 0x1E24A8u;
label_1e24a8:
    // 0x1e24a8: 0xc056230
label_1e24ac:
    if (ctx->pc == 0x1E24ACu) {
        ctx->pc = 0x1E24B0u;
        goto label_1e24b0;
    }
    ctx->pc = 0x1E24A8u;
    SET_GPR_U32(ctx, 31, 0x1E24B0u);
    ctx->pc = 0x1588C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceFsReset_0x1588c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24B0u; }
        else if (ctx->pc != 0x1E24B0u) { ctx->pc = 0x1E24B0u; }
    }
    if (ctx->pc != 0x1E24B0u) { return; }
    ctx->pc = 0x1E24B0u;
label_1e24b0:
    // 0x1e24b0: 0xc056d98
label_1e24b4:
    if (ctx->pc == 0x1E24B4u) {
        ctx->pc = 0x1E24B8u;
        goto label_1e24b8;
    }
    ctx->pc = 0x1E24B0u;
    SET_GPR_U32(ctx, 31, 0x1E24B8u);
    ctx->pc = 0x15B660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x15b660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24B8u; }
        else if (ctx->pc != 0x1E24B8u) { ctx->pc = 0x1E24B8u; }
    }
    if (ctx->pc != 0x1E24B8u) { return; }
    ctx->pc = 0x1E24B8u;
label_1e24b8:
    // 0x1e24b8: 0x4410003
label_1e24bc:
    if (ctx->pc == 0x1E24BCu) {
        ctx->pc = 0x1E24C0u;
        goto label_1e24c0;
    }
    ctx->pc = 0x1E24B8u;
    {
        const bool branch_taken_0x1e24b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e24b8) {
            ctx->pc = 0x1E24C8u;
            goto label_1e24c8;
        }
    }
    ctx->pc = 0x1E24C0u;
label_1e24c0:
    // 0x1e24c0: 0x1000ffff
label_1e24c4:
    if (ctx->pc == 0x1E24C4u) {
        ctx->pc = 0x1E24C8u;
        goto label_1e24c8;
    }
    ctx->pc = 0x1E24C0u;
    {
        const bool branch_taken_0x1e24c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e24c0) {
            ctx->pc = 0x1E24C0u;
            goto label_1e24c0;
        }
    }
    ctx->pc = 0x1E24C8u;
label_1e24c8:
    // 0x1e24c8: 0x3c020027
    ctx->pc = 0x1e24c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1e24cc:
    // 0x1e24cc: 0x244498c0
    ctx->pc = 0x1e24ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294940864));
label_1e24d0:
    // 0x1e24d0: 0x70002e28
    ctx->pc = 0x1e24d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e24d4:
    // 0x1e24d4: 0xc0570d8
label_1e24d8:
    if (ctx->pc == 0x1E24D8u) {
        ctx->pc = 0x1E24D8u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E24DCu;
        goto label_1e24dc;
    }
    ctx->pc = 0x1E24D4u;
    SET_GPR_U32(ctx, 31, 0x1E24DCu);
    ctx->pc = 0x1E24D8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x15C360u;
    {
        PS2_INIT_LOG_ENTRY("sceSifLoadModule");
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x15c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24DCu; }
        else if (ctx->pc != 0x1E24DCu) { ctx->pc = 0x1E24DCu; }
    }
    if (ctx->pc != 0x1E24DCu) { return; }
    ctx->pc = 0x1E24DCu;
label_1e24dc:
    // 0x1e24dc: 0x4410006
label_1e24e0:
    if (ctx->pc == 0x1E24E0u) {
        ctx->pc = 0x1E24E4u;
        goto label_1e24e4;
    }
    ctx->pc = 0x1E24DCu;
    {
        const bool branch_taken_0x1e24dc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e24dc) {
            ctx->pc = 0x1E24F8u;
            goto label_1e24f8;
        }
    }
    ctx->pc = 0x1E24E4u;
label_1e24e4:
    // 0x1e24e4: 0x3c020027
    ctx->pc = 0x1e24e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1e24e8:
    // 0x1e24e8: 0xc05114a
label_1e24ec:
    if (ctx->pc == 0x1E24ECu) {
        ctx->pc = 0x1E24ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294940896));
        ctx->pc = 0x1E24F0u;
        goto label_1e24f0;
    }
    ctx->pc = 0x1E24E8u;
    SET_GPR_U32(ctx, 31, 0x1E24F0u);
    ctx->pc = 0x1E24ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294940896));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24F0u; }
        else if (ctx->pc != 0x1E24F0u) { ctx->pc = 0x1E24F0u; }
    }
    if (ctx->pc != 0x1E24F0u) { return; }
    ctx->pc = 0x1E24F0u;
label_1e24f0:
    // 0x1e24f0: 0xc05058e
label_1e24f4:
    if (ctx->pc == 0x1E24F4u) {
        ctx->pc = 0x1E24F4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E24F8u;
        goto label_1e24f8;
    }
    ctx->pc = 0x1E24F0u;
    SET_GPR_U32(ctx, 31, 0x1E24F8u);
    ctx->pc = 0x1E24F4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x141638u;
    {
        const uint32_t __entryPc = ctx->pc;
        exit_0x141638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24F8u; }
        else if (ctx->pc != 0x1E24F8u) { ctx->pc = 0x1E24F8u; }
    }
    if (ctx->pc != 0x1E24F8u) { return; }
    ctx->pc = 0x1E24F8u;
label_1e24f8:
    // 0x1e24f8: 0x3c020027
    ctx->pc = 0x1e24f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1e24fc:
    // 0x1e24fc: 0x24449900
    ctx->pc = 0x1e24fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294940928));
label_1e2500:
    // 0x1e2500: 0x70002e28
    ctx->pc = 0x1e2500u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e2504:
    // 0x1e2504: 0xc0570d8
label_1e2508:
    if (ctx->pc == 0x1E2508u) {
        ctx->pc = 0x1E2508u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E250Cu;
        goto label_1e250c;
    }
    ctx->pc = 0x1E2504u;
    SET_GPR_U32(ctx, 31, 0x1E250Cu);
    ctx->pc = 0x1E2508u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x15C360u;
    {
        PS2_INIT_LOG_ENTRY("sceSifLoadModule");
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x15c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E250Cu; }
        else if (ctx->pc != 0x1E250Cu) { ctx->pc = 0x1E250Cu; }
    }
    if (ctx->pc != 0x1E250Cu) { return; }
    ctx->pc = 0x1E250Cu;
label_1e250c:
    // 0x1e250c: 0x4410006
label_1e2510:
    if (ctx->pc == 0x1E2510u) {
        ctx->pc = 0x1E2514u;
        goto label_1e2514;
    }
    ctx->pc = 0x1E250Cu;
    {
        const bool branch_taken_0x1e250c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e250c) {
            ctx->pc = 0x1E2528u;
            goto label_1e2528;
        }
    }
    ctx->pc = 0x1E2514u;
label_1e2514:
    // 0x1e2514: 0x3c020027
    ctx->pc = 0x1e2514u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1e2518:
    // 0x1e2518: 0xc05114a
label_1e251c:
    if (ctx->pc == 0x1E251Cu) {
        ctx->pc = 0x1E251Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294940960));
        ctx->pc = 0x1E2520u;
        goto label_1e2520;
    }
    ctx->pc = 0x1E2518u;
    SET_GPR_U32(ctx, 31, 0x1E2520u);
    ctx->pc = 0x1E251Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294940960));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2520u; }
        else if (ctx->pc != 0x1E2520u) { ctx->pc = 0x1E2520u; }
    }
    if (ctx->pc != 0x1E2520u) { return; }
    ctx->pc = 0x1E2520u;
label_1e2520:
    // 0x1e2520: 0xc05058e
label_1e2524:
    if (ctx->pc == 0x1E2524u) {
        ctx->pc = 0x1E2524u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E2528u;
        goto label_1e2528;
    }
    ctx->pc = 0x1E2520u;
    SET_GPR_U32(ctx, 31, 0x1E2528u);
    ctx->pc = 0x1E2524u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x141638u;
    {
        const uint32_t __entryPc = ctx->pc;
        exit_0x141638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2528u; }
        else if (ctx->pc != 0x1E2528u) { ctx->pc = 0x1E2528u; }
    }
    if (ctx->pc != 0x1E2528u) { return; }
    ctx->pc = 0x1E2528u;
label_1e2528:
    // 0x1e2528: 0x3c020027
    ctx->pc = 0x1e2528u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1e252c:
    // 0x1e252c: 0x24449940
    ctx->pc = 0x1e252cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294940992));
label_1e2530:
    // 0x1e2530: 0x70002e28
    ctx->pc = 0x1e2530u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e2534:
    // 0x1e2534: 0xc0570d8
label_1e2538:
    if (ctx->pc == 0x1E2538u) {
        ctx->pc = 0x1E2538u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E253Cu;
        goto label_1e253c;
    }
    ctx->pc = 0x1E2534u;
    SET_GPR_U32(ctx, 31, 0x1E253Cu);
    ctx->pc = 0x1E2538u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x15C360u;
    {
        PS2_INIT_LOG_ENTRY("sceSifLoadModule");
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x15c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E253Cu; }
        else if (ctx->pc != 0x1E253Cu) { ctx->pc = 0x1E253Cu; }
    }
    if (ctx->pc != 0x1E253Cu) { return; }
    ctx->pc = 0x1E253Cu;
label_1e253c:
    // 0x1e253c: 0x4410006
label_1e2540:
    if (ctx->pc == 0x1E2540u) {
        ctx->pc = 0x1E2544u;
        goto label_1e2544;
    }
    ctx->pc = 0x1E253Cu;
    {
        const bool branch_taken_0x1e253c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e253c) {
            ctx->pc = 0x1E2558u;
            goto label_1e2558;
        }
    }
    ctx->pc = 0x1E2544u;
label_1e2544:
    // 0x1e2544: 0x3c020027
    ctx->pc = 0x1e2544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1e2548:
    // 0x1e2548: 0xc05114a
label_1e254c:
    if (ctx->pc == 0x1E254Cu) {
        ctx->pc = 0x1E254Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294941024));
        ctx->pc = 0x1E2550u;
        goto label_1e2550;
    }
    ctx->pc = 0x1E2548u;
    SET_GPR_U32(ctx, 31, 0x1E2550u);
    ctx->pc = 0x1E254Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294941024));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2550u; }
        else if (ctx->pc != 0x1E2550u) { ctx->pc = 0x1E2550u; }
    }
    if (ctx->pc != 0x1E2550u) { return; }
    ctx->pc = 0x1E2550u;
label_1e2550:
    // 0x1e2550: 0xc05058e
label_1e2554:
    if (ctx->pc == 0x1E2554u) {
        ctx->pc = 0x1E2554u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E2558u;
        goto label_1e2558;
    }
    ctx->pc = 0x1E2550u;
    SET_GPR_U32(ctx, 31, 0x1E2558u);
    ctx->pc = 0x1E2554u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x141638u;
    {
        const uint32_t __entryPc = ctx->pc;
        exit_0x141638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2558u; }
        else if (ctx->pc != 0x1E2558u) { ctx->pc = 0x1E2558u; }
    }
    if (ctx->pc != 0x1E2558u) { return; }
    ctx->pc = 0x1E2558u;
label_1e2558:
    // 0x1e2558: 0x3c020050
    ctx->pc = 0x1e2558u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1e255c:
    // 0x1e255c: 0xc074d98
label_1e2560:
    if (ctx->pc == 0x1E2560u) {
        ctx->pc = 0x1E2560u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
        ctx->pc = 0x1E2564u;
        goto label_1e2564;
    }
    ctx->pc = 0x1E255Cu;
    SET_GPR_U32(ctx, 31, 0x1E2564u);
    ctx->pc = 0x1E2560u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D3660u;
    {
        const uint32_t __entryPc = ctx->pc;
        init2__14SysCfgMgrClassFv_0x1d3660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2564u; }
        else if (ctx->pc != 0x1E2564u) { ctx->pc = 0x1E2564u; }
    }
    if (ctx->pc != 0x1E2564u) { return; }
    ctx->pc = 0x1E2564u;
label_1e2564:
    // 0x1e2564: 0x3c020030
    ctx->pc = 0x1e2564u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
label_1e2568:
    // 0x1e2568: 0x24427cb0
    ctx->pc = 0x1e2568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31920));
label_1e256c:
    // 0x1e256c: 0x2443003f
    ctx->pc = 0x1e256cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 63));
label_1e2570:
    // 0x1e2570: 0x2402ffc0
    ctx->pc = 0x1e2570u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
label_1e2574:
    // 0x1e2574: 0x621024
    ctx->pc = 0x1e2574u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e2578:
    // 0x1e2578: 0xaf828cf8
    ctx->pc = 0x1e2578u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 2));
label_1e257c:
    // 0x1e257c: 0x3c020051
    ctx->pc = 0x1e257cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1e2580:
    // 0x1e2580: 0xc085d30
label_1e2584:
    if (ctx->pc == 0x1E2584u) {
        ctx->pc = 0x1E2584u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
        ctx->pc = 0x1E2588u;
        goto label_1e2588;
    }
    ctx->pc = 0x1E2580u;
    SET_GPR_U32(ctx, 31, 0x1E2588u);
    ctx->pc = 0x1E2584u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x2174C0u;
    {
        PS2_INIT_LOG_ENTRY("init1st_SoundMgr");
        const uint32_t __entryPc = ctx->pc;
        init1st__13SoundMgrClassFv_0x2174c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2588u; }
        else if (ctx->pc != 0x1E2588u) { ctx->pc = 0x1E2588u; }
    }
    if (ctx->pc != 0x1E2588u) { return; }
    ctx->pc = 0x1E2588u;
label_1e2588:
    // 0x1e2588: 0x3c020050
    ctx->pc = 0x1e2588u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1e258c:
    // 0x1e258c: 0xc07a4e4
label_1e2590:
    if (ctx->pc == 0x1E2590u) {
        ctx->pc = 0x1E2590u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
        ctx->pc = 0x1E2594u;
        goto label_1e2594;
    }
    ctx->pc = 0x1E258Cu;
    SET_GPR_U32(ctx, 31, 0x1E2594u);
    ctx->pc = 0x1E2590u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
    ctx->pc = 0x1E9390u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__12FileMgrClassFv_0x1e9390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2594u; }
        else if (ctx->pc != 0x1E2594u) { ctx->pc = 0x1E2594u; }
    }
    if (ctx->pc != 0x1E2594u) { return; }
    ctx->pc = 0x1E2594u;
label_1e2594:
    // 0x1e2594: 0x3c020051
    ctx->pc = 0x1e2594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1e2598:
    // 0x1e2598: 0xc085d7c
label_1e259c:
    if (ctx->pc == 0x1E259Cu) {
        ctx->pc = 0x1E259Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
        ctx->pc = 0x1E25A0u;
        goto label_1e25a0;
    }
    ctx->pc = 0x1E2598u;
    SET_GPR_U32(ctx, 31, 0x1E25A0u);
    ctx->pc = 0x1E259Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x2175F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init1st15__13SoundMgrClassFv_0x2175f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E25A0u; }
        else if (ctx->pc != 0x1E25A0u) { ctx->pc = 0x1E25A0u; }
    }
    if (ctx->pc != 0x1E25A0u) { return; }
    ctx->pc = 0x1E25A0u;
label_1e25a0:
    // 0x1e25a0: 0x3c020050
    ctx->pc = 0x1e25a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1e25a4:
    // 0x1e25a4: 0xc07a51c
label_1e25a8:
    if (ctx->pc == 0x1E25A8u) {
        ctx->pc = 0x1E25A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
        ctx->pc = 0x1E25ACu;
        goto label_1e25ac;
    }
    ctx->pc = 0x1E25A4u;
    SET_GPR_U32(ctx, 31, 0x1E25ACu);
    ctx->pc = 0x1E25A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
    ctx->pc = 0x1E9470u;
    std::cerr << "[PowerOnInit] before init2\n";
    {
        const uint32_t __entryPc = ctx->pc;
        init2__12FileMgrClassFv_0x1e9470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E25ACu; }
        else if (ctx->pc != 0x1E25ACu) { ctx->pc = 0x1E25ACu; }
    }
    if (ctx->pc != 0x1E25ACu) { return; }
    std::cerr << "[PowerOnInit] after init2\n";
    ctx->pc = 0x1E25ACu;
label_1e25ac:
    // 0x1e25ac: 0x3c020051
    ctx->pc = 0x1e25acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1e25b0:
    // 0x1e25b0: 0xc085b54
label_1e25b4:
    if (ctx->pc == 0x1E25B4u) {
        ctx->pc = 0x1E25B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13536));
        ctx->pc = 0x1E25B8u;
        goto label_1e25b8;
    }
    ctx->pc = 0x1E25B0u;
    SET_GPR_U32(ctx, 31, 0x1E25B8u);
    ctx->pc = 0x1E25B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13536));
    ctx->pc = 0x216D50u;
    uint32_t poweroninit_gp = GPR_U32(ctx, 28);
    {
        PS2_INIT_LOG_ENTRY("init1st_SofdecMgr");
        ps2_init_log::log_ctx(ctx, "before init1st Sofdec");
        const uint32_t __entryPc = ctx->pc;
        init1st__14SofdecMgrClassFv_0x216d50(rdram, ctx, runtime);
        SET_GPR_U32(ctx, 28, poweroninit_gp);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E25B8u; }
        else if (ctx->pc != 0x1E25B8u) { ctx->pc = 0x1E25B8u; }
    }
    ps2_init_log::log_ctx(ctx, "after init1st Sofdec");
    if (ctx->pc != 0x1E25B8u) { return; }
    ctx->pc = 0x1E25B8u;
label_1e25b8:
    // 0x1e25b8: 0x24020001
    ctx->pc = 0x1e25b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1e25bc:
    // 0x1e25bc: 0xaf828d08 - use poweroninit_gp in case ctx r28 was corrupted by init1st
    ctx->pc = 0x1e25bcu;
    ps2_init_log::log_write32(ADD32(poweroninit_gp, 4294937864), GPR_U32(ctx, 2), "0x1e25bc");
    WRITE32(ADD32(poweroninit_gp, 4294937864), GPR_U32(ctx, 2));
    SET_GPR_U32(ctx, 28, poweroninit_gp);
label_1e25c0:
    // 0x1e25c0: 0x3c020051
    ctx->pc = 0x1e25c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1e25c4:
    // 0x1e25c4: 0xc080768
label_1e25c8:
    if (ctx->pc == 0x1E25C8u) {
        ctx->pc = 0x1E25C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13360));
        ctx->pc = 0x1E25CCu;
        goto label_1e25cc;
    }
    ctx->pc = 0x1E25C4u;
    SET_GPR_U32(ctx, 31, 0x1E25CCu);
    ctx->pc = 0x1E25C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13360));
    ctx->pc = 0x201DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__15OverlayMgrClassFv_0x201da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E25CCu; }
        else if (ctx->pc != 0x1E25CCu) { ctx->pc = 0x1E25CCu; }
    }
    if (ctx->pc != 0x1E25CCu) { return; }
    ctx->pc = 0x1E25CCu;
label_1e25cc:
    // 0x1e25cc: 0x3c020051
    ctx->pc = 0x1e25ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1e25d0:
    // 0x1e25d0: 0xc086348
label_1e25d4:
    if (ctx->pc == 0x1E25D4u) {
        ctx->pc = 0x1E25D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
        ctx->pc = 0x1E25D8u;
        goto label_1e25d8;
    }
    ctx->pc = 0x1E25D0u;
    SET_GPR_U32(ctx, 31, 0x1E25D8u);
    ctx->pc = 0x1E25D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__13EntryDatClassFv_0x218d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E25D8u; }
        else if (ctx->pc != 0x1E25D8u) { ctx->pc = 0x1E25D8u; }
    }
    if (ctx->pc != 0x1E25D8u) { return; }
    ctx->pc = 0x1E25D8u;
label_1e25d8:
    // 0x1e25d8: 0xaf808c48
    ctx->pc = 0x1e25d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), GPR_U32(ctx, 0));
label_1e25dc:
    // 0x1e25dc: 0xc07cb28
label_1e25e0:
    if (ctx->pc == 0x1E25E0u) {
        ctx->pc = 0x1E25E0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937816), GPR_U32(ctx, 0));
        ctx->pc = 0x1E25E4u;
        goto label_1e25e4;
    }
    ctx->pc = 0x1E25DCu;
    SET_GPR_U32(ctx, 31, 0x1E25E4u);
    ctx->pc = 0x1E25E0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937816), GPR_U32(ctx, 0));
    ctx->pc = 0x1F2CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_TrialDemo__Fv_0x1f2ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E25E4u; }
        else if (ctx->pc != 0x1E25E4u) { ctx->pc = 0x1E25E4u; }
    }
    if (ctx->pc != 0x1E25E4u) { return; }
    ctx->pc = 0x1E25E4u;
label_1e25e4:
    // 0x1e25e4: 0x10400003
label_1e25e8:
    if (ctx->pc == 0x1E25E8u) {
        ctx->pc = 0x1E25E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1E25ECu;
        goto label_1e25ec;
    }
    ctx->pc = 0x1E25E4u;
    {
        const bool branch_taken_0x1e25e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E25E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1e25e4) {
            ctx->pc = 0x1E25F4u;
            goto label_1e25f4;
        }
    }
    ctx->pc = 0x1E25ECu;
label_1e25ec:
    // 0x1e25ec: 0x10000002
label_1e25f0:
    if (ctx->pc == 0x1E25F0u) {
        ctx->pc = 0x1E25F0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 0));
        ctx->pc = 0x1E25F4u;
        goto label_1e25f4;
    }
    ctx->pc = 0x1E25ECu;
    {
        const bool branch_taken_0x1e25ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E25F0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 0));
        if (branch_taken_0x1e25ec) {
            ctx->pc = 0x1E25F8u;
            goto label_1e25f8;
        }
    }
    ctx->pc = 0x1E25F4u;
label_1e25f4:
    // 0x1e25f4: 0xaf828cb0
    ctx->pc = 0x1e25f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1e25f8:
    // 0x1e25f8: 0x3c020050
    ctx->pc = 0x1e25f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1e25fc:
    // 0x1e25fc: 0xaf808b7c
    ctx->pc = 0x1e25fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937468), GPR_U32(ctx, 0));
label_1e2600:
    // 0x1e2600: 0x24440b40
    ctx->pc = 0x1e2600u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
label_1e2604:
    // 0x1e2604: 0x70002e28
    ctx->pc = 0x1e2604u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e2608:
    // 0x1e2608: 0x2406ffff
    ctx->pc = 0x1e2608u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e260c:
    // 0x1e260c: 0xc07a66c
label_1e2610:
    if (ctx->pc == 0x1E2610u) {
        ctx->pc = 0x1E2610u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937464), GPR_U32(ctx, 0));
        ctx->pc = 0x1E2614u;
        goto label_1e2614;
    }
    ctx->pc = 0x1E260Cu;
    SET_GPR_U32(ctx, 31, 0x1E2614u);
    ctx->pc = 0x1E2610u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937464), GPR_U32(ctx, 0));
    ctx->pc = 0x1E99B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        closeAll__12FileMgrClassFii_0x1e99b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2614u; }
        else if (ctx->pc != 0x1E2614u) { ctx->pc = 0x1E2614u; }
    }
    if (ctx->pc != 0x1E2614u) { return; }
    ctx->pc = 0x1E2614u;
label_1e2614:
    // 0x1e2614: 0x3c020050
    ctx->pc = 0x1e2614u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1e2618:
    // 0x1e2618: 0xc086918
label_1e261c:
    if (ctx->pc == 0x1E261Cu) {
        ctx->pc = 0x1E261Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
        ctx->pc = 0x1E2620u;
        goto label_1e2620;
    }
    ctx->pc = 0x1E2618u;
    SET_GPR_U32(ctx, 31, 0x1E2620u);
    ctx->pc = 0x1E261Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    ctx->pc = 0x21A460u;
    {
        PS2_INIT_LOG_ENTRY("init1st_TexMgr");
        const uint32_t __entryPc = ctx->pc;
        init1st__11TexMgrClassFv_0x21a460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2620u; }
        else if (ctx->pc != 0x1E2620u) { ctx->pc = 0x1E2620u; }
    }
    if (ctx->pc != 0x1E2620u) { return; }
    ctx->pc = 0x1E2620u;
label_1e2620:
    // 0x1e2620: 0xc084f78
label_1e2624:
    if (ctx->pc == 0x1E2624u) {
        ctx->pc = 0x1E2624u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937676));
        ctx->pc = 0x1E2628u;
        goto label_1e2628;
    }
    ctx->pc = 0x1E2620u;
    SET_GPR_U32(ctx, 31, 0x1E2628u);
    ctx->pc = 0x1E2624u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937676));
    ctx->pc = 0x213DE0u;
    {
        PS2_INIT_LOG_ENTRY("init1st_PolyMgr");
        const uint32_t __entryPc = ctx->pc;
        init1st__12PolyMgrClassFv_0x213de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2628u; }
        else if (ctx->pc != 0x1E2628u) { ctx->pc = 0x1E2628u; }
    }
    if (ctx->pc != 0x1E2628u) { return; }
    ctx->pc = 0x1E2628u;
label_1e2628:
    // 0x1e2628: 0x3c020050
    ctx->pc = 0x1e2628u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1e262c:
    // 0x1e262c: 0x2444e540
    ctx->pc = 0x1e262cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
label_1e2630:
    // 0x1e2630: 0x3c020020
    ctx->pc = 0x1e2630u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
label_1e2634:
    // 0x1e2634: 0x3c05001e
    ctx->pc = 0x1e2634u;
    SET_GPR_U32(ctx, 5, ((uint32_t)30 << 16));
label_1e2638:
    // 0x1e2638: 0xc086988
label_1e263c:
    if (ctx->pc == 0x1E263Cu) {
        ctx->pc = 0x1E263Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 28416));
        ctx->pc = 0x1E2640u;
        goto label_1e2640;
    }
    ctx->pc = 0x1E2638u;
    SET_GPR_U32(ctx, 31, 0x1E2640u);
    ctx->pc = 0x1E263Cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 28416));
    ctx->pc = 0x21A620u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__11TexMgrClassFii_0x21a620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2640u; }
        else if (ctx->pc != 0x1E2640u) { ctx->pc = 0x1E2640u; }
    }
    if (ctx->pc != 0x1E2640u) { return; }
    ctx->pc = 0x1E2640u;
label_1e2640:
    // 0x1e2640: 0x3c020051
    ctx->pc = 0x1e2640u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1e2644:
    // 0x1e2644: 0x24443450
    ctx->pc = 0x1e2644u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13392));
label_1e2648:
    // 0x1e2648: 0x3c02003e
    ctx->pc = 0x1e2648u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
label_1e264c:
    // 0x1e264c: 0x34456f00
    ctx->pc = 0x1e264cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 28416));
label_1e2650:
    // 0x1e2650: 0x3c020001
    ctx->pc = 0x1e2650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_1e2654:
    // 0x1e2654: 0x34467100
    ctx->pc = 0x1e2654u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 28928));
label_1e2658:
    // 0x1e2658: 0xc080ec0
label_1e265c:
    if (ctx->pc == 0x1E265Cu) {
        ctx->pc = 0x1E265Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x1E2660u;
        goto label_1e2660;
    }
    ctx->pc = 0x1E2658u;
    SET_GPR_U32(ctx, 31, 0x1E2660u);
    ctx->pc = 0x1E265Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x203B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__11PalMgrClassFiii_0x203b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2660u; }
        else if (ctx->pc != 0x1E2660u) { ctx->pc = 0x1E2660u; }
    }
    if (ctx->pc != 0x1E2660u) { return; }
    ctx->pc = 0x1E2660u;
label_1e2660:
    // 0x1e2660: 0xa3808b10
    ctx->pc = 0x1e2660u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937360), (uint8_t)GPR_U32(ctx, 0));
label_1e2664:
    // 0x1e2664: 0xa3808b11
    ctx->pc = 0x1e2664u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937361), (uint8_t)GPR_U32(ctx, 0));
label_1e2668:
    // 0x1e2668: 0xa3808b12
    ctx->pc = 0x1e2668u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937362), (uint8_t)GPR_U32(ctx, 0));
label_1e266c:
    // 0x1e266c: 0xa3808b13
    ctx->pc = 0x1e266cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937363), (uint8_t)GPR_U32(ctx, 0));
label_1e2670:
    // 0x1e2670: 0xa3808b14
    ctx->pc = 0x1e2670u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937364), (uint8_t)GPR_U32(ctx, 0));
label_1e2674:
    // 0x1e2674: 0x24040002
    ctx->pc = 0x1e2674u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1e2678:
    // 0x1e2678: 0x70002e28
    ctx->pc = 0x1e2678u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e267c:
    // 0x1e267c: 0xc078a50
label_1e2680:
    if (ctx->pc == 0x1E2680u) {
        ctx->pc = 0x1E2680u;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937365), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1E2684u;
        goto label_1e2684;
    }
    ctx->pc = 0x1E267Cu;
    SET_GPR_U32(ctx, 31, 0x1E2684u);
    ctx->pc = 0x1E2680u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937365), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1E2940u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadRomData__Fii_0x1e2940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2684u; }
        else if (ctx->pc != 0x1E2684u) { ctx->pc = 0x1E2684u; }
    }
    if (ctx->pc != 0x1E2684u) { return; }
    ctx->pc = 0x1E2684u;
label_1e2684:
    // 0x1e2684: 0x1040000a
label_1e2688:
    if (ctx->pc == 0x1E2688u) {
        ctx->pc = 0x1E2688u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E268Cu;
        goto label_1e268c;
    }
    ctx->pc = 0x1E2684u;
    {
        const bool branch_taken_0x1e2684 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E2688u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e2684) {
            ctx->pc = 0x1E26B0u;
            goto label_1e26b0;
        }
    }
    ctx->pc = 0x1E268Cu;
label_1e268c:
    // 0x1e268c: 0xc07a720
label_1e2690:
    if (ctx->pc == 0x1E2690u) {
        ctx->pc = 0x1E2694u;
        goto label_1e2694;
    }
    ctx->pc = 0x1E268Cu;
    SET_GPR_U32(ctx, 31, 0x1E2694u);
    ctx->pc = 0x1E9C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXPS2_UpdateStatus__Fv_0x1e9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2694u; }
        else if (ctx->pc != 0x1E2694u) { ctx->pc = 0x1E2694u; }
    }
    if (ctx->pc != 0x1E2694u) { return; }
    ctx->pc = 0x1E2694u;
label_1e2694:
    // 0x1e2694: 0x72002e28
    ctx->pc = 0x1e2694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1e2698:
    // 0x1e2698: 0xc078a50
label_1e269c:
    if (ctx->pc == 0x1E269Cu) {
        ctx->pc = 0x1E269Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1E26A0u;
        goto label_1e26a0;
    }
    ctx->pc = 0x1E2698u;
    SET_GPR_U32(ctx, 31, 0x1E26A0u);
    ctx->pc = 0x1E269Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1E2940u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadRomData__Fii_0x1e2940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26A0u; }
        else if (ctx->pc != 0x1E26A0u) { ctx->pc = 0x1E26A0u; }
    }
    if (ctx->pc != 0x1E26A0u) { return; }
    ctx->pc = 0x1E26A0u;
label_1e26a0:
    // 0x1e26a0: 0x70408628
    ctx->pc = 0x1e26a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e26a4:
    // 0x1e26a4: 0x1440fff9
label_1e26a8:
    if (ctx->pc == 0x1E26A8u) {
        ctx->pc = 0x1E26ACu;
        goto label_1e26ac;
    }
    ctx->pc = 0x1E26A4u;
    {
        const bool branch_taken_0x1e26a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e26a4) {
            ctx->pc = 0x1E268Cu;
            goto label_1e268c;
        }
    }
    ctx->pc = 0x1E26ACu;
label_1e26ac:
    // 0x1e26ac: 0x0
    ctx->pc = 0x1e26acu;
    // NOP
label_1e26b0:
    // 0x1e26b0: 0x24020001
    ctx->pc = 0x1e26b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1e26b4:
    // 0x1e26b4: 0xa3828b12
    ctx->pc = 0x1e26b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937362), (uint8_t)GPR_U32(ctx, 2));
label_1e26b8:
    // 0x1e26b8: 0xa3828b15
    ctx->pc = 0x1e26b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937365), (uint8_t)GPR_U32(ctx, 2));
label_1e26bc:
    // 0x1e26bc: 0xc085c20
label_1e26c0:
    if (ctx->pc == 0x1E26C0u) {
        ctx->pc = 0x1E26C0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937416));
        ctx->pc = 0x1E26C4u;
        goto label_1e26c4;
    }
    ctx->pc = 0x1E26BCu;
    SET_GPR_U32(ctx, 31, 0x1E26C4u);
    ctx->pc = 0x1E26C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937416));
    ctx->pc = 0x217080u;
    {
        const uint32_t __entryPc = ctx->pc;
        init1st__11SprMgrClassFv_0x217080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26C4u; }
        else if (ctx->pc != 0x1E26C4u) { ctx->pc = 0x1E26C4u; }
    }
    if (ctx->pc != 0x1E26C4u) { return; }
    ctx->pc = 0x1E26C4u;
label_1e26c4:
    // 0x1e26c4: 0xc084fa4
label_1e26c8:
    if (ctx->pc == 0x1E26C8u) {
        ctx->pc = 0x1E26C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937676));
        ctx->pc = 0x1E26CCu;
        goto label_1e26cc;
    }
    ctx->pc = 0x1E26C4u;
    SET_GPR_U32(ctx, 31, 0x1E26CCu);
    ctx->pc = 0x1E26C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937676));
    ctx->pc = 0x213E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        init1st2__12PolyMgrClassFv_0x213e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26CCu; }
        else if (ctx->pc != 0x1E26CCu) { ctx->pc = 0x1E26CCu; }
    }
    if (ctx->pc != 0x1E26CCu) { return; }
    ctx->pc = 0x1E26CCu;
label_1e26cc:
    // 0x1e26cc: 0x24040008
    ctx->pc = 0x1e26ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1e26d0:
    // 0x1e26d0: 0xc06aeb4
label_1e26d4:
    if (ctx->pc == 0x1E26D4u) {
        ctx->pc = 0x1E26D4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E26D8u;
        goto label_1e26d8;
    }
    ctx->pc = 0x1E26D0u;
    SET_GPR_U32(ctx, 31, 0x1E26D8u);
    ctx->pc = 0x1E26D4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ABAD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetFontSize_0x1abad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26D8u; }
        else if (ctx->pc != 0x1E26D8u) { ctx->pc = 0x1E26D8u; }
    }
    if (ctx->pc != 0x1E26D8u) { return; }
    ctx->pc = 0x1E26D8u;
label_1e26d8:
    // 0x1e26d8: 0x3c010051
    ctx->pc = 0x1e26d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
label_1e26dc:
    // 0x1e26dc: 0xc068f08
label_1e26e0:
    if (ctx->pc == 0x1E26E0u) {
        ctx->pc = 0x1E26E0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 20544), GPR_U32(ctx, 0));
        ctx->pc = 0x1E26E4u;
        goto label_1e26e4;
    }
    ctx->pc = 0x1E26DCu;
    SET_GPR_U32(ctx, 31, 0x1E26E4u);
    ctx->pc = 0x1E26E0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20544), GPR_U32(ctx, 0));
    ctx->pc = 0x1A3C20u;
    {
        PS2_INIT_LOG_ENTRY("MallocBlockInit");
        const uint32_t __entryPc = ctx->pc;
        MallocBlockInit_0x1a3c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26E4u; }
        else if (ctx->pc != 0x1E26E4u) { ctx->pc = 0x1E26E4u; }
    }
    if (ctx->pc != 0x1E26E4u) { return; }
    ctx->pc = 0x1E26E4u;
label_1e26e4:
    // 0x1e26e4: 0x3c0201ec
    ctx->pc = 0x1e26e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)492 << 16));
label_1e26e8:
    // 0x1e26e8: 0x3c0400a2
    ctx->pc = 0x1e26e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)162 << 16));
label_1e26ec:
    // 0x1e26ec: 0xc068f0c
label_1e26f0:
    if (ctx->pc == 0x1E26F0u) {
        ctx->pc = 0x1E26F0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 53248));
        ctx->pc = 0x1E26F4u;
        goto label_1e26f4;
    }
    ctx->pc = 0x1E26ECu;
    SET_GPR_U32(ctx, 31, 0x1E26F4u);
    ctx->pc = 0x1E26F0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 53248));
    ctx->pc = 0x1A3C30u;
    {
        PS2_INIT_LOG_ENTRY("MallocAddBlock");
        const uint32_t __entryPc = ctx->pc;
        MallocAddBlock_0x1a3c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26F4u; }
        else if (ctx->pc != 0x1E26F4u) { ctx->pc = 0x1E26F4u; }
    }
    if (ctx->pc != 0x1E26F4u) { return; }
    ctx->pc = 0x1E26F4u;
label_1e26f4:
    // 0x1e26f4: 0xc068684
label_1e26f8:
    if (ctx->pc == 0x1E26F8u) {
        ctx->pc = 0x1E26FCu;
        goto label_1e26fc;
    }
    ctx->pc = 0x1E26F4u;
    SET_GPR_U32(ctx, 31, 0x1E26FCu);
    ctx->pc = 0x1A1A10u;
    {
        PS2_INIT_LOG_ENTRY("MallocInit");
        const uint32_t __entryPc = ctx->pc;
        MallocInit_0x1a1a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26FCu; }
        else if (ctx->pc != 0x1E26FCu) { ctx->pc = 0x1E26FCu; }
    }
    if (ctx->pc != 0x1E26FCu) { return; }
    ctx->pc = 0x1E26FCu;
label_1e26fc:
    // 0x1e26fc: 0x3c010050
    ctx->pc = 0x1e26fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1e2700:
    // 0x1e2700: 0xac20e508
    ctx->pc = 0x1e2700u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960392), GPR_U32(ctx, 0));
label_1e2704:
    // 0x1e2704: 0x3c010050
    ctx->pc = 0x1e2704u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1e2708:
    // 0x1e2708: 0x3c020050
    ctx->pc = 0x1e2708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1e270c:
    // 0x1e270c: 0xa420e506
    ctx->pc = 0x1e270cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294960390), (uint16_t)GPR_U32(ctx, 0));
label_1e2710:
    // 0x1e2710: 0x2444e500
    ctx->pc = 0x1e2710u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960384));
label_1e2714:
    // 0x1e2714: 0x8c990000
    ctx->pc = 0x1e2714u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2718:
    // 0x1e2718: 0x8f390010
    ctx->pc = 0x1e2718u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e271c:
    // 0x1e271c: 0x320f809
label_1e2720:
    if (ctx->pc == 0x1E2720u) {
        ctx->pc = 0x1E2724u;
        goto label_1e2724;
    }
    ctx->pc = 0x1E271Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2724u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2240u: goto label_1e2240;
            case 0x1E2244u: goto label_1e2244;
            case 0x1E2248u: goto label_1e2248;
            case 0x1E224Cu: goto label_1e224c;
            case 0x1E2250u: goto label_1e2250;
            case 0x1E2254u: goto label_1e2254;
            case 0x1E2258u: goto label_1e2258;
            case 0x1E225Cu: goto label_1e225c;
            case 0x1E2260u: goto label_1e2260;
            case 0x1E2264u: goto label_1e2264;
            case 0x1E2268u: goto label_1e2268;
            case 0x1E226Cu: goto label_1e226c;
            case 0x1E2270u: goto label_1e2270;
            case 0x1E2274u: goto label_1e2274;
            case 0x1E2278u: goto label_1e2278;
            case 0x1E227Cu: goto label_1e227c;
            case 0x1E2280u: goto label_1e2280;
            case 0x1E2284u: goto label_1e2284;
            case 0x1E2288u: goto label_1e2288;
            case 0x1E228Cu: goto label_1e228c;
            case 0x1E2290u: goto label_1e2290;
            case 0x1E2294u: goto label_1e2294;
            case 0x1E2298u: goto label_1e2298;
            case 0x1E229Cu: goto label_1e229c;
            case 0x1E22A0u: goto label_1e22a0;
            case 0x1E22A4u: goto label_1e22a4;
            case 0x1E22A8u: goto label_1e22a8;
            case 0x1E22ACu: goto label_1e22ac;
            case 0x1E22B0u: goto label_1e22b0;
            case 0x1E22B4u: goto label_1e22b4;
            case 0x1E22B8u: goto label_1e22b8;
            case 0x1E22BCu: goto label_1e22bc;
            case 0x1E22C0u: goto label_1e22c0;
            case 0x1E22C4u: goto label_1e22c4;
            case 0x1E22C8u: goto label_1e22c8;
            case 0x1E22CCu: goto label_1e22cc;
            case 0x1E22D0u: goto label_1e22d0;
            case 0x1E22D4u: goto label_1e22d4;
            case 0x1E22D8u: goto label_1e22d8;
            case 0x1E22DCu: goto label_1e22dc;
            case 0x1E22E0u: goto label_1e22e0;
            case 0x1E22E4u: goto label_1e22e4;
            case 0x1E22E8u: goto label_1e22e8;
            case 0x1E22ECu: goto label_1e22ec;
            case 0x1E22F0u: goto label_1e22f0;
            case 0x1E22F4u: goto label_1e22f4;
            case 0x1E22F8u: goto label_1e22f8;
            case 0x1E22FCu: goto label_1e22fc;
            case 0x1E2300u: goto label_1e2300;
            case 0x1E2304u: goto label_1e2304;
            case 0x1E2308u: goto label_1e2308;
            case 0x1E230Cu: goto label_1e230c;
            case 0x1E2310u: goto label_1e2310;
            case 0x1E2314u: goto label_1e2314;
            case 0x1E2318u: goto label_1e2318;
            case 0x1E231Cu: goto label_1e231c;
            case 0x1E2320u: goto label_1e2320;
            case 0x1E2324u: goto label_1e2324;
            case 0x1E2328u: goto label_1e2328;
            case 0x1E232Cu: goto label_1e232c;
            case 0x1E2330u: goto label_1e2330;
            case 0x1E2334u: goto label_1e2334;
            case 0x1E2338u: goto label_1e2338;
            case 0x1E233Cu: goto label_1e233c;
            case 0x1E2340u: goto label_1e2340;
            case 0x1E2344u: goto label_1e2344;
            case 0x1E2348u: goto label_1e2348;
            case 0x1E234Cu: goto label_1e234c;
            case 0x1E2350u: goto label_1e2350;
            case 0x1E2354u: goto label_1e2354;
            case 0x1E2358u: goto label_1e2358;
            case 0x1E235Cu: goto label_1e235c;
            case 0x1E2360u: goto label_1e2360;
            case 0x1E2364u: goto label_1e2364;
            case 0x1E2368u: goto label_1e2368;
            case 0x1E236Cu: goto label_1e236c;
            case 0x1E2370u: goto label_1e2370;
            case 0x1E2374u: goto label_1e2374;
            case 0x1E2378u: goto label_1e2378;
            case 0x1E237Cu: goto label_1e237c;
            case 0x1E2380u: goto label_1e2380;
            case 0x1E2384u: goto label_1e2384;
            case 0x1E2388u: goto label_1e2388;
            case 0x1E238Cu: goto label_1e238c;
            case 0x1E2390u: goto label_1e2390;
            case 0x1E2394u: goto label_1e2394;
            case 0x1E2398u: goto label_1e2398;
            case 0x1E239Cu: goto label_1e239c;
            case 0x1E23A0u: goto label_1e23a0;
            case 0x1E23A4u: goto label_1e23a4;
            case 0x1E23A8u: goto label_1e23a8;
            case 0x1E23ACu: goto label_1e23ac;
            case 0x1E23B0u: goto label_1e23b0;
            case 0x1E23B4u: goto label_1e23b4;
            case 0x1E23B8u: goto label_1e23b8;
            case 0x1E23BCu: goto label_1e23bc;
            case 0x1E23C0u: goto label_1e23c0;
            case 0x1E23C4u: goto label_1e23c4;
            case 0x1E23C8u: goto label_1e23c8;
            case 0x1E23CCu: goto label_1e23cc;
            case 0x1E23D0u: goto label_1e23d0;
            case 0x1E23D4u: goto label_1e23d4;
            case 0x1E23D8u: goto label_1e23d8;
            case 0x1E23DCu: goto label_1e23dc;
            case 0x1E23E0u: goto label_1e23e0;
            case 0x1E23E4u: goto label_1e23e4;
            case 0x1E23E8u: goto label_1e23e8;
            case 0x1E23ECu: goto label_1e23ec;
            case 0x1E23F0u: goto label_1e23f0;
            case 0x1E23F4u: goto label_1e23f4;
            case 0x1E23F8u: goto label_1e23f8;
            case 0x1E23FCu: goto label_1e23fc;
            case 0x1E2400u: goto label_1e2400;
            case 0x1E2404u: goto label_1e2404;
            case 0x1E2408u: goto label_1e2408;
            case 0x1E240Cu: goto label_1e240c;
            case 0x1E2410u: goto label_1e2410;
            case 0x1E2414u: goto label_1e2414;
            case 0x1E2418u: goto label_1e2418;
            case 0x1E241Cu: goto label_1e241c;
            case 0x1E2420u: goto label_1e2420;
            case 0x1E2424u: goto label_1e2424;
            case 0x1E2428u: goto label_1e2428;
            case 0x1E242Cu: goto label_1e242c;
            case 0x1E2430u: goto label_1e2430;
            case 0x1E2434u: goto label_1e2434;
            case 0x1E2438u: goto label_1e2438;
            case 0x1E243Cu: goto label_1e243c;
            case 0x1E2440u: goto label_1e2440;
            case 0x1E2444u: goto label_1e2444;
            case 0x1E2448u: goto label_1e2448;
            case 0x1E244Cu: goto label_1e244c;
            case 0x1E2450u: goto label_1e2450;
            case 0x1E2454u: goto label_1e2454;
            case 0x1E2458u: goto label_1e2458;
            case 0x1E245Cu: goto label_1e245c;
            case 0x1E2460u: goto label_1e2460;
            case 0x1E2464u: goto label_1e2464;
            case 0x1E2468u: goto label_1e2468;
            case 0x1E246Cu: goto label_1e246c;
            case 0x1E2470u: goto label_1e2470;
            case 0x1E2474u: goto label_1e2474;
            case 0x1E2478u: goto label_1e2478;
            case 0x1E247Cu: goto label_1e247c;
            case 0x1E2480u: goto label_1e2480;
            case 0x1E2484u: goto label_1e2484;
            case 0x1E2488u: goto label_1e2488;
            case 0x1E248Cu: goto label_1e248c;
            case 0x1E2490u: goto label_1e2490;
            case 0x1E2494u: goto label_1e2494;
            case 0x1E2498u: goto label_1e2498;
            case 0x1E249Cu: goto label_1e249c;
            case 0x1E24A0u: goto label_1e24a0;
            case 0x1E24A4u: goto label_1e24a4;
            case 0x1E24A8u: goto label_1e24a8;
            case 0x1E24ACu: goto label_1e24ac;
            case 0x1E24B0u: goto label_1e24b0;
            case 0x1E24B4u: goto label_1e24b4;
            case 0x1E24B8u: goto label_1e24b8;
            case 0x1E24BCu: goto label_1e24bc;
            case 0x1E24C0u: goto label_1e24c0;
            case 0x1E24C4u: goto label_1e24c4;
            case 0x1E24C8u: goto label_1e24c8;
            case 0x1E24CCu: goto label_1e24cc;
            case 0x1E24D0u: goto label_1e24d0;
            case 0x1E24D4u: goto label_1e24d4;
            case 0x1E24D8u: goto label_1e24d8;
            case 0x1E24DCu: goto label_1e24dc;
            case 0x1E24E0u: goto label_1e24e0;
            case 0x1E24E4u: goto label_1e24e4;
            case 0x1E24E8u: goto label_1e24e8;
            case 0x1E24ECu: goto label_1e24ec;
            case 0x1E24F0u: goto label_1e24f0;
            case 0x1E24F4u: goto label_1e24f4;
            case 0x1E24F8u: goto label_1e24f8;
            case 0x1E24FCu: goto label_1e24fc;
            case 0x1E2500u: goto label_1e2500;
            case 0x1E2504u: goto label_1e2504;
            case 0x1E2508u: goto label_1e2508;
            case 0x1E250Cu: goto label_1e250c;
            case 0x1E2510u: goto label_1e2510;
            case 0x1E2514u: goto label_1e2514;
            case 0x1E2518u: goto label_1e2518;
            case 0x1E251Cu: goto label_1e251c;
            case 0x1E2520u: goto label_1e2520;
            case 0x1E2524u: goto label_1e2524;
            case 0x1E2528u: goto label_1e2528;
            case 0x1E252Cu: goto label_1e252c;
            case 0x1E2530u: goto label_1e2530;
            case 0x1E2534u: goto label_1e2534;
            case 0x1E2538u: goto label_1e2538;
            case 0x1E253Cu: goto label_1e253c;
            case 0x1E2540u: goto label_1e2540;
            case 0x1E2544u: goto label_1e2544;
            case 0x1E2548u: goto label_1e2548;
            case 0x1E254Cu: goto label_1e254c;
            case 0x1E2550u: goto label_1e2550;
            case 0x1E2554u: goto label_1e2554;
            case 0x1E2558u: goto label_1e2558;
            case 0x1E255Cu: goto label_1e255c;
            case 0x1E2560u: goto label_1e2560;
            case 0x1E2564u: goto label_1e2564;
            case 0x1E2568u: goto label_1e2568;
            case 0x1E256Cu: goto label_1e256c;
            case 0x1E2570u: goto label_1e2570;
            case 0x1E2574u: goto label_1e2574;
            case 0x1E2578u: goto label_1e2578;
            case 0x1E257Cu: goto label_1e257c;
            case 0x1E2580u: goto label_1e2580;
            case 0x1E2584u: goto label_1e2584;
            case 0x1E2588u: goto label_1e2588;
            case 0x1E258Cu: goto label_1e258c;
            case 0x1E2590u: goto label_1e2590;
            case 0x1E2594u: goto label_1e2594;
            case 0x1E2598u: goto label_1e2598;
            case 0x1E259Cu: goto label_1e259c;
            case 0x1E25A0u: goto label_1e25a0;
            case 0x1E25A4u: goto label_1e25a4;
            case 0x1E25A8u: goto label_1e25a8;
            case 0x1E25ACu: goto label_1e25ac;
            case 0x1E25B0u: goto label_1e25b0;
            case 0x1E25B4u: goto label_1e25b4;
            case 0x1E25B8u: goto label_1e25b8;
            case 0x1E25BCu: goto label_1e25bc;
            case 0x1E25C0u: goto label_1e25c0;
            case 0x1E25C4u: goto label_1e25c4;
            case 0x1E25C8u: goto label_1e25c8;
            case 0x1E25CCu: goto label_1e25cc;
            case 0x1E25D0u: goto label_1e25d0;
            case 0x1E25D4u: goto label_1e25d4;
            case 0x1E25D8u: goto label_1e25d8;
            case 0x1E25DCu: goto label_1e25dc;
            case 0x1E25E0u: goto label_1e25e0;
            case 0x1E25E4u: goto label_1e25e4;
            case 0x1E25E8u: goto label_1e25e8;
            case 0x1E25ECu: goto label_1e25ec;
            case 0x1E25F0u: goto label_1e25f0;
            case 0x1E25F4u: goto label_1e25f4;
            case 0x1E25F8u: goto label_1e25f8;
            case 0x1E25FCu: goto label_1e25fc;
            case 0x1E2600u: goto label_1e2600;
            case 0x1E2604u: goto label_1e2604;
            case 0x1E2608u: goto label_1e2608;
            case 0x1E260Cu: goto label_1e260c;
            case 0x1E2610u: goto label_1e2610;
            case 0x1E2614u: goto label_1e2614;
            case 0x1E2618u: goto label_1e2618;
            case 0x1E261Cu: goto label_1e261c;
            case 0x1E2620u: goto label_1e2620;
            case 0x1E2624u: goto label_1e2624;
            case 0x1E2628u: goto label_1e2628;
            case 0x1E262Cu: goto label_1e262c;
            case 0x1E2630u: goto label_1e2630;
            case 0x1E2634u: goto label_1e2634;
            case 0x1E2638u: goto label_1e2638;
            case 0x1E263Cu: goto label_1e263c;
            case 0x1E2640u: goto label_1e2640;
            case 0x1E2644u: goto label_1e2644;
            case 0x1E2648u: goto label_1e2648;
            case 0x1E264Cu: goto label_1e264c;
            case 0x1E2650u: goto label_1e2650;
            case 0x1E2654u: goto label_1e2654;
            case 0x1E2658u: goto label_1e2658;
            case 0x1E265Cu: goto label_1e265c;
            case 0x1E2660u: goto label_1e2660;
            case 0x1E2664u: goto label_1e2664;
            case 0x1E2668u: goto label_1e2668;
            case 0x1E266Cu: goto label_1e266c;
            case 0x1E2670u: goto label_1e2670;
            case 0x1E2674u: goto label_1e2674;
            case 0x1E2678u: goto label_1e2678;
            case 0x1E267Cu: goto label_1e267c;
            case 0x1E2680u: goto label_1e2680;
            case 0x1E2684u: goto label_1e2684;
            case 0x1E2688u: goto label_1e2688;
            case 0x1E268Cu: goto label_1e268c;
            case 0x1E2690u: goto label_1e2690;
            case 0x1E2694u: goto label_1e2694;
            case 0x1E2698u: goto label_1e2698;
            case 0x1E269Cu: goto label_1e269c;
            case 0x1E26A0u: goto label_1e26a0;
            case 0x1E26A4u: goto label_1e26a4;
            case 0x1E26A8u: goto label_1e26a8;
            case 0x1E26ACu: goto label_1e26ac;
            case 0x1E26B0u: goto label_1e26b0;
            case 0x1E26B4u: goto label_1e26b4;
            case 0x1E26B8u: goto label_1e26b8;
            case 0x1E26BCu: goto label_1e26bc;
            case 0x1E26C0u: goto label_1e26c0;
            case 0x1E26C4u: goto label_1e26c4;
            case 0x1E26C8u: goto label_1e26c8;
            case 0x1E26CCu: goto label_1e26cc;
            case 0x1E26D0u: goto label_1e26d0;
            case 0x1E26D4u: goto label_1e26d4;
            case 0x1E26D8u: goto label_1e26d8;
            case 0x1E26DCu: goto label_1e26dc;
            case 0x1E26E0u: goto label_1e26e0;
            case 0x1E26E4u: goto label_1e26e4;
            case 0x1E26E8u: goto label_1e26e8;
            case 0x1E26ECu: goto label_1e26ec;
            case 0x1E26F0u: goto label_1e26f0;
            case 0x1E26F4u: goto label_1e26f4;
            case 0x1E26F8u: goto label_1e26f8;
            case 0x1E26FCu: goto label_1e26fc;
            case 0x1E2700u: goto label_1e2700;
            case 0x1E2704u: goto label_1e2704;
            case 0x1E2708u: goto label_1e2708;
            case 0x1E270Cu: goto label_1e270c;
            case 0x1E2710u: goto label_1e2710;
            case 0x1E2714u: goto label_1e2714;
            case 0x1E2718u: goto label_1e2718;
            case 0x1E271Cu: goto label_1e271c;
            case 0x1E2720u: goto label_1e2720;
            case 0x1E2724u: goto label_1e2724;
            case 0x1E2728u: goto label_1e2728;
            case 0x1E272Cu: goto label_1e272c;
            case 0x1E2730u: goto label_1e2730;
            case 0x1E2734u: goto label_1e2734;
            case 0x1E2738u: goto label_1e2738;
            case 0x1E273Cu: goto label_1e273c;
            case 0x1E2740u: goto label_1e2740;
            case 0x1E2744u: goto label_1e2744;
            case 0x1E2748u: goto label_1e2748;
            case 0x1E274Cu: goto label_1e274c;
            case 0x1E2750u: goto label_1e2750;
            case 0x1E2754u: goto label_1e2754;
            case 0x1E2758u: goto label_1e2758;
            default: break;
        }
        {
            PS2_INIT_LOG_ENTRY("MallocInit_indirect");
            std::cerr << std::string(ps2_init_log::depth() * 2, ' ') << "   [jumpTarget=0x" << std::hex << jumpTarget << std::dec << "]\n";
            std::cerr.flush();
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E2724u; }
            if (ctx->pc != 0x1E2724u) { return; }
        }
    }
    ctx->pc = 0x1E2724u;
label_1e2724:
    // 0x1e2724: 0x3c020050
    ctx->pc = 0x1e2724u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1e2728:
    // 0x1e2728: 0x2444e510
    ctx->pc = 0x1e2728u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
label_1e272c:
    // 0x1e272c: 0xc07cdf8
label_1e2730:
    if (ctx->pc == 0x1E2730u) {
        ctx->pc = 0x1E2730u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E2734u;
        goto label_1e2734;
    }
    ctx->pc = 0x1E272Cu;
    SET_GPR_U32(ctx, 31, 0x1E2734u);
    ctx->pc = 0x1E2730u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1F37E0u;
    {
        PS2_INIT_LOG_ENTRY("init_PauseMgr");
        const uint32_t __entryPc = ctx->pc;
        init__13PauseMgrClassFi_0x1f37e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2734u; }
        else if (ctx->pc != 0x1E2734u) { ctx->pc = 0x1E2734u; }
    }
    if (ctx->pc != 0x1E2734u) { return; }
    ctx->pc = 0x1E2734u;
label_1e2734:
    // 0x1e2734: 0xc07bb4c
label_1e2738:
    if (ctx->pc == 0x1E2738u) {
        ctx->pc = 0x1E273Cu;
        goto label_1e273c;
    }
    ctx->pc = 0x1E2734u;
    SET_GPR_U32(ctx, 31, 0x1E273Cu);
    ctx->pc = 0x1EED30u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitIO__Fv_0x1eed30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E273Cu; }
        else if (ctx->pc != 0x1E273Cu) { ctx->pc = 0x1E273Cu; }
    }
    if (ctx->pc != 0x1E273Cu) { return; }
    ctx->pc = 0x1E273Cu;
label_1e273c:
    // 0x1e273c: 0xc054dbe
label_1e2740:
    if (ctx->pc == 0x1E2740u) {
        ctx->pc = 0x1E2740u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E2744u;
        goto label_1e2744;
    }
    ctx->pc = 0x1E273Cu;
    SET_GPR_U32(ctx, 31, 0x1E2744u);
    ctx->pc = 0x1E2740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1536F8u;
    {
        PS2_INIT_LOG_ENTRY("sceGsSyncV");
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x1536f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2744u; }
        else if (ctx->pc != 0x1E2744u) { ctx->pc = 0x1E2744u; }
    }
    if (ctx->pc != 0x1E2744u) { return; }
    ctx->pc = 0x1E2744u;
label_1e2744:
    // 0x1e2744: 0xa3808b98
    ctx->pc = 0x1e2744u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937496), (uint8_t)GPR_U32(ctx, 0));
label_1e2748:
    // 0x1e2748: 0x7bbf0030
    ctx->pc = 0x1e2748u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e274c:
    // 0x1e274c: 0x7bb10020
    ctx->pc = 0x1e274cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e2750:
    // 0x1e2750: 0x7bb00010
    ctx->pc = 0x1e2750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2754:
    // 0x1e2754: 0x3e00008
label_1e2758:
    if (ctx->pc == 0x1E2758u) {
        ctx->pc = 0x1E2758u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E275Cu;
        goto label_fallthrough_0x1e2754;
    }
    ctx->pc = 0x1E2754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2758u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2240u: goto label_1e2240;
            case 0x1E2244u: goto label_1e2244;
            case 0x1E2248u: goto label_1e2248;
            case 0x1E224Cu: goto label_1e224c;
            case 0x1E2250u: goto label_1e2250;
            case 0x1E2254u: goto label_1e2254;
            case 0x1E2258u: goto label_1e2258;
            case 0x1E225Cu: goto label_1e225c;
            case 0x1E2260u: goto label_1e2260;
            case 0x1E2264u: goto label_1e2264;
            case 0x1E2268u: goto label_1e2268;
            case 0x1E226Cu: goto label_1e226c;
            case 0x1E2270u: goto label_1e2270;
            case 0x1E2274u: goto label_1e2274;
            case 0x1E2278u: goto label_1e2278;
            case 0x1E227Cu: goto label_1e227c;
            case 0x1E2280u: goto label_1e2280;
            case 0x1E2284u: goto label_1e2284;
            case 0x1E2288u: goto label_1e2288;
            case 0x1E228Cu: goto label_1e228c;
            case 0x1E2290u: goto label_1e2290;
            case 0x1E2294u: goto label_1e2294;
            case 0x1E2298u: goto label_1e2298;
            case 0x1E229Cu: goto label_1e229c;
            case 0x1E22A0u: goto label_1e22a0;
            case 0x1E22A4u: goto label_1e22a4;
            case 0x1E22A8u: goto label_1e22a8;
            case 0x1E22ACu: goto label_1e22ac;
            case 0x1E22B0u: goto label_1e22b0;
            case 0x1E22B4u: goto label_1e22b4;
            case 0x1E22B8u: goto label_1e22b8;
            case 0x1E22BCu: goto label_1e22bc;
            case 0x1E22C0u: goto label_1e22c0;
            case 0x1E22C4u: goto label_1e22c4;
            case 0x1E22C8u: goto label_1e22c8;
            case 0x1E22CCu: goto label_1e22cc;
            case 0x1E22D0u: goto label_1e22d0;
            case 0x1E22D4u: goto label_1e22d4;
            case 0x1E22D8u: goto label_1e22d8;
            case 0x1E22DCu: goto label_1e22dc;
            case 0x1E22E0u: goto label_1e22e0;
            case 0x1E22E4u: goto label_1e22e4;
            case 0x1E22E8u: goto label_1e22e8;
            case 0x1E22ECu: goto label_1e22ec;
            case 0x1E22F0u: goto label_1e22f0;
            case 0x1E22F4u: goto label_1e22f4;
            case 0x1E22F8u: goto label_1e22f8;
            case 0x1E22FCu: goto label_1e22fc;
            case 0x1E2300u: goto label_1e2300;
            case 0x1E2304u: goto label_1e2304;
            case 0x1E2308u: goto label_1e2308;
            case 0x1E230Cu: goto label_1e230c;
            case 0x1E2310u: goto label_1e2310;
            case 0x1E2314u: goto label_1e2314;
            case 0x1E2318u: goto label_1e2318;
            case 0x1E231Cu: goto label_1e231c;
            case 0x1E2320u: goto label_1e2320;
            case 0x1E2324u: goto label_1e2324;
            case 0x1E2328u: goto label_1e2328;
            case 0x1E232Cu: goto label_1e232c;
            case 0x1E2330u: goto label_1e2330;
            case 0x1E2334u: goto label_1e2334;
            case 0x1E2338u: goto label_1e2338;
            case 0x1E233Cu: goto label_1e233c;
            case 0x1E2340u: goto label_1e2340;
            case 0x1E2344u: goto label_1e2344;
            case 0x1E2348u: goto label_1e2348;
            case 0x1E234Cu: goto label_1e234c;
            case 0x1E2350u: goto label_1e2350;
            case 0x1E2354u: goto label_1e2354;
            case 0x1E2358u: goto label_1e2358;
            case 0x1E235Cu: goto label_1e235c;
            case 0x1E2360u: goto label_1e2360;
            case 0x1E2364u: goto label_1e2364;
            case 0x1E2368u: goto label_1e2368;
            case 0x1E236Cu: goto label_1e236c;
            case 0x1E2370u: goto label_1e2370;
            case 0x1E2374u: goto label_1e2374;
            case 0x1E2378u: goto label_1e2378;
            case 0x1E237Cu: goto label_1e237c;
            case 0x1E2380u: goto label_1e2380;
            case 0x1E2384u: goto label_1e2384;
            case 0x1E2388u: goto label_1e2388;
            case 0x1E238Cu: goto label_1e238c;
            case 0x1E2390u: goto label_1e2390;
            case 0x1E2394u: goto label_1e2394;
            case 0x1E2398u: goto label_1e2398;
            case 0x1E239Cu: goto label_1e239c;
            case 0x1E23A0u: goto label_1e23a0;
            case 0x1E23A4u: goto label_1e23a4;
            case 0x1E23A8u: goto label_1e23a8;
            case 0x1E23ACu: goto label_1e23ac;
            case 0x1E23B0u: goto label_1e23b0;
            case 0x1E23B4u: goto label_1e23b4;
            case 0x1E23B8u: goto label_1e23b8;
            case 0x1E23BCu: goto label_1e23bc;
            case 0x1E23C0u: goto label_1e23c0;
            case 0x1E23C4u: goto label_1e23c4;
            case 0x1E23C8u: goto label_1e23c8;
            case 0x1E23CCu: goto label_1e23cc;
            case 0x1E23D0u: goto label_1e23d0;
            case 0x1E23D4u: goto label_1e23d4;
            case 0x1E23D8u: goto label_1e23d8;
            case 0x1E23DCu: goto label_1e23dc;
            case 0x1E23E0u: goto label_1e23e0;
            case 0x1E23E4u: goto label_1e23e4;
            case 0x1E23E8u: goto label_1e23e8;
            case 0x1E23ECu: goto label_1e23ec;
            case 0x1E23F0u: goto label_1e23f0;
            case 0x1E23F4u: goto label_1e23f4;
            case 0x1E23F8u: goto label_1e23f8;
            case 0x1E23FCu: goto label_1e23fc;
            case 0x1E2400u: goto label_1e2400;
            case 0x1E2404u: goto label_1e2404;
            case 0x1E2408u: goto label_1e2408;
            case 0x1E240Cu: goto label_1e240c;
            case 0x1E2410u: goto label_1e2410;
            case 0x1E2414u: goto label_1e2414;
            case 0x1E2418u: goto label_1e2418;
            case 0x1E241Cu: goto label_1e241c;
            case 0x1E2420u: goto label_1e2420;
            case 0x1E2424u: goto label_1e2424;
            case 0x1E2428u: goto label_1e2428;
            case 0x1E242Cu: goto label_1e242c;
            case 0x1E2430u: goto label_1e2430;
            case 0x1E2434u: goto label_1e2434;
            case 0x1E2438u: goto label_1e2438;
            case 0x1E243Cu: goto label_1e243c;
            case 0x1E2440u: goto label_1e2440;
            case 0x1E2444u: goto label_1e2444;
            case 0x1E2448u: goto label_1e2448;
            case 0x1E244Cu: goto label_1e244c;
            case 0x1E2450u: goto label_1e2450;
            case 0x1E2454u: goto label_1e2454;
            case 0x1E2458u: goto label_1e2458;
            case 0x1E245Cu: goto label_1e245c;
            case 0x1E2460u: goto label_1e2460;
            case 0x1E2464u: goto label_1e2464;
            case 0x1E2468u: goto label_1e2468;
            case 0x1E246Cu: goto label_1e246c;
            case 0x1E2470u: goto label_1e2470;
            case 0x1E2474u: goto label_1e2474;
            case 0x1E2478u: goto label_1e2478;
            case 0x1E247Cu: goto label_1e247c;
            case 0x1E2480u: goto label_1e2480;
            case 0x1E2484u: goto label_1e2484;
            case 0x1E2488u: goto label_1e2488;
            case 0x1E248Cu: goto label_1e248c;
            case 0x1E2490u: goto label_1e2490;
            case 0x1E2494u: goto label_1e2494;
            case 0x1E2498u: goto label_1e2498;
            case 0x1E249Cu: goto label_1e249c;
            case 0x1E24A0u: goto label_1e24a0;
            case 0x1E24A4u: goto label_1e24a4;
            case 0x1E24A8u: goto label_1e24a8;
            case 0x1E24ACu: goto label_1e24ac;
            case 0x1E24B0u: goto label_1e24b0;
            case 0x1E24B4u: goto label_1e24b4;
            case 0x1E24B8u: goto label_1e24b8;
            case 0x1E24BCu: goto label_1e24bc;
            case 0x1E24C0u: goto label_1e24c0;
            case 0x1E24C4u: goto label_1e24c4;
            case 0x1E24C8u: goto label_1e24c8;
            case 0x1E24CCu: goto label_1e24cc;
            case 0x1E24D0u: goto label_1e24d0;
            case 0x1E24D4u: goto label_1e24d4;
            case 0x1E24D8u: goto label_1e24d8;
            case 0x1E24DCu: goto label_1e24dc;
            case 0x1E24E0u: goto label_1e24e0;
            case 0x1E24E4u: goto label_1e24e4;
            case 0x1E24E8u: goto label_1e24e8;
            case 0x1E24ECu: goto label_1e24ec;
            case 0x1E24F0u: goto label_1e24f0;
            case 0x1E24F4u: goto label_1e24f4;
            case 0x1E24F8u: goto label_1e24f8;
            case 0x1E24FCu: goto label_1e24fc;
            case 0x1E2500u: goto label_1e2500;
            case 0x1E2504u: goto label_1e2504;
            case 0x1E2508u: goto label_1e2508;
            case 0x1E250Cu: goto label_1e250c;
            case 0x1E2510u: goto label_1e2510;
            case 0x1E2514u: goto label_1e2514;
            case 0x1E2518u: goto label_1e2518;
            case 0x1E251Cu: goto label_1e251c;
            case 0x1E2520u: goto label_1e2520;
            case 0x1E2524u: goto label_1e2524;
            case 0x1E2528u: goto label_1e2528;
            case 0x1E252Cu: goto label_1e252c;
            case 0x1E2530u: goto label_1e2530;
            case 0x1E2534u: goto label_1e2534;
            case 0x1E2538u: goto label_1e2538;
            case 0x1E253Cu: goto label_1e253c;
            case 0x1E2540u: goto label_1e2540;
            case 0x1E2544u: goto label_1e2544;
            case 0x1E2548u: goto label_1e2548;
            case 0x1E254Cu: goto label_1e254c;
            case 0x1E2550u: goto label_1e2550;
            case 0x1E2554u: goto label_1e2554;
            case 0x1E2558u: goto label_1e2558;
            case 0x1E255Cu: goto label_1e255c;
            case 0x1E2560u: goto label_1e2560;
            case 0x1E2564u: goto label_1e2564;
            case 0x1E2568u: goto label_1e2568;
            case 0x1E256Cu: goto label_1e256c;
            case 0x1E2570u: goto label_1e2570;
            case 0x1E2574u: goto label_1e2574;
            case 0x1E2578u: goto label_1e2578;
            case 0x1E257Cu: goto label_1e257c;
            case 0x1E2580u: goto label_1e2580;
            case 0x1E2584u: goto label_1e2584;
            case 0x1E2588u: goto label_1e2588;
            case 0x1E258Cu: goto label_1e258c;
            case 0x1E2590u: goto label_1e2590;
            case 0x1E2594u: goto label_1e2594;
            case 0x1E2598u: goto label_1e2598;
            case 0x1E259Cu: goto label_1e259c;
            case 0x1E25A0u: goto label_1e25a0;
            case 0x1E25A4u: goto label_1e25a4;
            case 0x1E25A8u: goto label_1e25a8;
            case 0x1E25ACu: goto label_1e25ac;
            case 0x1E25B0u: goto label_1e25b0;
            case 0x1E25B4u: goto label_1e25b4;
            case 0x1E25B8u: goto label_1e25b8;
            case 0x1E25BCu: goto label_1e25bc;
            case 0x1E25C0u: goto label_1e25c0;
            case 0x1E25C4u: goto label_1e25c4;
            case 0x1E25C8u: goto label_1e25c8;
            case 0x1E25CCu: goto label_1e25cc;
            case 0x1E25D0u: goto label_1e25d0;
            case 0x1E25D4u: goto label_1e25d4;
            case 0x1E25D8u: goto label_1e25d8;
            case 0x1E25DCu: goto label_1e25dc;
            case 0x1E25E0u: goto label_1e25e0;
            case 0x1E25E4u: goto label_1e25e4;
            case 0x1E25E8u: goto label_1e25e8;
            case 0x1E25ECu: goto label_1e25ec;
            case 0x1E25F0u: goto label_1e25f0;
            case 0x1E25F4u: goto label_1e25f4;
            case 0x1E25F8u: goto label_1e25f8;
            case 0x1E25FCu: goto label_1e25fc;
            case 0x1E2600u: goto label_1e2600;
            case 0x1E2604u: goto label_1e2604;
            case 0x1E2608u: goto label_1e2608;
            case 0x1E260Cu: goto label_1e260c;
            case 0x1E2610u: goto label_1e2610;
            case 0x1E2614u: goto label_1e2614;
            case 0x1E2618u: goto label_1e2618;
            case 0x1E261Cu: goto label_1e261c;
            case 0x1E2620u: goto label_1e2620;
            case 0x1E2624u: goto label_1e2624;
            case 0x1E2628u: goto label_1e2628;
            case 0x1E262Cu: goto label_1e262c;
            case 0x1E2630u: goto label_1e2630;
            case 0x1E2634u: goto label_1e2634;
            case 0x1E2638u: goto label_1e2638;
            case 0x1E263Cu: goto label_1e263c;
            case 0x1E2640u: goto label_1e2640;
            case 0x1E2644u: goto label_1e2644;
            case 0x1E2648u: goto label_1e2648;
            case 0x1E264Cu: goto label_1e264c;
            case 0x1E2650u: goto label_1e2650;
            case 0x1E2654u: goto label_1e2654;
            case 0x1E2658u: goto label_1e2658;
            case 0x1E265Cu: goto label_1e265c;
            case 0x1E2660u: goto label_1e2660;
            case 0x1E2664u: goto label_1e2664;
            case 0x1E2668u: goto label_1e2668;
            case 0x1E266Cu: goto label_1e266c;
            case 0x1E2670u: goto label_1e2670;
            case 0x1E2674u: goto label_1e2674;
            case 0x1E2678u: goto label_1e2678;
            case 0x1E267Cu: goto label_1e267c;
            case 0x1E2680u: goto label_1e2680;
            case 0x1E2684u: goto label_1e2684;
            case 0x1E2688u: goto label_1e2688;
            case 0x1E268Cu: goto label_1e268c;
            case 0x1E2690u: goto label_1e2690;
            case 0x1E2694u: goto label_1e2694;
            case 0x1E2698u: goto label_1e2698;
            case 0x1E269Cu: goto label_1e269c;
            case 0x1E26A0u: goto label_1e26a0;
            case 0x1E26A4u: goto label_1e26a4;
            case 0x1E26A8u: goto label_1e26a8;
            case 0x1E26ACu: goto label_1e26ac;
            case 0x1E26B0u: goto label_1e26b0;
            case 0x1E26B4u: goto label_1e26b4;
            case 0x1E26B8u: goto label_1e26b8;
            case 0x1E26BCu: goto label_1e26bc;
            case 0x1E26C0u: goto label_1e26c0;
            case 0x1E26C4u: goto label_1e26c4;
            case 0x1E26C8u: goto label_1e26c8;
            case 0x1E26CCu: goto label_1e26cc;
            case 0x1E26D0u: goto label_1e26d0;
            case 0x1E26D4u: goto label_1e26d4;
            case 0x1E26D8u: goto label_1e26d8;
            case 0x1E26DCu: goto label_1e26dc;
            case 0x1E26E0u: goto label_1e26e0;
            case 0x1E26E4u: goto label_1e26e4;
            case 0x1E26E8u: goto label_1e26e8;
            case 0x1E26ECu: goto label_1e26ec;
            case 0x1E26F0u: goto label_1e26f0;
            case 0x1E26F4u: goto label_1e26f4;
            case 0x1E26F8u: goto label_1e26f8;
            case 0x1E26FCu: goto label_1e26fc;
            case 0x1E2700u: goto label_1e2700;
            case 0x1E2704u: goto label_1e2704;
            case 0x1E2708u: goto label_1e2708;
            case 0x1E270Cu: goto label_1e270c;
            case 0x1E2710u: goto label_1e2710;
            case 0x1E2714u: goto label_1e2714;
            case 0x1E2718u: goto label_1e2718;
            case 0x1E271Cu: goto label_1e271c;
            case 0x1E2720u: goto label_1e2720;
            case 0x1E2724u: goto label_1e2724;
            case 0x1E2728u: goto label_1e2728;
            case 0x1E272Cu: goto label_1e272c;
            case 0x1E2730u: goto label_1e2730;
            case 0x1E2734u: goto label_1e2734;
            case 0x1E2738u: goto label_1e2738;
            case 0x1E273Cu: goto label_1e273c;
            case 0x1E2740u: goto label_1e2740;
            case 0x1E2744u: goto label_1e2744;
            case 0x1E2748u: goto label_1e2748;
            case 0x1E274Cu: goto label_1e274c;
            case 0x1E2750u: goto label_1e2750;
            case 0x1E2754u: goto label_1e2754;
            case 0x1E2758u: goto label_1e2758;
            default: break;
        }
        return;
    }
label_fallthrough_0x1e2754:
    ctx->pc = 0x1E275Cu;
}
