#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScreenSaverCreateWeap
// Address: 0x22a2b0 - 0x22a3dc
void ScreenSaverCreateWeap_0x22a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22a2b0u;

    // 0x22a2b0: 0x27bdffb0
    ctx->pc = 0x22a2b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22a2b4: 0xffbf0040
    ctx->pc = 0x22a2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22a2b8: 0xffb30030
    ctx->pc = 0x22a2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22a2bc: 0xffb20020
    ctx->pc = 0x22a2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22a2c0: 0xffb10010
    ctx->pc = 0x22a2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a2c4: 0xffb00000
    ctx->pc = 0x22a2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a2c8: 0x80982d
    ctx->pc = 0x22a2c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a2cc: 0x3c020032
    ctx->pc = 0x22a2ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22a2d0: 0x8c441318
    ctx->pc = 0x22a2d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4888)));
    // 0x22a2d4: 0x282d
    ctx->pc = 0x22a2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a2d8: 0xc0b3ec0
    ctx->pc = 0x22A2D8u;
    SET_GPR_U32(ctx, 31, 0x22A2E0u);
    ctx->pc = 0x22A2DCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2E0u; }
    }
    if (ctx->pc != 0x22A2E0u) { return; }
    ctx->pc = 0x22A2E0u;
    // 0x22a2e0: 0x3c10003c
    ctx->pc = 0x22a2e0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x22a2e4: 0x261018c0
    ctx->pc = 0x22a2e4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 6336));
    // 0x22a2e8: 0x24110090
    ctx->pc = 0x22a2e8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 144));
    // 0x22a2ec: 0x2718818
    ctx->pc = 0x22a2ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22a2f0: 0x2309021
    ctx->pc = 0x22a2f0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22a2f4: 0xae42003c
    ctx->pc = 0x22a2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x22a2f8: 0x3c020034
    ctx->pc = 0x22a2f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x22a2fc: 0x8c44cdac
    ctx->pc = 0x22a2fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
    // 0x22a300: 0x3c05003a
    ctx->pc = 0x22a300u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22a304: 0x24a57018
    ctx->pc = 0x22a304u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28696));
    // 0x22a308: 0xc0847fc
    ctx->pc = 0x22A308u;
    SET_GPR_U32(ctx, 31, 0x22A310u);
    ctx->pc = 0x22A30Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A310u; }
    }
    if (ctx->pc != 0x22A310u) { return; }
    ctx->pc = 0x22A310u;
    // 0x22a310: 0x26100040
    ctx->pc = 0x22a310u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
    // 0x22a314: 0x40202d
    ctx->pc = 0x22a314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a318: 0x2302821
    ctx->pc = 0x22a318u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22a31c: 0x302d
    ctx->pc = 0x22a31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a320: 0xc08476a
    ctx->pc = 0x22A320u;
    SET_GPR_U32(ctx, 31, 0x22A328u);
    ctx->pc = 0x22A324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A328u; }
    }
    if (ctx->pc != 0x22A328u) { return; }
    ctx->pc = 0x22A328u;
    // 0x22a328: 0x10400006
    ctx->pc = 0x22A328u;
    {
        const bool branch_taken_0x22a328 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22A32Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        if (branch_taken_0x22a328) {
            ctx->pc = 0x22A344u;
            goto label_22a344;
        }
    }
    ctx->pc = 0x22A330u;
    // 0x22a330: 0x8c440000
    ctx->pc = 0x22a330u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22a334: 0x10800004
    ctx->pc = 0x22A334u;
    {
        const bool branch_taken_0x22a334 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22A338u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x22a334) {
            ctx->pc = 0x22A348u;
            goto label_22a348;
        }
    }
    ctx->pc = 0x22A33Cu;
    // 0x22a33c: 0xc0b3f94
    ctx->pc = 0x22A33Cu;
    SET_GPR_U32(ctx, 31, 0x22A344u);
    ctx->pc = 0x22A340u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A344u; }
    }
    if (ctx->pc != 0x22A344u) { return; }
    ctx->pc = 0x22A344u;
label_22a344:
    // 0x22a344: 0x3c02003c
    ctx->pc = 0x22a344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_22a348:
    // 0x22a348: 0x244218c0
    ctx->pc = 0x22a348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6336));
    // 0x22a34c: 0x24050090
    ctx->pc = 0x22a34cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 144));
    // 0x22a350: 0x2652818
    ctx->pc = 0x22a350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22a354: 0xa22821
    ctx->pc = 0x22a354u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22a358: 0x3c020032
    ctx->pc = 0x22a358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22a35c: 0x24421068
    ctx->pc = 0x22a35cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4200));
    // 0x22a360: 0x2404000c
    ctx->pc = 0x22a360u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x22a364: 0x2642018
    ctx->pc = 0x22a364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22a368: 0x821821
    ctx->pc = 0x22a368u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22a36c: 0xc4600000
    ctx->pc = 0x22a36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a370: 0xe4a00000
    ctx->pc = 0x22a370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x22a374: 0x441821
    ctx->pc = 0x22a374u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22a378: 0xc4600004
    ctx->pc = 0x22a378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a37c: 0xe4a00004
    ctx->pc = 0x22a37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x22a380: 0x60102d
    ctx->pc = 0x22a380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a384: 0xc4400008
    ctx->pc = 0x22a384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a388: 0xe4a00008
    ctx->pc = 0x22a388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x22a38c: 0x3c020032
    ctx->pc = 0x22a38cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22a390: 0x24421098
    ctx->pc = 0x22a390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4248));
    // 0x22a394: 0x821821
    ctx->pc = 0x22a394u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22a398: 0xc4600000
    ctx->pc = 0x22a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a39c: 0xe4a00010
    ctx->pc = 0x22a39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x22a3a0: 0x441821
    ctx->pc = 0x22a3a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22a3a4: 0xc4600004
    ctx->pc = 0x22a3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a3a8: 0xe4a00014
    ctx->pc = 0x22a3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x22a3ac: 0x60102d
    ctx->pc = 0x22a3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3b0: 0xc4400008
    ctx->pc = 0x22a3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a3b4: 0xe4a00018
    ctx->pc = 0x22a3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x22a3b8: 0xaca0000c
    ctx->pc = 0x22a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x22a3bc: 0xaca0001c
    ctx->pc = 0x22a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x22a3c0: 0xdfbf0040
    ctx->pc = 0x22a3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a3c4: 0xdfb30030
    ctx->pc = 0x22a3c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a3c8: 0xdfb20020
    ctx->pc = 0x22a3c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a3cc: 0xdfb10010
    ctx->pc = 0x22a3ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a3d0: 0xdfb00000
    ctx->pc = 0x22a3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a3d4: 0x3e00008
    ctx->pc = 0x22A3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A3D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A344u: goto label_22a344;
            case 0x22A348u: goto label_22a348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22A3DCu;
}
