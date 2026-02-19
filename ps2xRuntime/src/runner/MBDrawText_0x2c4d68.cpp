#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDrawText
// Address: 0x2c4d68 - 0x2c4ef4
void MBDrawText_0x2c4d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c4d68u;

    // 0x2c4d68: 0x27bdffa0
    ctx->pc = 0x2c4d68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c4d6c: 0xffbf0050
    ctx->pc = 0x2c4d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c4d70: 0xffb40040
    ctx->pc = 0x2c4d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c4d74: 0xffb30030
    ctx->pc = 0x2c4d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c4d78: 0xffb20020
    ctx->pc = 0x2c4d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c4d7c: 0xffb10010
    ctx->pc = 0x2c4d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c4d80: 0xffb00000
    ctx->pc = 0x2c4d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c4d84: 0x80882d
    ctx->pc = 0x2c4d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d88: 0xa0982d
    ctx->pc = 0x2c4d88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d8c: 0x3c02003d
    ctx->pc = 0x2c4d8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4d90: 0x8c451f70
    ctx->pc = 0x2c4d90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8048)));
    // 0x2c4d94: 0x28a201f3
    ctx->pc = 0x2c4d94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 499));
    // 0x2c4d98: 0x14400004
    ctx->pc = 0x2C4D98u;
    {
        const bool branch_taken_0x2c4d98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C4D9Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d98) {
            ctx->pc = 0x2C4DACu;
            goto label_2c4dac;
        }
    }
    ctx->pc = 0x2C4DA0u;
    // 0x2c4da0: 0x3c04003b
    ctx->pc = 0x2c4da0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c4da4: 0x1000000b
    ctx->pc = 0x2C4DA4u;
    {
        const bool branch_taken_0x2c4da4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C4DA8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28400));
        if (branch_taken_0x2c4da4) {
            ctx->pc = 0x2C4DD4u;
            goto label_2c4dd4;
        }
    }
    ctx->pc = 0x2C4DACu;
label_2c4dac:
    // 0x2c4dac: 0xc0bf306
    ctx->pc = 0x2C4DACu;
    SET_GPR_U32(ctx, 31, 0x2C4DB4u);
    ctx->pc = 0x2C4DB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DB4u; }
    }
    if (ctx->pc != 0x2C4DB4u) { return; }
    ctx->pc = 0x2C4DB4u;
    // 0x2c4db4: 0x24540001
    ctx->pc = 0x2c4db4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c4db8: 0x3c02003d
    ctx->pc = 0x2c4db8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4dbc: 0x8c42c958
    ctx->pc = 0x2c4dbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953304)));
    // 0x2c4dc0: 0x2822821
    ctx->pc = 0x2c4dc0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2c4dc4: 0x28a20fff
    ctx->pc = 0x2c4dc4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4095));
    // 0x2c4dc8: 0x14400006
    ctx->pc = 0x2C4DC8u;
    {
        const bool branch_taken_0x2c4dc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C4DCCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2c4dc8) {
            ctx->pc = 0x2C4DE4u;
            goto label_2c4de4;
        }
    }
    ctx->pc = 0x2C4DD0u;
    // 0x2c4dd0: 0x24846f10
    ctx->pc = 0x2c4dd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28432));
label_2c4dd4:
    // 0x2c4dd4: 0xc0b492e
    ctx->pc = 0x2C4DD4u;
    SET_GPR_U32(ctx, 31, 0x2C4DDCu);
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DDCu; }
    }
    if (ctx->pc != 0x2C4DDCu) { return; }
    ctx->pc = 0x2C4DDCu;
    // 0x2c4ddc: 0x1000003d
    ctx->pc = 0x2C4DDCu;
    {
        const bool branch_taken_0x2c4ddc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C4DE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c4ddc) {
            ctx->pc = 0x2C4ED4u;
            goto label_2c4ed4;
        }
    }
    ctx->pc = 0x2C4DE4u;
label_2c4de4:
    // 0x2c4de4: 0x6210007
    ctx->pc = 0x2C4DE4u;
    {
        const bool branch_taken_0x2c4de4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2C4DE8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 384));
        if (branch_taken_0x2c4de4) {
            ctx->pc = 0x2C4E04u;
            goto label_2c4e04;
        }
    }
    ctx->pc = 0x2C4DECu;
    // 0x2c4dec: 0xc0b1636
    ctx->pc = 0x2C4DECu;
    SET_GPR_U32(ctx, 31, 0x2C4DF4u);
    ctx->pc = 0x2C4DF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C58D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontStringWidth_0x2c58d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DF4u; }
    }
    if (ctx->pc != 0x2C4DF4u) { return; }
    ctx->pc = 0x2C4DF4u;
    // 0x2c4df4: 0x118823
    ctx->pc = 0x2c4df4u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x2c4df8: 0x21043
    ctx->pc = 0x2c4df8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2c4dfc: 0x2228823
    ctx->pc = 0x2c4dfcu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c4e00: 0x2e620180
    ctx->pc = 0x2c4e00u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 384));
label_2c4e04:
    // 0x2c4e04: 0x14400003
    ctx->pc = 0x2C4E04u;
    {
        const bool branch_taken_0x2c4e04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C4E08u;
        SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
        if (branch_taken_0x2c4e04) {
            ctx->pc = 0x2C4E14u;
            goto label_2c4e14;
        }
    }
    ctx->pc = 0x2C4E0Cu;
    // 0x2c4e0c: 0x10000031
    ctx->pc = 0x2C4E0Cu;
    {
        const bool branch_taken_0x2c4e0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C4E10u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c4e0c) {
            ctx->pc = 0x2C4ED4u;
            goto label_2c4ed4;
        }
    }
    ctx->pc = 0x2C4E14u;
label_2c4e14:
    // 0x2c4e14: 0x8c831f70
    ctx->pc = 0x2c4e14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8048)));
    // 0x2c4e18: 0x2410002c
    ctx->pc = 0x2c4e18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 44));
    // 0x2c4e1c: 0x708018
    ctx->pc = 0x2c4e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c4e20: 0x3c02003d
    ctx->pc = 0x2c4e20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4e24: 0x2442c980
    ctx->pc = 0x2c4e24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953344));
    // 0x2c4e28: 0x2028021
    ctx->pc = 0x2c4e28u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c4e2c: 0x24630001
    ctx->pc = 0x2c4e2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c4e30: 0xac831f70
    ctx->pc = 0x2c4e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8048), GPR_U32(ctx, 3));
    // 0x2c4e34: 0xae110004
    ctx->pc = 0x2c4e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x2c4e38: 0xae130008
    ctx->pc = 0x2c4e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x2c4e3c: 0x3c020038
    ctx->pc = 0x2c4e3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4e40: 0xc440b174
    ctx->pc = 0x2c4e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4e44: 0xe600000c
    ctx->pc = 0x2c4e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2c4e48: 0x3c02003d
    ctx->pc = 0x2c4e48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4e4c: 0x9442b8a0
    ctx->pc = 0x2c4e4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294949024)));
    // 0x2c4e50: 0xa6020024
    ctx->pc = 0x2c4e50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c4e54: 0x3c020038
    ctx->pc = 0x2c4e54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4e58: 0xc440b15c
    ctx->pc = 0x2c4e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4e5c: 0xe6000014
    ctx->pc = 0x2c4e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2c4e60: 0x3c020038
    ctx->pc = 0x2c4e60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4e64: 0xc440b160
    ctx->pc = 0x2c4e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4e68: 0xe600001c
    ctx->pc = 0x2c4e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2c4e6c: 0x3c020038
    ctx->pc = 0x2c4e6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4e70: 0xc440b164
    ctx->pc = 0x2c4e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4e74: 0xe6000018
    ctx->pc = 0x2c4e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2c4e78: 0x3c020038
    ctx->pc = 0x2c4e78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4e7c: 0xc440b168
    ctx->pc = 0x2c4e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4e80: 0xe6000020
    ctx->pc = 0x2c4e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2c4e84: 0x3c11003d
    ctx->pc = 0x2c4e84u;
    SET_GPR_U32(ctx, 17, ((uint32_t)61 << 16));
    // 0x2c4e88: 0x3c02003d
    ctx->pc = 0x2c4e88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4e8c: 0x2442b958
    ctx->pc = 0x2c4e8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949208));
    // 0x2c4e90: 0x8e24c958
    ctx->pc = 0x2c4e90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294953304)));
    // 0x2c4e94: 0x822021
    ctx->pc = 0x2c4e94u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c4e98: 0xae040010
    ctx->pc = 0x2c4e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x2c4e9c: 0x3c020038
    ctx->pc = 0x2c4e9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4ea0: 0x8c42b16c
    ctx->pc = 0x2c4ea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947180)));
    // 0x2c4ea4: 0xae020028
    ctx->pc = 0x2c4ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x2c4ea8: 0x3c020038
    ctx->pc = 0x2c4ea8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4eac: 0x8c42b170
    ctx->pc = 0x2c4eacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947184)));
    // 0x2c4eb0: 0xae020000
    ctx->pc = 0x2c4eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c4eb4: 0x2402ffff
    ctx->pc = 0x2c4eb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c4eb8: 0xa6020026
    ctx->pc = 0x2c4eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c4ebc: 0xc0bf2c1
    ctx->pc = 0x2C4EBCu;
    SET_GPR_U32(ctx, 31, 0x2C4EC4u);
    ctx->pc = 0x2C4EC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4EC4u; }
    }
    if (ctx->pc != 0x2C4EC4u) { return; }
    ctx->pc = 0x2C4EC4u;
    // 0x2c4ec4: 0x8e22c958
    ctx->pc = 0x2c4ec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294953304)));
    // 0x2c4ec8: 0x2821021
    ctx->pc = 0x2c4ec8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2c4ecc: 0xae22c958
    ctx->pc = 0x2c4eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953304), GPR_U32(ctx, 2));
    // 0x2c4ed0: 0x200102d
    ctx->pc = 0x2c4ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4ed4:
    // 0x2c4ed4: 0xdfbf0050
    ctx->pc = 0x2c4ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4ed8: 0xdfb40040
    ctx->pc = 0x2c4ed8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4edc: 0xdfb30030
    ctx->pc = 0x2c4edcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4ee0: 0xdfb20020
    ctx->pc = 0x2c4ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4ee4: 0xdfb10010
    ctx->pc = 0x2c4ee4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4ee8: 0xdfb00000
    ctx->pc = 0x2c4ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4eec: 0x3e00008
    ctx->pc = 0x2C4EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4EF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C4DACu: goto label_2c4dac;
            case 0x2C4DD4u: goto label_2c4dd4;
            case 0x2C4DE4u: goto label_2c4de4;
            case 0x2C4E04u: goto label_2c4e04;
            case 0x2C4E14u: goto label_2c4e14;
            case 0x2C4ED4u: goto label_2c4ed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C4EF4u;
}
