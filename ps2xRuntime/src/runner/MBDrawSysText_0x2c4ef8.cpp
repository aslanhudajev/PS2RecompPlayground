#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDrawSysText
// Address: 0x2c4ef8 - 0x2c504c
void MBDrawSysText_0x2c4ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c4ef8u;

    // 0x2c4ef8: 0x27bdffa0
    ctx->pc = 0x2c4ef8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c4efc: 0xffbf0050
    ctx->pc = 0x2c4efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c4f00: 0xffb40040
    ctx->pc = 0x2c4f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c4f04: 0xffb30030
    ctx->pc = 0x2c4f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c4f08: 0xffb20020
    ctx->pc = 0x2c4f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c4f0c: 0xffb10010
    ctx->pc = 0x2c4f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c4f10: 0xffb00000
    ctx->pc = 0x2c4f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c4f14: 0x80882d
    ctx->pc = 0x2c4f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f18: 0xa0982d
    ctx->pc = 0x2c4f18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f1c: 0x3c02003d
    ctx->pc = 0x2c4f1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4f20: 0x8c421f70
    ctx->pc = 0x2c4f20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8048)));
    // 0x2c4f24: 0x284201f3
    ctx->pc = 0x2c4f24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 499));
    // 0x2c4f28: 0x10400014
    ctx->pc = 0x2C4F28u;
    {
        const bool branch_taken_0x2c4f28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C4F2Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c4f28) {
            ctx->pc = 0x2C4F7Cu;
            goto label_2c4f7c;
        }
    }
    ctx->pc = 0x2C4F30u;
    // 0x2c4f30: 0xc0bf306
    ctx->pc = 0x2C4F30u;
    SET_GPR_U32(ctx, 31, 0x2C4F38u);
    ctx->pc = 0x2C4F34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F38u; }
    }
    if (ctx->pc != 0x2C4F38u) { return; }
    ctx->pc = 0x2C4F38u;
    // 0x2c4f38: 0x24540001
    ctx->pc = 0x2c4f38u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c4f3c: 0x3c02003d
    ctx->pc = 0x2c4f3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4f40: 0x8c42c958
    ctx->pc = 0x2c4f40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953304)));
    // 0x2c4f44: 0x2821021
    ctx->pc = 0x2c4f44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2c4f48: 0x28420fff
    ctx->pc = 0x2c4f48u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4095));
    // 0x2c4f4c: 0x10400037
    ctx->pc = 0x2C4F4Cu;
    {
        const bool branch_taken_0x2c4f4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C4F50u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c4f4c) {
            ctx->pc = 0x2C502Cu;
            goto label_2c502c;
        }
    }
    ctx->pc = 0x2C4F54u;
    // 0x2c4f54: 0x6210007
    ctx->pc = 0x2C4F54u;
    {
        const bool branch_taken_0x2c4f54 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2C4F58u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 384));
        if (branch_taken_0x2c4f54) {
            ctx->pc = 0x2C4F74u;
            goto label_2c4f74;
        }
    }
    ctx->pc = 0x2C4F5Cu;
    // 0x2c4f5c: 0xc0b1636
    ctx->pc = 0x2C4F5Cu;
    SET_GPR_U32(ctx, 31, 0x2C4F64u);
    ctx->pc = 0x2C4F60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C58D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontStringWidth_0x2c58d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F64u; }
    }
    if (ctx->pc != 0x2C4F64u) { return; }
    ctx->pc = 0x2C4F64u;
    // 0x2c4f64: 0x118823
    ctx->pc = 0x2c4f64u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x2c4f68: 0x21043
    ctx->pc = 0x2c4f68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2c4f6c: 0x2228823
    ctx->pc = 0x2c4f6cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c4f70: 0x2e620180
    ctx->pc = 0x2c4f70u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 384));
label_2c4f74:
    // 0x2c4f74: 0x14400003
    ctx->pc = 0x2C4F74u;
    {
        const bool branch_taken_0x2c4f74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C4F78u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 512));
        if (branch_taken_0x2c4f74) {
            ctx->pc = 0x2C4F84u;
            goto label_2c4f84;
        }
    }
    ctx->pc = 0x2C4F7Cu;
label_2c4f7c:
    // 0x2c4f7c: 0x1000002b
    ctx->pc = 0x2C4F7Cu;
    {
        const bool branch_taken_0x2c4f7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C4F80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c4f7c) {
            ctx->pc = 0x2C502Cu;
            goto label_2c502c;
        }
    }
    ctx->pc = 0x2C4F84u;
label_2c4f84:
    // 0x2c4f84: 0x1040fffd
    ctx->pc = 0x2C4F84u;
    {
        const bool branch_taken_0x2c4f84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C4F88u;
        SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
        if (branch_taken_0x2c4f84) {
            ctx->pc = 0x2C4F7Cu;
            goto label_2c4f7c;
        }
    }
    ctx->pc = 0x2C4F8Cu;
    // 0x2c4f8c: 0x8c831f70
    ctx->pc = 0x2c4f8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8048)));
    // 0x2c4f90: 0x2410002c
    ctx->pc = 0x2c4f90u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 44));
    // 0x2c4f94: 0x708018
    ctx->pc = 0x2c4f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c4f98: 0x3c02003d
    ctx->pc = 0x2c4f98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4f9c: 0x2442c980
    ctx->pc = 0x2c4f9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953344));
    // 0x2c4fa0: 0x2028021
    ctx->pc = 0x2c4fa0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c4fa4: 0x24630001
    ctx->pc = 0x2c4fa4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c4fa8: 0xac831f70
    ctx->pc = 0x2c4fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8048), GPR_U32(ctx, 3));
    // 0x2c4fac: 0xae110004
    ctx->pc = 0x2c4facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x2c4fb0: 0xae130008
    ctx->pc = 0x2c4fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x2c4fb4: 0x3c020038
    ctx->pc = 0x2c4fb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4fb8: 0xc440b174
    ctx->pc = 0x2c4fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4fbc: 0xe600000c
    ctx->pc = 0x2c4fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2c4fc0: 0xa6000024
    ctx->pc = 0x2c4fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4fc4: 0x3c013f80
    ctx->pc = 0x2c4fc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c4fc8: 0x44810000
    ctx->pc = 0x2c4fc8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c4fcc: 0xe600001c
    ctx->pc = 0x2c4fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2c4fd0: 0xe6000014
    ctx->pc = 0x2c4fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2c4fd4: 0xe6000020
    ctx->pc = 0x2c4fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2c4fd8: 0xe6000018
    ctx->pc = 0x2c4fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2c4fdc: 0x3c11003d
    ctx->pc = 0x2c4fdcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)61 << 16));
    // 0x2c4fe0: 0x3c02003d
    ctx->pc = 0x2c4fe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4fe4: 0x2442b958
    ctx->pc = 0x2c4fe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949208));
    // 0x2c4fe8: 0x8e24c958
    ctx->pc = 0x2c4fe8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294953304)));
    // 0x2c4fec: 0x822021
    ctx->pc = 0x2c4fecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c4ff0: 0xae040010
    ctx->pc = 0x2c4ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x2c4ff4: 0x3c020038
    ctx->pc = 0x2c4ff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4ff8: 0x8c42b16c
    ctx->pc = 0x2c4ff8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947180)));
    // 0x2c4ffc: 0xae020028
    ctx->pc = 0x2c4ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x2c5000: 0x3c020038
    ctx->pc = 0x2c5000u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c5004: 0x8c42b170
    ctx->pc = 0x2c5004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947184)));
    // 0x2c5008: 0xae020000
    ctx->pc = 0x2c5008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c500c: 0x2402ffff
    ctx->pc = 0x2c500cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5010: 0xa6020026
    ctx->pc = 0x2c5010u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c5014: 0xc0bf2c1
    ctx->pc = 0x2C5014u;
    SET_GPR_U32(ctx, 31, 0x2C501Cu);
    ctx->pc = 0x2C5018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C501Cu; }
    }
    if (ctx->pc != 0x2C501Cu) { return; }
    ctx->pc = 0x2C501Cu;
    // 0x2c501c: 0x8e22c958
    ctx->pc = 0x2c501cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294953304)));
    // 0x2c5020: 0x2821021
    ctx->pc = 0x2c5020u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2c5024: 0xae22c958
    ctx->pc = 0x2c5024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953304), GPR_U32(ctx, 2));
    // 0x2c5028: 0x200102d
    ctx->pc = 0x2c5028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c502c:
    // 0x2c502c: 0xdfbf0050
    ctx->pc = 0x2c502cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5030: 0xdfb40040
    ctx->pc = 0x2c5030u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5034: 0xdfb30030
    ctx->pc = 0x2c5034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5038: 0xdfb20020
    ctx->pc = 0x2c5038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c503c: 0xdfb10010
    ctx->pc = 0x2c503cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5040: 0xdfb00000
    ctx->pc = 0x2c5040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5044: 0x3e00008
    ctx->pc = 0x2C5044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5048u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C4F74u: goto label_2c4f74;
            case 0x2C4F7Cu: goto label_2c4f7c;
            case 0x2C4F84u: goto label_2c4f84;
            case 0x2C502Cu: goto label_2c502c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C504Cu;
}
