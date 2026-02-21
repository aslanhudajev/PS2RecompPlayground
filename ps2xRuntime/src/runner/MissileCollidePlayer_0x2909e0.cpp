#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MissileCollidePlayer
// Address: 0x2909e0 - 0x290abc
void MissileCollidePlayer_0x2909e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2909e0u;

    // 0x2909e0: 0x27bdff60
    ctx->pc = 0x2909e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2909e4: 0xffbf0080
    ctx->pc = 0x2909e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2909e8: 0xffb70070
    ctx->pc = 0x2909e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2909ec: 0xffb60060
    ctx->pc = 0x2909ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2909f0: 0xffb50050
    ctx->pc = 0x2909f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2909f4: 0xffb40040
    ctx->pc = 0x2909f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2909f8: 0xffb30030
    ctx->pc = 0x2909f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2909fc: 0xffb20020
    ctx->pc = 0x2909fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x290a00: 0xffb10010
    ctx->pc = 0x290a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x290a04: 0xffb00000
    ctx->pc = 0x290a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x290a08: 0xe7b40090
    ctx->pc = 0x290a08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x290a0c: 0x80a02d
    ctx->pc = 0x290a0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a10: 0xa0982d
    ctx->pc = 0x290a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a14: 0xc0902d
    ctx->pc = 0x290a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a18: 0x46006506
    ctx->pc = 0x290a18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x290a1c: 0x882d
    ctx->pc = 0x290a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a20: 0x24172b00
    ctx->pc = 0x290a20u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x290a24: 0x3c020032
    ctx->pc = 0x290a24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x290a28: 0x24561bc0
    ctx->pc = 0x290a28u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x290a2c: 0x24150001
    ctx->pc = 0x290a2cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    // 0x290a30: 0x2371018
    ctx->pc = 0x290a30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x290a34: 0x0
    ctx->pc = 0x290a34u;
    // NOP
label_290a38:
    // 0x290a38: 0x568021
    ctx->pc = 0x290a38u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x290a3c: 0x8e0200fc
    ctx->pc = 0x290a3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x290a40: 0x5455000e
    ctx->pc = 0x290A40u;
    {
        const bool branch_taken_0x290a40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        if (branch_taken_0x290a40) {
            ctx->pc = 0x290A44u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x290A7Cu;
            goto label_290a7c;
        }
    }
    ctx->pc = 0x290A48u;
    // 0x290a48: 0xc60d082c
    ctx->pc = 0x290a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x290a4c: 0xc60c0828
    ctx->pc = 0x290a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290a50: 0x26040070
    ctx->pc = 0x290a50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 112));
    // 0x290a54: 0x280282d
    ctx->pc = 0x290a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a58: 0x260302d
    ctx->pc = 0x290a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a5c: 0x240382d
    ctx->pc = 0x290a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a60: 0x460ca300
    ctx->pc = 0x290a60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x290a64: 0x460da340
    ctx->pc = 0x290a64u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[13]);
    // 0x290a68: 0xc0a4202
    ctx->pc = 0x290A68u;
    SET_GPR_U32(ctx, 31, 0x290A70u);
    ctx->pc = 0x290A6Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290A70u; }
    }
    if (ctx->pc != 0x290A70u) { return; }
    ctx->pc = 0x290A70u;
    // 0x290a70: 0x14400006
    ctx->pc = 0x290A70u;
    {
        const bool branch_taken_0x290a70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x290A74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x290a70) {
            ctx->pc = 0x290A8Cu;
            goto label_290a8c;
        }
    }
    ctx->pc = 0x290A78u;
    // 0x290a78: 0x26310001
    ctx->pc = 0x290a78u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_290a7c:
    // 0x290a7c: 0x2a220004
    ctx->pc = 0x290a7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x290a80: 0x1440ffed
    ctx->pc = 0x290A80u;
    {
        const bool branch_taken_0x290a80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x290A84u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x290a80) {
            ctx->pc = 0x290A38u;
            goto label_290a38;
        }
    }
    ctx->pc = 0x290A88u;
    // 0x290a88: 0x102d
    ctx->pc = 0x290a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290a8c:
    // 0x290a8c: 0xdfbf0080
    ctx->pc = 0x290a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x290a90: 0xdfb70070
    ctx->pc = 0x290a90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x290a94: 0xdfb60060
    ctx->pc = 0x290a94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x290a98: 0xdfb50050
    ctx->pc = 0x290a98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290a9c: 0xdfb40040
    ctx->pc = 0x290a9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290aa0: 0xdfb30030
    ctx->pc = 0x290aa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290aa4: 0xdfb20020
    ctx->pc = 0x290aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290aa8: 0xdfb10010
    ctx->pc = 0x290aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290aac: 0xdfb00000
    ctx->pc = 0x290aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290ab0: 0xc7b40090
    ctx->pc = 0x290ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x290ab4: 0x3e00008
    ctx->pc = 0x290AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290AB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290A38u: goto label_290a38;
            case 0x290A7Cu: goto label_290a7c;
            case 0x290A8Cu: goto label_290a8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290ABCu;
}
