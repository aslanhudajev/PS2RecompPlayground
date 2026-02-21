#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_exit
// Address: 0x232bc8 - 0x232f3c
void do_exit_0x232bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x232bc8u;

    // 0x232bc8: 0x27bdffb0
    ctx->pc = 0x232bc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x232bcc: 0xffbf0040
    ctx->pc = 0x232bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x232bd0: 0xffb20030
    ctx->pc = 0x232bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x232bd4: 0xffb10020
    ctx->pc = 0x232bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x232bd8: 0xffb00010
    ctx->pc = 0x232bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x232bdc: 0x80802d
    ctx->pc = 0x232bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232be0: 0xc08a330
    ctx->pc = 0x232BE0u;
    SET_GPR_U32(ctx, 31, 0x232BE8u);
    ctx->pc = 0x232BE4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x228CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FireScrollActive_0x228cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232BE8u; }
    }
    if (ctx->pc != 0x232BE8u) { return; }
    ctx->pc = 0x232BE8u;
    // 0x232be8: 0x144000cf
    ctx->pc = 0x232BE8u;
    {
        const bool branch_taken_0x232be8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x232BECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x232be8) {
            ctx->pc = 0x232F28u;
            goto label_232f28;
        }
    }
    ctx->pc = 0x232BF0u;
    // 0x232bf0: 0x860201ca
    ctx->pc = 0x232bf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 458)));
    // 0x232bf4: 0x1440005e
    ctx->pc = 0x232BF4u;
    {
        const bool branch_taken_0x232bf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x232BF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x232bf4) {
            ctx->pc = 0x232D70u;
            goto label_232d70;
        }
    }
    ctx->pc = 0x232BFCu;
    // 0x232bfc: 0x1220005b
    ctx->pc = 0x232BFCu;
    {
        const bool branch_taken_0x232bfc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x232C00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x232bfc) {
            ctx->pc = 0x232D6Cu;
            goto label_232d6c;
        }
    }
    ctx->pc = 0x232C04u;
    // 0x232c04: 0x8c4207bc
    ctx->pc = 0x232c04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x232c08: 0x14400002
    ctx->pc = 0x232C08u;
    {
        const bool branch_taken_0x232c08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x232C0Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x232c08) {
            ctx->pc = 0x232C14u;
            goto label_232c14;
        }
    }
    ctx->pc = 0x232C10u;
    // 0x232c10: 0x24030032
    ctx->pc = 0x232c10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 50));
label_232c14:
    // 0x232c14: 0xa60301ca
    ctx->pc = 0x232c14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 458), (uint16_t)GPR_U32(ctx, 3));
    // 0x232c18: 0x3c120032
    ctx->pc = 0x232c18u;
    SET_GPR_U32(ctx, 18, ((uint32_t)50 << 16));
    // 0x232c1c: 0x8e420810
    ctx->pc = 0x232c1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2064)));
    // 0x232c20: 0x54400008
    ctx->pc = 0x232C20u;
    {
        const bool branch_taken_0x232c20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x232c20) {
            ctx->pc = 0x232C24u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x232C44u;
            goto label_232c44;
        }
    }
    ctx->pc = 0x232C28u;
    // 0x232c28: 0xc0981e0
    ctx->pc = 0x232C28u;
    SET_GPR_U32(ctx, 31, 0x232C30u);
    ctx->pc = 0x232C2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
    ctx->pc = 0x260780u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerExit_0x260780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232C30u; }
    }
    if (ctx->pc != 0x232C30u) { return; }
    ctx->pc = 0x232C30u;
    // 0x232c30: 0xc09dda8
    ctx->pc = 0x232C30u;
    SET_GPR_U32(ctx, 31, 0x232C38u);
    ctx->pc = 0x2776A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoWaveEndAudio_0x2776a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232C38u; }
    }
    if (ctx->pc != 0x232C38u) { return; }
    ctx->pc = 0x232C38u;
    // 0x232c38: 0x24020001
    ctx->pc = 0x232c38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x232c3c: 0xae420810
    ctx->pc = 0x232c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 2));
    // 0x232c40: 0xc600088c
    ctx->pc = 0x232c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232c44:
    // 0x232c44: 0xe6000890
    ctx->pc = 0x232c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2192), bits); }
    // 0x232c48: 0x3c020032
    ctx->pc = 0x232c48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x232c4c: 0x8c4307bc
    ctx->pc = 0x232c4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x232c50: 0x3402ffff
    ctx->pc = 0x232c50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x232c54: 0x43102a
    ctx->pc = 0x232c54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x232c58: 0x10400004
    ctx->pc = 0x232C58u;
    {
        const bool branch_taken_0x232c58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x232C5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
        if (branch_taken_0x232c58) {
            ctx->pc = 0x232C6Cu;
            goto label_232c6c;
        }
    }
    ctx->pc = 0x232C60u;
    // 0x232c60: 0x621021
    ctx->pc = 0x232c60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232c64: 0x10000038
    ctx->pc = 0x232C64u;
    {
        const bool branch_taken_0x232c64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232C68u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 2));
        if (branch_taken_0x232c64) {
            ctx->pc = 0x232D48u;
            goto label_232d48;
        }
    }
    ctx->pc = 0x232C6Cu;
label_232c6c:
    // 0x232c6c: 0x3c020032
    ctx->pc = 0x232c6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x232c70: 0x8c4207bc
    ctx->pc = 0x232c70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x232c74: 0x2842000d
    ctx->pc = 0x232c74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 13));
    // 0x232c78: 0x14400005
    ctx->pc = 0x232C78u;
    {
        const bool branch_taken_0x232c78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x232C7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x232c78) {
            ctx->pc = 0x232C90u;
            goto label_232c90;
        }
    }
    ctx->pc = 0x232C80u;
    // 0x232c80: 0x3c020035
    ctx->pc = 0x232c80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x232c84: 0x8c42f834
    ctx->pc = 0x232c84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965300)));
    // 0x232c88: 0x1000002f
    ctx->pc = 0x232C88u;
    {
        const bool branch_taken_0x232c88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232C8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 2));
        if (branch_taken_0x232c88) {
            ctx->pc = 0x232D48u;
            goto label_232d48;
        }
    }
    ctx->pc = 0x232C90u;
label_232c90:
    // 0x232c90: 0x8c4207bc
    ctx->pc = 0x232c90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x232c94: 0x2842000c
    ctx->pc = 0x232c94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 12));
    // 0x232c98: 0x14400005
    ctx->pc = 0x232C98u;
    {
        const bool branch_taken_0x232c98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x232C9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x232c98) {
            ctx->pc = 0x232CB0u;
            goto label_232cb0;
        }
    }
    ctx->pc = 0x232CA0u;
    // 0x232ca0: 0x3c020034
    ctx->pc = 0x232ca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x232ca4: 0x8c42e7d4
    ctx->pc = 0x232ca4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961108)));
    // 0x232ca8: 0x10000027
    ctx->pc = 0x232CA8u;
    {
        const bool branch_taken_0x232ca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232CACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 2));
        if (branch_taken_0x232ca8) {
            ctx->pc = 0x232D48u;
            goto label_232d48;
        }
    }
    ctx->pc = 0x232CB0u;
label_232cb0:
    // 0x232cb0: 0x8c4307bc
    ctx->pc = 0x232cb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x232cb4: 0x28620003
    ctx->pc = 0x232cb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
    // 0x232cb8: 0x14400006
    ctx->pc = 0x232CB8u;
    {
        const bool branch_taken_0x232cb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x232CBCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x232cb8) {
            ctx->pc = 0x232CD4u;
            goto label_232cd4;
        }
    }
    ctx->pc = 0x232CC0u;
    // 0x232cc0: 0x2462fffd
    ctx->pc = 0x232cc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x232cc4: 0x304200ff
    ctx->pc = 0x232cc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x232cc8: 0x34420c00
    ctx->pc = 0x232cc8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 3072));
    // 0x232ccc: 0x1000001e
    ctx->pc = 0x232CCCu;
    {
        const bool branch_taken_0x232ccc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232CD0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 2));
        if (branch_taken_0x232ccc) {
            ctx->pc = 0x232D48u;
            goto label_232d48;
        }
    }
    ctx->pc = 0x232CD4u;
label_232cd4:
    // 0x232cd4: 0x8c4307bc
    ctx->pc = 0x232cd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x232cd8: 0x24020002
    ctx->pc = 0x232cd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x232cdc: 0x14620007
    ctx->pc = 0x232CDCu;
    {
        const bool branch_taken_0x232cdc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x232CE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x232cdc) {
            ctx->pc = 0x232CFCu;
            goto label_232cfc;
        }
    }
    ctx->pc = 0x232CE4u;
    // 0x232ce4: 0x6230018
    ctx->pc = 0x232CE4u;
    {
        const bool branch_taken_0x232ce4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x232ce4) {
            ctx->pc = 0x232CE8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 17));
            ctx->pc = 0x232D48u;
            goto label_232d48;
        }
    }
    ctx->pc = 0x232CECu;
    // 0x232cec: 0x3c020032
    ctx->pc = 0x232cecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x232cf0: 0x8c4207b8
    ctx->pc = 0x232cf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1976)));
    // 0x232cf4: 0x10000014
    ctx->pc = 0x232CF4u;
    {
        const bool branch_taken_0x232cf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232CF8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 2));
        if (branch_taken_0x232cf4) {
            ctx->pc = 0x232D48u;
            goto label_232d48;
        }
    }
    ctx->pc = 0x232CFCu;
label_232cfc:
    // 0x232cfc: 0x8c4307bc
    ctx->pc = 0x232cfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x232d00: 0x24020001
    ctx->pc = 0x232d00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x232d04: 0x14620007
    ctx->pc = 0x232D04u;
    {
        const bool branch_taken_0x232d04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x232D08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x232d04) {
            ctx->pc = 0x232D24u;
            goto label_232d24;
        }
    }
    ctx->pc = 0x232D0Cu;
    // 0x232d0c: 0x623000e
    ctx->pc = 0x232D0Cu;
    {
        const bool branch_taken_0x232d0c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x232d0c) {
            ctx->pc = 0x232D10u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 17));
            ctx->pc = 0x232D48u;
            goto label_232d48;
        }
    }
    ctx->pc = 0x232D14u;
    // 0x232d14: 0xc09882c
    ctx->pc = 0x232D14u;
    SET_GPR_U32(ctx, 31, 0x232D1Cu);
    ctx->pc = 0x232D18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2620B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextWorldLevel_0x2620b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232D1Cu; }
    }
    if (ctx->pc != 0x232D1Cu) { return; }
    ctx->pc = 0x232D1Cu;
    // 0x232d1c: 0x1000000a
    ctx->pc = 0x232D1Cu;
    {
        const bool branch_taken_0x232d1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232D20u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 2));
        if (branch_taken_0x232d1c) {
            ctx->pc = 0x232D48u;
            goto label_232d48;
        }
    }
    ctx->pc = 0x232D24u;
label_232d24:
    // 0x232d24: 0x8c4307bc
    ctx->pc = 0x232d24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x232d28: 0x2402ffff
    ctx->pc = 0x232d28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232d2c: 0x54620006
    ctx->pc = 0x232D2Cu;
    {
        const bool branch_taken_0x232d2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x232d2c) {
            ctx->pc = 0x232D30u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 17));
            ctx->pc = 0x232D48u;
            goto label_232d48;
        }
    }
    ctx->pc = 0x232D34u;
    // 0x232d34: 0x6230004
    ctx->pc = 0x232D34u;
    {
        const bool branch_taken_0x232d34 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x232d34) {
            ctx->pc = 0x232D38u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 17));
            ctx->pc = 0x232D48u;
            goto label_232d48;
        }
    }
    ctx->pc = 0x232D3Cu;
    // 0x232d3c: 0xc098878
    ctx->pc = 0x232D3Cu;
    SET_GPR_U32(ctx, 31, 0x232D44u);
    ctx->pc = 0x232D40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2621E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PrevWorldLevel_0x2621e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232D44u; }
    }
    if (ctx->pc != 0x232D44u) { return; }
    ctx->pc = 0x232D44u;
    // 0x232d44: 0xae020808
    ctx->pc = 0x232d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 2));
label_232d48:
    // 0x232d48: 0x3c020034
    ctx->pc = 0x232d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x232d4c: 0x260407b4
    ctx->pc = 0x232d4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1972));
    // 0x232d50: 0x8c455514
    ctx->pc = 0x232d50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 21780)));
    // 0x232d54: 0x2406000a
    ctx->pc = 0x232d54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x232d58: 0x3c013ecc
    ctx->pc = 0x232d58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16076 << 16));
    // 0x232d5c: 0x3421cccd
    ctx->pc = 0x232d5cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x232d60: 0x44816000
    ctx->pc = 0x232d60u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x232d64: 0xc09ffc6
    ctx->pc = 0x232D64u;
    SET_GPR_U32(ctx, 31, 0x232D6Cu);
    ctx->pc = 0x232D68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27FF18u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetSkinFX_0x27ff18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232D6Cu; }
    }
    if (ctx->pc != 0x232D6Cu) { return; }
    ctx->pc = 0x232D6Cu;
label_232d6c:
    // 0x232d6c: 0x3c020031
    ctx->pc = 0x232d6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_232d70:
    // 0x232d70: 0x960301ca
    ctx->pc = 0x232d70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 458)));
    // 0x232d74: 0x9442ffbc
    ctx->pc = 0x232d74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x232d78: 0x621823
    ctx->pc = 0x232d78u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232d7c: 0xa60301ca
    ctx->pc = 0x232d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 458), (uint16_t)GPR_U32(ctx, 3));
    // 0x232d80: 0x31c00
    ctx->pc = 0x232d80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x232d84: 0x5c60000b
    ctx->pc = 0x232D84u;
    {
        const bool branch_taken_0x232d84 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x232d84) {
            ctx->pc = 0x232D88u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x232DB4u;
            goto label_232db4;
        }
    }
    ctx->pc = 0x232D8Cu;
    // 0x232d8c: 0xa60001ca
    ctx->pc = 0x232d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 458), (uint16_t)GPR_U32(ctx, 0));
    // 0x232d90: 0x8e0200fc
    ctx->pc = 0x232d90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x232d94: 0x24030005
    ctx->pc = 0x232d94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x232d98: 0x10430063
    ctx->pc = 0x232D98u;
    {
        const bool branch_taken_0x232d98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x232D9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x232d98) {
            ctx->pc = 0x232F28u;
            goto label_232f28;
        }
    }
    ctx->pc = 0x232DA0u;
    // 0x232da0: 0xae0300fc
    ctx->pc = 0x232da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
    // 0x232da4: 0xc09a3ae
    ctx->pc = 0x232DA4u;
    SET_GPR_U32(ctx, 31, 0x232DACu);
    ctx->pc = 0x232DA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x268EB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        del_target_0x268eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232DACu; }
    }
    if (ctx->pc != 0x232DACu) { return; }
    ctx->pc = 0x232DACu;
    // 0x232dac: 0x1000005e
    ctx->pc = 0x232DACu;
    {
        const bool branch_taken_0x232dac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232DB0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x232dac) {
            ctx->pc = 0x232F28u;
            goto label_232f28;
        }
    }
    ctx->pc = 0x232DB4u;
label_232db4:
    // 0x232db4: 0x46000000
    ctx->pc = 0x232db4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x232db8: 0xc6010054
    ctx->pc = 0x232db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232dbc: 0x46010000
    ctx->pc = 0x232dbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232dc0: 0x3c013f80
    ctx->pc = 0x232dc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x232dc4: 0x44810800
    ctx->pc = 0x232dc4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x232dc8: 0x46010000
    ctx->pc = 0x232dc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232dcc: 0xc6010890
    ctx->pc = 0x232dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232dd0: 0x46000834
    ctx->pc = 0x232dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232dd4: 0x0
    ctx->pc = 0x232dd4u;
    // NOP
    // 0x232dd8: 0x45000052
    ctx->pc = 0x232DD8u;
    {
        const bool branch_taken_0x232dd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232DDCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x232dd8) {
            ctx->pc = 0x232F24u;
            goto label_232f24;
        }
    }
    ctx->pc = 0x232DE0u;
    // 0x232de0: 0xafa00000
    ctx->pc = 0x232de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x232de4: 0x3c01bdf5
    ctx->pc = 0x232de4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48629 << 16));
    // 0x232de8: 0x3421c28f
    ctx->pc = 0x232de8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49807));
    // 0x232dec: 0x44810000
    ctx->pc = 0x232decu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x232df0: 0xe7a00004
    ctx->pc = 0x232df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x232df4: 0xafa00008
    ctx->pc = 0x232df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x232df8: 0x8c62ffbc
    ctx->pc = 0x232df8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x232dfc: 0x4400005
    ctx->pc = 0x232DFCu;
    {
        const bool branch_taken_0x232dfc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x232E00u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x232dfc) {
            ctx->pc = 0x232E14u;
            goto label_232e14;
        }
    }
    ctx->pc = 0x232E04u;
    // 0x232e04: 0x44820800
    ctx->pc = 0x232e04u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x232e08: 0x46800860
    ctx->pc = 0x232e08u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x232e0c: 0x10000009
    ctx->pc = 0x232E0Cu;
    {
        const bool branch_taken_0x232e0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232E10u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x232e0c) {
            ctx->pc = 0x232E34u;
            goto label_232e34;
        }
    }
    ctx->pc = 0x232E14u;
label_232e14:
    // 0x232e14: 0x8c820000
    ctx->pc = 0x232e14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232e18: 0x30430001
    ctx->pc = 0x232e18u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x232e1c: 0x21042
    ctx->pc = 0x232e1cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x232e20: 0x621825
    ctx->pc = 0x232e20u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232e24: 0x44830800
    ctx->pc = 0x232e24u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x232e28: 0x46800860
    ctx->pc = 0x232e28u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x232e2c: 0x46010840
    ctx->pc = 0x232e2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x232e30: 0xc7a00000
    ctx->pc = 0x232e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232e34:
    // 0x232e34: 0x46000802
    ctx->pc = 0x232e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x232e38: 0xe7a00000
    ctx->pc = 0x232e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x232e3c: 0x3c030031
    ctx->pc = 0x232e3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x232e40: 0x8c62ffbc
    ctx->pc = 0x232e40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x232e44: 0x4400005
    ctx->pc = 0x232E44u;
    {
        const bool branch_taken_0x232e44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x232E48u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x232e44) {
            ctx->pc = 0x232E5Cu;
            goto label_232e5c;
        }
    }
    ctx->pc = 0x232E4Cu;
    // 0x232e4c: 0x44820800
    ctx->pc = 0x232e4cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x232e50: 0x46800860
    ctx->pc = 0x232e50u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x232e54: 0x10000009
    ctx->pc = 0x232E54u;
    {
        const bool branch_taken_0x232e54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232E58u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x232e54) {
            ctx->pc = 0x232E7Cu;
            goto label_232e7c;
        }
    }
    ctx->pc = 0x232E5Cu;
label_232e5c:
    // 0x232e5c: 0x8c820000
    ctx->pc = 0x232e5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232e60: 0x30430001
    ctx->pc = 0x232e60u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x232e64: 0x21042
    ctx->pc = 0x232e64u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x232e68: 0x621825
    ctx->pc = 0x232e68u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232e6c: 0x44830800
    ctx->pc = 0x232e6cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x232e70: 0x46800860
    ctx->pc = 0x232e70u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x232e74: 0x46010840
    ctx->pc = 0x232e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x232e78: 0xc7a00004
    ctx->pc = 0x232e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232e7c:
    // 0x232e7c: 0x46000802
    ctx->pc = 0x232e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x232e80: 0xe7a00004
    ctx->pc = 0x232e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x232e84: 0x3c030031
    ctx->pc = 0x232e84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x232e88: 0x8c62ffbc
    ctx->pc = 0x232e88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x232e8c: 0x4400005
    ctx->pc = 0x232E8Cu;
    {
        const bool branch_taken_0x232e8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x232E90u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x232e8c) {
            ctx->pc = 0x232EA4u;
            goto label_232ea4;
        }
    }
    ctx->pc = 0x232E94u;
    // 0x232e94: 0x44820000
    ctx->pc = 0x232e94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x232e98: 0x46800020
    ctx->pc = 0x232e98u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x232e9c: 0x10000009
    ctx->pc = 0x232E9Cu;
    {
        const bool branch_taken_0x232e9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232EA0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x232e9c) {
            ctx->pc = 0x232EC4u;
            goto label_232ec4;
        }
    }
    ctx->pc = 0x232EA4u;
label_232ea4:
    // 0x232ea4: 0x8c820000
    ctx->pc = 0x232ea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232ea8: 0x30430001
    ctx->pc = 0x232ea8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x232eac: 0x21042
    ctx->pc = 0x232eacu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x232eb0: 0x621825
    ctx->pc = 0x232eb0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232eb4: 0x44830000
    ctx->pc = 0x232eb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x232eb8: 0x46800020
    ctx->pc = 0x232eb8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x232ebc: 0x46000000
    ctx->pc = 0x232ebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x232ec0: 0xc7a20008
    ctx->pc = 0x232ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_232ec4:
    // 0x232ec4: 0x46020082
    ctx->pc = 0x232ec4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x232ec8: 0xe7a20008
    ctx->pc = 0x232ec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x232ecc: 0xc6000050
    ctx->pc = 0x232eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232ed0: 0xc7a10000
    ctx->pc = 0x232ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232ed4: 0x46010000
    ctx->pc = 0x232ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232ed8: 0xe6000050
    ctx->pc = 0x232ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x232edc: 0xc6000054
    ctx->pc = 0x232edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232ee0: 0xc7a10004
    ctx->pc = 0x232ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232ee4: 0x46010000
    ctx->pc = 0x232ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232ee8: 0xe6000054
    ctx->pc = 0x232ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x232eec: 0xc6000058
    ctx->pc = 0x232eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232ef0: 0x46020000
    ctx->pc = 0x232ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x232ef4: 0xe6000058
    ctx->pc = 0x232ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x232ef8: 0x3c020031
    ctx->pc = 0x232ef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x232efc: 0xc440ffa8
    ctx->pc = 0x232efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232f00: 0x3c014116
    ctx->pc = 0x232f00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16662 << 16));
    // 0x232f04: 0x3421cbe5
    ctx->pc = 0x232f04u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52197));
    // 0x232f08: 0x44816000
    ctx->pc = 0x232f08u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x232f0c: 0x460c0302
    ctx->pc = 0x232f0cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x232f10: 0xc0b5632
    ctx->pc = 0x232F10u;
    SET_GPR_U32(ctx, 31, 0x232F18u);
    ctx->pc = 0x232F14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232F18u; }
    }
    if (ctx->pc != 0x232F18u) { return; }
    ctx->pc = 0x232F18u;
    // 0x232f18: 0x9602093c
    ctx->pc = 0x232f18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2364)));
    // 0x232f1c: 0x34420001
    ctx->pc = 0x232f1cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x232f20: 0xa602093c
    ctx->pc = 0x232f20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2364), (uint16_t)GPR_U32(ctx, 2));
label_232f24:
    // 0x232f24: 0xdfbf0040
    ctx->pc = 0x232f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_232f28:
    // 0x232f28: 0xdfb20030
    ctx->pc = 0x232f28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232f2c: 0xdfb10020
    ctx->pc = 0x232f2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232f30: 0xdfb00010
    ctx->pc = 0x232f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232f34: 0x3e00008
    ctx->pc = 0x232F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232F38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232C14u: goto label_232c14;
            case 0x232C44u: goto label_232c44;
            case 0x232C6Cu: goto label_232c6c;
            case 0x232C90u: goto label_232c90;
            case 0x232CB0u: goto label_232cb0;
            case 0x232CD4u: goto label_232cd4;
            case 0x232CFCu: goto label_232cfc;
            case 0x232D24u: goto label_232d24;
            case 0x232D48u: goto label_232d48;
            case 0x232D6Cu: goto label_232d6c;
            case 0x232D70u: goto label_232d70;
            case 0x232DB4u: goto label_232db4;
            case 0x232E14u: goto label_232e14;
            case 0x232E34u: goto label_232e34;
            case 0x232E5Cu: goto label_232e5c;
            case 0x232E7Cu: goto label_232e7c;
            case 0x232EA4u: goto label_232ea4;
            case 0x232EC4u: goto label_232ec4;
            case 0x232F24u: goto label_232f24;
            case 0x232F28u: goto label_232f28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232F3Cu;
}
