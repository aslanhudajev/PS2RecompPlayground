#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetPlayerStartPos
// Address: 0x2508a0 - 0x2509a0
void SetPlayerStartPos_0x2508a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2508a0u;

    // 0x2508a0: 0x27bdffe0
    ctx->pc = 0x2508a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2508a4: 0xffbf0010
    ctx->pc = 0x2508a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2508a8: 0xffb00000
    ctx->pc = 0x2508a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2508ac: 0x3c020034
    ctx->pc = 0x2508acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2508b0: 0x8c42d310
    ctx->pc = 0x2508b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
    // 0x2508b4: 0x44102a
    ctx->pc = 0x2508b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2508b8: 0x802d
    ctx->pc = 0x2508b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2508bc: 0x82800a
    ctx->pc = 0x2508bcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 4));
    // 0x2508c0: 0x3c030033
    ctx->pc = 0x2508c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x2508c4: 0x24634ac0
    ctx->pc = 0x2508c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19136));
    // 0x2508c8: 0x2402000c
    ctx->pc = 0x2508c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2508cc: 0x2021018
    ctx->pc = 0x2508ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2508d0: 0x621821
    ctx->pc = 0x2508d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2508d4: 0xc4610004
    ctx->pc = 0x2508d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2508d8: 0x3c01c7c3
    ctx->pc = 0x2508d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51139 << 16));
    // 0x2508dc: 0x34215000
    ctx->pc = 0x2508dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x2508e0: 0x44810000
    ctx->pc = 0x2508e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2508e4: 0x46000836
    ctx->pc = 0x2508e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2508e8: 0x0
    ctx->pc = 0x2508e8u;
    // NOP
    // 0x2508ec: 0x45030001
    ctx->pc = 0x2508ECu;
    {
        const bool branch_taken_0x2508ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2508ec) {
            ctx->pc = 0x2508F0u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2508F4u;
            goto label_2508f4;
        }
    }
    ctx->pc = 0x2508F4u;
label_2508f4:
    // 0x2508f4: 0x3c030034
    ctx->pc = 0x2508f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2508f8: 0x2463fb38
    ctx->pc = 0x2508f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966072));
    // 0x2508fc: 0x101080
    ctx->pc = 0x2508fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x250900: 0x431021
    ctx->pc = 0x250900u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x250904: 0xc09dd74
    ctx->pc = 0x250904u;
    SET_GPR_U32(ctx, 31, 0x25090Cu);
    ctx->pc = 0x250908u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2775D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldOpen_0x2775d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25090Cu; }
    }
    if (ctx->pc != 0x25090Cu) { return; }
    ctx->pc = 0x25090Cu;
    // 0x25090c: 0x2800a
    ctx->pc = 0x25090cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    // 0x250910: 0x3c050033
    ctx->pc = 0x250910u;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x250914: 0x24a6c7c8
    ctx->pc = 0x250914u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 4294952904));
    // 0x250918: 0x3c020033
    ctx->pc = 0x250918u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x25091c: 0x24424ac0
    ctx->pc = 0x25091cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19136));
    // 0x250920: 0x2404000c
    ctx->pc = 0x250920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x250924: 0x2042018
    ctx->pc = 0x250924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x250928: 0x821821
    ctx->pc = 0x250928u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25092c: 0xc4600000
    ctx->pc = 0x25092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250930: 0xe4a0c7c8
    ctx->pc = 0x250930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294952904), bits); }
    // 0x250934: 0x441821
    ctx->pc = 0x250934u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x250938: 0xc4600004
    ctx->pc = 0x250938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25093c: 0xe4c00004
    ctx->pc = 0x25093cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x250940: 0x60102d
    ctx->pc = 0x250940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250944: 0xc4400008
    ctx->pc = 0x250944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250948: 0xe4c00008
    ctx->pc = 0x250948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x25094c: 0x3c040033
    ctx->pc = 0x25094cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x250950: 0x3c020034
    ctx->pc = 0x250950u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x250954: 0x2442d2d8
    ctx->pc = 0x250954u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955736));
    // 0x250958: 0x101880
    ctx->pc = 0x250958u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x25095c: 0x621021
    ctx->pc = 0x25095cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250960: 0xc4400000
    ctx->pc = 0x250960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250964: 0xe480c7d4
    ctx->pc = 0x250964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294952916), bits); }
    // 0x250968: 0x3c040034
    ctx->pc = 0x250968u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x25096c: 0x2484d1d8
    ctx->pc = 0x25096cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955480));
    // 0x250970: 0x641821
    ctx->pc = 0x250970u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x250974: 0x8c620000
    ctx->pc = 0x250974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250978: 0x2800a
    ctx->pc = 0x250978u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    // 0x25097c: 0x3c030034
    ctx->pc = 0x25097cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x250980: 0x101080
    ctx->pc = 0x250980u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x250984: 0x441021
    ctx->pc = 0x250984u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x250988: 0x8c420000
    ctx->pc = 0x250988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25098c: 0xac628b74
    ctx->pc = 0x25098cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937460), GPR_U32(ctx, 2));
    // 0x250990: 0xdfbf0010
    ctx->pc = 0x250990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250994: 0xdfb00000
    ctx->pc = 0x250994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250998: 0x3e00008
    ctx->pc = 0x250998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25099Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2508F4u: goto label_2508f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2509A0u;
}
