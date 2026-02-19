#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitGSState
// Address: 0x2a6240 - 0x2a636c
void pbInitGSState_0x2a6240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a6240u;

    // 0x2a6240: 0x27bdffb0
    ctx->pc = 0x2a6240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a6244: 0xffbf0040
    ctx->pc = 0x2a6244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a6248: 0xffbe0030
    ctx->pc = 0x2a6248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x2a624c: 0xffb00020
    ctx->pc = 0x2a624cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a6250: 0x3a0f02d
    ctx->pc = 0x2a6250u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6254: 0x3c100036
    ctx->pc = 0x2a6254u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a6258: 0x8e10dee0
    ctx->pc = 0x2a6258u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a625c: 0x8e030020
    ctx->pc = 0x2a625cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6260: 0x8e020020
    ctx->pc = 0x2a6260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6264: 0x8e030020
    ctx->pc = 0x2a6264u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6268: 0x8c640098
    ctx->pc = 0x2a6268u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x2a626c: 0x24830001
    ctx->pc = 0x2a626cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a6270: 0xac430098
    ctx->pc = 0x2a6270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 3));
    // 0x2a6274: 0xc0b85c4
    ctx->pc = 0x2A6274u;
    SET_GPR_U32(ctx, 31, 0x2A627Cu);
    ctx->pc = 0x2E1710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsGetIMR_0x2e1710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A627Cu; }
    }
    if (ctx->pc != 0x2A627Cu) { return; }
    ctx->pc = 0x2A627Cu;
    // 0x2a627c: 0xffc20000
    ctx->pc = 0x2a627cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x2a6280: 0x202d
    ctx->pc = 0x2a6280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6284: 0x3c05002b
    ctx->pc = 0x2a6284u;
    SET_GPR_U32(ctx, 5, ((uint32_t)43 << 16));
    // 0x2a6288: 0x24a5b4b8
    ctx->pc = 0x2a6288u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948024));
    // 0x2a628c: 0x302d
    ctx->pc = 0x2a628cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6290: 0xc0c0cb0
    ctx->pc = 0x2A6290u;
    SET_GPR_U32(ctx, 31, 0x2A6298u);
    ctx->pc = 0x3032C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddIntcHandler_0x3032c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6298u; }
    }
    if (ctx->pc != 0x2A6298u) { return; }
    ctx->pc = 0x2A6298u;
    // 0x2a6298: 0x8e030020
    ctx->pc = 0x2a6298u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a629c: 0xac62009c
    ctx->pc = 0x2a629cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
    // 0x2a62a0: 0x202d
    ctx->pc = 0x2a62a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a62a4: 0xc0c102e
    ctx->pc = 0x2A62A4u;
    SET_GPR_U32(ctx, 31, 0x2A62ACu);
    ctx->pc = 0x3040B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnableIntc_0x3040b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A62ACu; }
    }
    if (ctx->pc != 0x2A62ACu) { return; }
    ctx->pc = 0x2A62ACu;
    // 0x2a62ac: 0xc0b85c4
    ctx->pc = 0x2A62ACu;
    SET_GPR_U32(ctx, 31, 0x2A62B4u);
    ctx->pc = 0x2E1710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsGetIMR_0x2e1710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A62B4u; }
    }
    if (ctx->pc != 0x2A62B4u) { return; }
    ctx->pc = 0x2A62B4u;
    // 0x2a62b4: 0xffc20008
    ctx->pc = 0x2a62b4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 2));
    // 0x2a62b8: 0xdfc20008
    ctx->pc = 0x2a62b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a62bc: 0x2403feff
    ctx->pc = 0x2a62bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2a62c0: 0x431024
    ctx->pc = 0x2a62c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a62c4: 0xffc20010
    ctx->pc = 0x2a62c4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 2));
    // 0x2a62c8: 0xdfc40010
    ctx->pc = 0x2a62c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a62cc: 0xc0b84d8
    ctx->pc = 0x2A62CCu;
    SET_GPR_U32(ctx, 31, 0x2A62D4u);
    ctx->pc = 0x2E1360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsPutIMR_0x2e1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A62D4u; }
    }
    if (ctx->pc != 0x2A62D4u) { return; }
    ctx->pc = 0x2A62D4u;
    // 0x2a62d4: 0xffc20018
    ctx->pc = 0x2a62d4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 2));
    // 0x2a62d8: 0x8e020020
    ctx->pc = 0x2a62d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a62dc: 0x8c430098
    ctx->pc = 0x2a62dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2a62e0: 0x24020001
    ctx->pc = 0x2a62e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a62e4: 0x14620006
    ctx->pc = 0x2A62E4u;
    {
        const bool branch_taken_0x2a62e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2a62e4) {
            ctx->pc = 0x2A6300u;
            goto label_2a6300;
        }
    }
    ctx->pc = 0x2A62ECu;
    // 0x2a62ec: 0x8e020020
    ctx->pc = 0x2a62ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a62f0: 0xdfc30000
    ctx->pc = 0x2a62f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a62f4: 0x3203c
    ctx->pc = 0x2a62f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a62f8: 0x4203f
    ctx->pc = 0x2a62f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2a62fc: 0xac4400a4
    ctx->pc = 0x2a62fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 4));
label_2a6300:
    // 0x2a6300: 0x8e020020
    ctx->pc = 0x2a6300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6304: 0xdfc30000
    ctx->pc = 0x2a6304u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6308: 0x3203c
    ctx->pc = 0x2a6308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a630c: 0x4203f
    ctx->pc = 0x2a630cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2a6310: 0xac4400a8
    ctx->pc = 0x2a6310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 4));
    // 0x2a6314: 0x8e020020
    ctx->pc = 0x2a6314u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6318: 0xdfc30008
    ctx->pc = 0x2a6318u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a631c: 0x3203c
    ctx->pc = 0x2a631cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a6320: 0x4203f
    ctx->pc = 0x2a6320u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2a6324: 0xac4400ac
    ctx->pc = 0x2a6324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 4));
    // 0x2a6328: 0x8e020020
    ctx->pc = 0x2a6328u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a632c: 0xdfc30010
    ctx->pc = 0x2a632cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6330: 0x3203c
    ctx->pc = 0x2a6330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a6334: 0x4203f
    ctx->pc = 0x2a6334u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2a6338: 0xac4400b0
    ctx->pc = 0x2a6338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 4));
    // 0x2a633c: 0x8e020020
    ctx->pc = 0x2a633cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6340: 0xdfc30018
    ctx->pc = 0x2a6340u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a6344: 0x3203c
    ctx->pc = 0x2a6344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a6348: 0x4203f
    ctx->pc = 0x2a6348u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2a634c: 0xac4400b4
    ctx->pc = 0x2a634cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 4));
    // 0x2a6350: 0x3c0e82d
    ctx->pc = 0x2a6350u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6354: 0xdfbf0040
    ctx->pc = 0x2a6354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6358: 0xdfbe0030
    ctx->pc = 0x2a6358u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a635c: 0xdfb00020
    ctx->pc = 0x2a635cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6360: 0x27bd0050
    ctx->pc = 0x2a6360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a6364: 0x3e00008
    ctx->pc = 0x2A6364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A6300u: goto label_2a6300;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A636Cu;
}
