#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AsciiString2Sjis
// Address: 0x207b90 - 0x207c80
void AsciiString2Sjis_0x207b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207b90u;

    // 0x207b90: 0x27bdffc0
    ctx->pc = 0x207b90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x207b94: 0xffbf0030
    ctx->pc = 0x207b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x207b98: 0xffbe0020
    ctx->pc = 0x207b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x207b9c: 0x3a0f02d
    ctx->pc = 0x207b9cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ba0: 0xafc40000
    ctx->pc = 0x207ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x207ba4: 0xafc50004
    ctx->pc = 0x207ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x207ba8: 0xafc00008
    ctx->pc = 0x207ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x207bac: 0x8fc40000
    ctx->pc = 0x207bacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207bb0: 0xc0bf306
    ctx->pc = 0x207BB0u;
    SET_GPR_U32(ctx, 31, 0x207BB8u);
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BB8u; }
    }
    if (ctx->pc != 0x207BB8u) { return; }
    ctx->pc = 0x207BB8u;
    // 0x207bb8: 0xafc2000c
    ctx->pc = 0x207bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x207bbc: 0xafc00008
    ctx->pc = 0x207bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_207bc0:
    // 0x207bc0: 0x8fc20008
    ctx->pc = 0x207bc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x207bc4: 0x8fc3000c
    ctx->pc = 0x207bc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x207bc8: 0x43102a
    ctx->pc = 0x207bc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x207bcc: 0x14400003
    ctx->pc = 0x207BCCu;
    {
        const bool branch_taken_0x207bcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x207bcc) {
            ctx->pc = 0x207BDCu;
            goto label_207bdc;
        }
    }
    ctx->pc = 0x207BD4u;
    // 0x207bd4: 0x1000001e
    ctx->pc = 0x207BD4u;
    {
        const bool branch_taken_0x207bd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207bd4) {
            ctx->pc = 0x207C50u;
            goto label_207c50;
        }
    }
    ctx->pc = 0x207BDCu;
label_207bdc:
    // 0x207bdc: 0x8fc20000
    ctx->pc = 0x207bdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207be0: 0x8fc30008
    ctx->pc = 0x207be0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x207be4: 0x431021
    ctx->pc = 0x207be4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207be8: 0x90430000
    ctx->pc = 0x207be8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207bec: 0x60202d
    ctx->pc = 0x207becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207bf0: 0xc081eb8
    ctx->pc = 0x207BF0u;
    SET_GPR_U32(ctx, 31, 0x207BF8u);
    ctx->pc = 0x207AE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        Ascii2Sjis_0x207ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BF8u; }
    }
    if (ctx->pc != 0x207BF8u) { return; }
    ctx->pc = 0x207BF8u;
    // 0x207bf8: 0xa7c20010
    ctx->pc = 0x207bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x207bfc: 0x93c20010
    ctx->pc = 0x207bfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x207c00: 0xa3c20012
    ctx->pc = 0x207c00u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x207c04: 0x97c20010
    ctx->pc = 0x207c04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x207c08: 0x21a02
    ctx->pc = 0x207c08u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 8));
    // 0x207c0c: 0xa3c30013
    ctx->pc = 0x207c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x207c10: 0x8fc20008
    ctx->pc = 0x207c10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x207c14: 0x40182d
    ctx->pc = 0x207c14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c18: 0x31040
    ctx->pc = 0x207c18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x207c1c: 0x8fc30004
    ctx->pc = 0x207c1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x207c20: 0x431021
    ctx->pc = 0x207c20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207c24: 0x93c30013
    ctx->pc = 0x207c24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 19)));
    // 0x207c28: 0x93c40012
    ctx->pc = 0x207c28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x207c2c: 0x42a00
    ctx->pc = 0x207c2cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 8));
    // 0x207c30: 0xa0202d
    ctx->pc = 0x207c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c34: 0x641825
    ctx->pc = 0x207c34u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x207c38: 0xa4430000
    ctx->pc = 0x207c38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x207c3c: 0x8fc20008
    ctx->pc = 0x207c3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x207c40: 0x24430001
    ctx->pc = 0x207c40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x207c44: 0xafc30008
    ctx->pc = 0x207c44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x207c48: 0x1000ffdd
    ctx->pc = 0x207C48u;
    {
        const bool branch_taken_0x207c48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207c48) {
            ctx->pc = 0x207BC0u;
            goto label_207bc0;
        }
    }
    ctx->pc = 0x207C50u;
label_207c50:
    // 0x207c50: 0x8fc20008
    ctx->pc = 0x207c50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x207c54: 0x40182d
    ctx->pc = 0x207c54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c58: 0x31040
    ctx->pc = 0x207c58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x207c5c: 0x8fc30004
    ctx->pc = 0x207c5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x207c60: 0x431021
    ctx->pc = 0x207c60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207c64: 0xa4400000
    ctx->pc = 0x207c64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x207c68: 0x3c0e82d
    ctx->pc = 0x207c68u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c6c: 0xdfbf0030
    ctx->pc = 0x207c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x207c70: 0xdfbe0020
    ctx->pc = 0x207c70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207c74: 0x27bd0040
    ctx->pc = 0x207c74u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    // 0x207c78: 0x3e00008
    ctx->pc = 0x207C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207BC0u: goto label_207bc0;
            case 0x207BDCu: goto label_207bdc;
            case 0x207C50u: goto label_207c50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207C80u;
}
