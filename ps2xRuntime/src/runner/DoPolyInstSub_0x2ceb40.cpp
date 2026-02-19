#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoPolyInstSub
// Address: 0x2ceb40 - 0x2cecd8
void DoPolyInstSub_0x2ceb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ceb40u;

    // 0x2ceb40: 0x27bdffe0
    ctx->pc = 0x2ceb40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ceb44: 0xffbf0010
    ctx->pc = 0x2ceb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ceb48: 0xffb00000
    ctx->pc = 0x2ceb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ceb4c: 0x80802d
    ctx->pc = 0x2ceb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb50: 0x86020000
    ctx->pc = 0x2ceb50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ceb54: 0x28420003
    ctx->pc = 0x2ceb54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x2ceb58: 0x10400003
    ctx->pc = 0x2CEB58u;
    {
        const bool branch_taken_0x2ceb58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ceb58) {
            ctx->pc = 0x2CEB68u;
            goto label_2ceb68;
        }
    }
    ctx->pc = 0x2CEB60u;
label_2ceb60:
    // 0x2ceb60: 0x10000059
    ctx->pc = 0x2CEB60u;
    {
        const bool branch_taken_0x2ceb60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CEB64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb60) {
            ctx->pc = 0x2CECC8u;
            goto label_2cecc8;
        }
    }
    ctx->pc = 0x2CEB68u;
label_2ceb68:
    // 0x2ceb68: 0x54a00008
    ctx->pc = 0x2CEB68u;
    {
        const bool branch_taken_0x2ceb68 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ceb68) {
            ctx->pc = 0x2CEB6Cu;
            SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->pc = 0x2CEB8Cu;
            goto label_2ceb8c;
        }
    }
    ctx->pc = 0x2CEB70u;
    // 0x2ceb70: 0xc0b0608
    ctx->pc = 0x2CEB70u;
    SET_GPR_U32(ctx, 31, 0x2CEB78u);
    ctx->pc = 0x2CEB74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x2C1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbBlitSetTexture_0x2c1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB78u; }
    }
    if (ctx->pc != 0x2CEB78u) { return; }
    ctx->pc = 0x2CEB78u;
    // 0x2ceb78: 0x202d
    ctx->pc = 0x2ceb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb7c: 0x282d
    ctx->pc = 0x2ceb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb80: 0xc0b0664
    ctx->pc = 0x2CEB80u;
    SET_GPR_U32(ctx, 31, 0x2CEB88u);
    ctx->pc = 0x2CEB84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C1990u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbBlitSetDrawRegs_0x2c1990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB88u; }
    }
    if (ctx->pc != 0x2CEB88u) { return; }
    ctx->pc = 0x2CEB88u;
    // 0x2ceb88: 0x920a000a
    ctx->pc = 0x2ceb88u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_2ceb8c:
    // 0x2ceb8c: 0x8e020008
    ctx->pc = 0x2ceb8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ceb90: 0x92090009
    ctx->pc = 0x2ceb90u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x2ceb94: 0x304800ff
    ctx->pc = 0x2ceb94u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 2), 255));
    // 0x2ceb98: 0x23e02
    ctx->pc = 0x2ceb98u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 2), 24));
    // 0x2ceb9c: 0x3c020037
    ctx->pc = 0x2ceb9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ceba0: 0x8c452970
    ctx->pc = 0x2ceba0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 10608)));
    // 0x2ceba4: 0x86020000
    ctx->pc = 0x2ceba4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ceba8: 0x21840
    ctx->pc = 0x2ceba8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2cebac: 0x431021
    ctx->pc = 0x2cebacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cebb0: 0x24420001
    ctx->pc = 0x2cebb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cebb4: 0x3c041000
    ctx->pc = 0x2cebb4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2cebb8: 0x441825
    ctx->pc = 0x2cebb8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cebbc: 0xaca30000
    ctx->pc = 0x2cebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2cebc0: 0x24a50004
    ctx->pc = 0x2cebc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cebc4: 0xaca00000
    ctx->pc = 0x2cebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2cebc8: 0x24a50004
    ctx->pc = 0x2cebc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cebcc: 0xaca40000
    ctx->pc = 0x2cebccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2cebd0: 0x24a50004
    ctx->pc = 0x2cebd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cebd4: 0x3c035000
    ctx->pc = 0x2cebd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20480 << 16));
    // 0x2cebd8: 0x431025
    ctx->pc = 0x2cebd8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cebdc: 0xaca20000
    ctx->pc = 0x2cebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2cebe0: 0x24a50004
    ctx->pc = 0x2cebe0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cebe4: 0x86020000
    ctx->pc = 0x2cebe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cebe8: 0x34428000
    ctx->pc = 0x2cebe8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x2cebec: 0xaca20000
    ctx->pc = 0x2cebecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2cebf0: 0x24a50004
    ctx->pc = 0x2cebf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cebf4: 0x3c0230ae
    ctx->pc = 0x2cebf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)12462 << 16));
    // 0x2cebf8: 0x3442c000
    ctx->pc = 0x2cebf8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49152));
    // 0x2cebfc: 0xaca20000
    ctx->pc = 0x2cebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2cec00: 0x24a50004
    ctx->pc = 0x2cec00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cec04: 0x24020513
    ctx->pc = 0x2cec04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1299));
    // 0x2cec08: 0xaca20000
    ctx->pc = 0x2cec08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2cec0c: 0x24a50004
    ctx->pc = 0x2cec0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cec10: 0xaca00000
    ctx->pc = 0x2cec10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2cec14: 0x24a50004
    ctx->pc = 0x2cec14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cec18: 0x86020000
    ctx->pc = 0x2cec18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cec1c: 0x18400027
    ctx->pc = 0x2CEC1Cu;
    {
        const bool branch_taken_0x2cec1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CEC20u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cec1c) {
            ctx->pc = 0x2CECBCu;
            goto label_2cecbc;
        }
    }
    ctx->pc = 0x2CEC24u;
    // 0x2cec24: 0x0
    ctx->pc = 0x2cec24u;
    // NOP
label_2cec28:
    // 0x2cec28: 0x61940
    ctx->pc = 0x2cec28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 5));
    // 0x2cec2c: 0x8e020014
    ctx->pc = 0x2cec2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cec30: 0x621821
    ctx->pc = 0x2cec30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cec34: 0x94620018
    ctx->pc = 0x2cec34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2cec38: 0xaca20000
    ctx->pc = 0x2cec38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2cec3c: 0x24a50004
    ctx->pc = 0x2cec3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cec40: 0x9462001a
    ctx->pc = 0x2cec40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x2cec44: 0xaca20000
    ctx->pc = 0x2cec44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2cec48: 0x24a50004
    ctx->pc = 0x2cec48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cec4c: 0xaca00000
    ctx->pc = 0x2cec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2cec50: 0x24a50004
    ctx->pc = 0x2cec50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cec54: 0xaca00000
    ctx->pc = 0x2cec54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2cec58: 0x24a50004
    ctx->pc = 0x2cec58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cec5c: 0xacaa0000
    ctx->pc = 0x2cec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x2cec60: 0x24a50004
    ctx->pc = 0x2cec60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cec64: 0xaca90000
    ctx->pc = 0x2cec64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x2cec68: 0x24a50004
    ctx->pc = 0x2cec68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cec6c: 0xaca80000
    ctx->pc = 0x2cec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x2cec70: 0x24a50004
    ctx->pc = 0x2cec70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cec74: 0xaca70000
    ctx->pc = 0x2cec74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x2cec78: 0x8c640014
    ctx->pc = 0x2cec78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2cec7c: 0x1880ffb8
    ctx->pc = 0x2CEC7Cu;
    {
        const bool branch_taken_0x2cec7c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2CEC80u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x2cec7c) {
            ctx->pc = 0x2CEB60u;
            goto label_2ceb60;
        }
    }
    ctx->pc = 0x2CEC84u;
    // 0x2cec84: 0x94620010
    ctx->pc = 0x2cec84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2cec88: 0xaca20000
    ctx->pc = 0x2cec88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2cec8c: 0x24a50004
    ctx->pc = 0x2cec8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cec90: 0x94620012
    ctx->pc = 0x2cec90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x2cec94: 0xaca20000
    ctx->pc = 0x2cec94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2cec98: 0x24a50004
    ctx->pc = 0x2cec98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cec9c: 0xaca40000
    ctx->pc = 0x2cec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2ceca0: 0x24a50004
    ctx->pc = 0x2ceca0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2ceca4: 0xaca00000
    ctx->pc = 0x2ceca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ceca8: 0x24c60001
    ctx->pc = 0x2ceca8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cecac: 0x86020000
    ctx->pc = 0x2cecacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cecb0: 0xc2102a
    ctx->pc = 0x2cecb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x2cecb4: 0x1440ffdc
    ctx->pc = 0x2CECB4u;
    {
        const bool branch_taken_0x2cecb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CECB8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x2cecb4) {
            ctx->pc = 0x2CEC28u;
            goto label_2cec28;
        }
    }
    ctx->pc = 0x2CECBCu;
label_2cecbc:
    // 0x2cecbc: 0x3c020037
    ctx->pc = 0x2cecbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2cecc0: 0xac452970
    ctx->pc = 0x2cecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10608), GPR_U32(ctx, 5));
    // 0x2cecc4: 0x24020001
    ctx->pc = 0x2cecc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2cecc8:
    // 0x2cecc8: 0xdfbf0010
    ctx->pc = 0x2cecc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ceccc: 0xdfb00000
    ctx->pc = 0x2cecccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cecd0: 0x3e00008
    ctx->pc = 0x2CECD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CECD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CEB60u: goto label_2ceb60;
            case 0x2CEB68u: goto label_2ceb68;
            case 0x2CEB8Cu: goto label_2ceb8c;
            case 0x2CEC28u: goto label_2cec28;
            case 0x2CECBCu: goto label_2cecbc;
            case 0x2CECC8u: goto label_2cecc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CECD8u;
}
