#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerDamagedItem
// Address: 0x290f20 - 0x29108c
void PlayerDamagedItem_0x290f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x290f20u;

    // 0x290f20: 0x27bdffb0
    ctx->pc = 0x290f20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x290f24: 0xffbf0040
    ctx->pc = 0x290f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x290f28: 0xffb10030
    ctx->pc = 0x290f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x290f2c: 0xffb00020
    ctx->pc = 0x290f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x290f30: 0xa0802d
    ctx->pc = 0x290f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f34: 0x8e020000
    ctx->pc = 0x290f34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x290f38: 0x8c430000
    ctx->pc = 0x290f38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290f3c: 0x24020001
    ctx->pc = 0x290f3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x290f40: 0x1062002a
    ctx->pc = 0x290F40u;
    {
        const bool branch_taken_0x290f40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x290F44u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x290f40) {
            ctx->pc = 0x290FECu;
            goto label_290fec;
        }
    }
    ctx->pc = 0x290F48u;
    // 0x290f48: 0x24020003
    ctx->pc = 0x290f48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x290f4c: 0x1462004b
    ctx->pc = 0x290F4Cu;
    {
        const bool branch_taken_0x290f4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x290F50u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x290f4c) {
            ctx->pc = 0x29107Cu;
            goto label_29107c;
        }
    }
    ctx->pc = 0x290F54u;
    // 0x290f54: 0x10c00009
    ctx->pc = 0x290F54u;
    {
        const bool branch_taken_0x290f54 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x290F58u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
        if (branch_taken_0x290f54) {
            ctx->pc = 0x290F7Cu;
            goto label_290f7c;
        }
    }
    ctx->pc = 0x290F5Cu;
    // 0x290f5c: 0xae2008f0
    ctx->pc = 0x290f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2288), GPR_U32(ctx, 0));
    // 0x290f60: 0x8e22000c
    ctx->pc = 0x290f60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x290f64: 0x431018
    ctx->pc = 0x290f64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x290f68: 0x26230b3c
    ctx->pc = 0x290f68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 2876));
    // 0x290f6c: 0x621821
    ctx->pc = 0x290f6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x290f70: 0x8c620000
    ctx->pc = 0x290f70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x290f74: 0x24420001
    ctx->pc = 0x290f74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x290f78: 0xac620000
    ctx->pc = 0x290f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_290f7c:
    // 0x290f7c: 0x860400f0
    ctx->pc = 0x290f7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x290f80: 0x2402fffe
    ctx->pc = 0x290f80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x290f84: 0x14820003
    ctx->pc = 0x290F84u;
    {
        const bool branch_taken_0x290f84 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x290F88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x290f84) {
            ctx->pc = 0x290F94u;
            goto label_290f94;
        }
    }
    ctx->pc = 0x290F8Cu;
    // 0x290f8c: 0x10000007
    ctx->pc = 0x290F8Cu;
    {
        const bool branch_taken_0x290f8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290F90u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x290f8c) {
            ctx->pc = 0x290FACu;
            goto label_290fac;
        }
    }
    ctx->pc = 0x290F94u;
label_290f94:
    // 0x290f94: 0x14820003
    ctx->pc = 0x290F94u;
    {
        const bool branch_taken_0x290f94 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x290F98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x290f94) {
            ctx->pc = 0x290FA4u;
            goto label_290fa4;
        }
    }
    ctx->pc = 0x290F9Cu;
    // 0x290f9c: 0x10000003
    ctx->pc = 0x290F9Cu;
    {
        const bool branch_taken_0x290f9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290FA0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x290f9c) {
            ctx->pc = 0x290FACu;
            goto label_290fac;
        }
    }
    ctx->pc = 0x290FA4u;
label_290fa4:
    // 0x290fa4: 0x44102a
    ctx->pc = 0x290fa4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x290fa8: 0x2200a
    ctx->pc = 0x290fa8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_290fac:
    // 0x290fac: 0x10c00003
    ctx->pc = 0x290FACu;
    {
        const bool branch_taken_0x290fac = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x290FB0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x290fac) {
            ctx->pc = 0x290FBCu;
            goto label_290fbc;
        }
    }
    ctx->pc = 0x290FB4u;
    // 0x290fb4: 0x10000003
    ctx->pc = 0x290FB4u;
    {
        const bool branch_taken_0x290fb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290FB8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957688));
        if (branch_taken_0x290fb4) {
            ctx->pc = 0x290FC4u;
            goto label_290fc4;
        }
    }
    ctx->pc = 0x290FBCu;
label_290fbc:
    // 0x290fbc: 0x3c030033
    ctx->pc = 0x290fbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x290fc0: 0x2463d9f0
    ctx->pc = 0x290fc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957552));
label_290fc4:
    // 0x290fc4: 0x41080
    ctx->pc = 0x290fc4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x290fc8: 0x431021
    ctx->pc = 0x290fc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290fcc: 0x8c450000
    ctx->pc = 0x290fccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290fd0: 0x51080
    ctx->pc = 0x290fd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x290fd4: 0x8e240000
    ctx->pc = 0x290fd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x290fd8: 0x452821
    ctx->pc = 0x290fd8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x290fdc: 0xc08d26a
    ctx->pc = 0x290FDCu;
    SET_GPR_U32(ctx, 31, 0x290FE4u);
    ctx->pc = 0x290FE0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2349A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddExp_0x2349a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290FE4u; }
    }
    if (ctx->pc != 0x290FE4u) { return; }
    ctx->pc = 0x290FE4u;
    // 0x290fe4: 0x10000025
    ctx->pc = 0x290FE4u;
    {
        const bool branch_taken_0x290fe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290FE8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x290fe4) {
            ctx->pc = 0x29107Cu;
            goto label_29107c;
        }
    }
    ctx->pc = 0x290FECu;
label_290fec:
    // 0x290fec: 0x860200da
    ctx->pc = 0x290fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 218)));
    // 0x290ff0: 0x1c400022
    ctx->pc = 0x290FF0u;
    {
        const bool branch_taken_0x290ff0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x290FF4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x290ff0) {
            ctx->pc = 0x29107Cu;
            goto label_29107c;
        }
    }
    ctx->pc = 0x290FF8u;
    // 0x290ff8: 0x8e040000
    ctx->pc = 0x290ff8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x290ffc: 0x8c830004
    ctx->pc = 0x290ffcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x291000: 0x24020004
    ctx->pc = 0x291000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x291004: 0x5462001e
    ctx->pc = 0x291004u;
    {
        const bool branch_taken_0x291004 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x291004) {
            ctx->pc = 0x291008u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x291080u;
            goto label_291080;
        }
    }
    ctx->pc = 0x29100Cu;
    // 0x29100c: 0x8c86003c
    ctx->pc = 0x29100cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x291010: 0xc6000050
    ctx->pc = 0x291010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291014: 0xe7a00000
    ctx->pc = 0x291014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x291018: 0xc6000054
    ctx->pc = 0x291018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29101c: 0xe7a00004
    ctx->pc = 0x29101cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x291020: 0xc6000058
    ctx->pc = 0x291020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291024: 0xe7a00008
    ctx->pc = 0x291024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x291028: 0xc6200060
    ctx->pc = 0x291028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29102c: 0xe7a00010
    ctx->pc = 0x29102cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x291030: 0xc6200064
    ctx->pc = 0x291030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291034: 0xe7a00014
    ctx->pc = 0x291034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x291038: 0xc6200068
    ctx->pc = 0x291038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29103c: 0xe7a00018
    ctx->pc = 0x29103cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x291040: 0x8e240000
    ctx->pc = 0x291040u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x291044: 0x3a0282d
    ctx->pc = 0x291044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291048: 0x3c013f4c
    ctx->pc = 0x291048u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x29104c: 0x3421cccd
    ctx->pc = 0x29104cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x291050: 0x44816000
    ctx->pc = 0x291050u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x291054: 0xc08d120
    ctx->pc = 0x291054u;
    SET_GPR_U32(ctx, 31, 0x29105Cu);
    ctx->pc = 0x291058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234480u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_magic_0x234480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29105Cu; }
    }
    if (ctx->pc != 0x29105Cu) { return; }
    ctx->pc = 0x29105Cu;
    // 0x29105c: 0x2404000e
    ctx->pc = 0x29105cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    // 0x291060: 0x8e250000
    ctx->pc = 0x291060u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x291064: 0xc0a3a1c
    ctx->pc = 0x291064u;
    SET_GPR_U32(ctx, 31, 0x29106Cu);
    ctx->pc = 0x291068u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29106Cu; }
    }
    if (ctx->pc != 0x29106Cu) { return; }
    ctx->pc = 0x29106Cu;
    // 0x29106c: 0x200202d
    ctx->pc = 0x29106cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291070: 0xc094dcc
    ctx->pc = 0x291070u;
    SET_GPR_U32(ctx, 31, 0x291078u);
    ctx->pc = 0x291074u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x253730u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem_0x253730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291078u; }
    }
    if (ctx->pc != 0x291078u) { return; }
    ctx->pc = 0x291078u;
    // 0x291078: 0xdfbf0040
    ctx->pc = 0x291078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29107c:
    // 0x29107c: 0xdfb10030
    ctx->pc = 0x29107cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_291080:
    // 0x291080: 0xdfb00020
    ctx->pc = 0x291080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291084: 0x3e00008
    ctx->pc = 0x291084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291088u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290F7Cu: goto label_290f7c;
            case 0x290F94u: goto label_290f94;
            case 0x290FA4u: goto label_290fa4;
            case 0x290FACu: goto label_290fac;
            case 0x290FBCu: goto label_290fbc;
            case 0x290FC4u: goto label_290fc4;
            case 0x290FECu: goto label_290fec;
            case 0x29107Cu: goto label_29107c;
            case 0x291080u: goto label_291080;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29108Cu;
}
