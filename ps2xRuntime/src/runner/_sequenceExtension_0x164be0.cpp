#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _sequenceExtension
// Address: 0x164be0 - 0x164d44
void _sequenceExtension_0x164be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_sequenceExtension");


    ctx->pc = 0x164be0u;

    // 0x164be0: 0x27bdffa0
    ctx->pc = 0x164be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x164be4: 0x3c020023
    ctx->pc = 0x164be4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x164be8: 0xffb00000
    ctx->pc = 0x164be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164bec: 0x202d
    ctx->pc = 0x164becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164bf0: 0x24100001
    ctx->pc = 0x164bf0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x164bf4: 0xffb40040
    ctx->pc = 0x164bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x164bf8: 0xffb30030
    ctx->pc = 0x164bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x164bfc: 0xffb20020
    ctx->pc = 0x164bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x164c00: 0xffb10010
    ctx->pc = 0x164c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x164c04: 0xffbf0050
    ctx->pc = 0x164c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x164c08: 0xc057fda
    ctx->pc = 0x164C08u;
    SET_GPR_U32(ctx, 31, 0x164C10u);
    ctx->pc = 0x164C0Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945520), GPR_U32(ctx, 16));
    ctx->pc = 0x15FF68u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuSetMPEG1_0x15ff68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C10u; }
        else if (ctx->pc != 0x164C10u) { ctx->pc = 0x164C10u; }
    }
    if (ctx->pc != 0x164C10u) { return; }
    ctx->pc = 0x164C10u;
    // 0x164c10: 0xc0585d4
    ctx->pc = 0x164C10u;
    SET_GPR_U32(ctx, 31, 0x164C18u);
    ctx->pc = 0x164C14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C18u; }
        else if (ctx->pc != 0x164C18u) { ctx->pc = 0x164C18u; }
    }
    if (ctx->pc != 0x164C18u) { return; }
    ctx->pc = 0x164C18u;
    // 0x164c18: 0x40882d
    ctx->pc = 0x164c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c1c: 0x3c050023
    ctx->pc = 0x164c1cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x164c20: 0x111842
    ctx->pc = 0x164c20u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 17), 1));
    // 0x164c24: 0x111442
    ctx->pc = 0x164c24u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), 17));
    // 0x164c28: 0x30740fff
    ctx->pc = 0x164c28u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 3), 4095));
    // 0x164c2c: 0x30420003
    ctx->pc = 0x164c2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x164c30: 0x112342
    ctx->pc = 0x164c30u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 17), 13));
    // 0x164c34: 0x111bc2
    ctx->pc = 0x164c34u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 17), 15));
    // 0x164c38: 0x30930003
    ctx->pc = 0x164c38u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 4), 3));
    // 0x164c3c: 0x30720003
    ctx->pc = 0x164c3cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 3), 3));
    // 0x164c40: 0x10500004
    ctx->pc = 0x164C40u;
    {
        const bool branch_taken_0x164c40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x164C44u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294943628), GPR_U32(ctx, 2));
        if (branch_taken_0x164c40) {
            ctx->pc = 0x164C54u;
            goto label_164c54;
        }
    }
    ctx->pc = 0x164C48u;
    // 0x164c48: 0x3c04002c
    ctx->pc = 0x164c48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x164c4c: 0xc059112
    ctx->pc = 0x164C4Cu;
    SET_GPR_U32(ctx, 31, 0x164C54u);
    ctx->pc = 0x164C50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938208));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C54u; }
        else if (ctx->pc != 0x164C54u) { ctx->pc = 0x164C54u; }
    }
    if (ctx->pc != 0x164C54u) { return; }
    ctx->pc = 0x164C54u;
label_164c54:
    // 0x164c54: 0x112502
    ctx->pc = 0x164c54u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 17), 20));
    // 0x164c58: 0x3c100023
    ctx->pc = 0x164c58u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x164c5c: 0x1114c2
    ctx->pc = 0x164c5cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), 19));
    // 0x164c60: 0xae04a384
    ctx->pc = 0x164c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943620), GPR_U32(ctx, 4));
    // 0x164c64: 0x30420001
    ctx->pc = 0x164c64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x164c68: 0x3c030023
    ctx->pc = 0x164c68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x164c6c: 0x0
    ctx->pc = 0x164c6cu;
    // NOP
    // 0x164c70: 0xc0585d4
    ctx->pc = 0x164C70u;
    SET_GPR_U32(ctx, 31, 0x164C78u);
    ctx->pc = 0x164C74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C78u; }
        else if (ctx->pc != 0x164C78u) { ctx->pc = 0x164C78u; }
    }
    if (ctx->pc != 0x164C78u) { return; }
    ctx->pc = 0x164C78u;
    // 0x164c78: 0x40882d
    ctx->pc = 0x164c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c7c: 0x3c060023
    ctx->pc = 0x164c7cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x164c80: 0x3222001f
    ctx->pc = 0x164c80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 31));
    // 0x164c84: 0x111942
    ctx->pc = 0x164c84u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 17), 5));
    // 0x164c88: 0x1121c2
    ctx->pc = 0x164c88u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 17), 7));
    // 0x164c8c: 0x8e08a384
    ctx->pc = 0x164c8cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 4294943620)));
    // 0x164c90: 0x30630003
    ctx->pc = 0x164c90u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 3));
    // 0x164c94: 0x30840001
    ctx->pc = 0x164c94u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x164c98: 0x3c050023
    ctx->pc = 0x164c98u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x164c9c: 0x3c070023
    ctx->pc = 0x164c9cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
    // 0x164ca0: 0xacc2a398
    ctx->pc = 0x164ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943640), GPR_U32(ctx, 2));
    // 0x164ca4: 0x118202
    ctx->pc = 0x164ca4u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 17), 8));
    // 0x164ca8: 0xaca3a394
    ctx->pc = 0x164ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943636), GPR_U32(ctx, 3));
    // 0x164cac: 0x24020048
    ctx->pc = 0x164cacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 72));
    // 0x164cb0: 0x11020006
    ctx->pc = 0x164CB0u;
    {
        const bool branch_taken_0x164cb0 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x164CB4u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294943632), GPR_U32(ctx, 4));
        if (branch_taken_0x164cb0) {
            ctx->pc = 0x164CCCu;
            goto label_164ccc;
        }
    }
    ctx->pc = 0x164CB8u;
    // 0x164cb8: 0x24020058
    ctx->pc = 0x164cb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 88));
    // 0x164cbc: 0x11020003
    ctx->pc = 0x164CBCu;
    {
        const bool branch_taken_0x164cbc = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x164CC0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x164cbc) {
            ctx->pc = 0x164CCCu;
            goto label_164ccc;
        }
    }
    ctx->pc = 0x164CC4u;
    // 0x164cc4: 0xc059112
    ctx->pc = 0x164CC4u;
    SET_GPR_U32(ctx, 31, 0x164CCCu);
    ctx->pc = 0x164CC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938248));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164CCCu; }
        else if (ctx->pc != 0x164CCCu) { ctx->pc = 0x164CCCu; }
    }
    if (ctx->pc != 0x164CCCu) { return; }
    ctx->pc = 0x164CCCu;
label_164ccc:
    // 0x164ccc: 0x3c0c0023
    ctx->pc = 0x164cccu;
    SET_GPR_U32(ctx, 12, ((uint32_t)35 << 16));
    // 0x164cd0: 0x3c0d0023
    ctx->pc = 0x164cd0u;
    SET_GPR_U32(ctx, 13, ((uint32_t)35 << 16));
    // 0x164cd4: 0x8d85a360
    ctx->pc = 0x164cd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 12), 4294943584)));
    // 0x164cd8: 0x3c0b0023
    ctx->pc = 0x164cd8u;
    SET_GPR_U32(ctx, 11, ((uint32_t)35 << 16));
    // 0x164cdc: 0x8da3a364
    ctx->pc = 0x164cdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4294943588)));
    // 0x164ce0: 0x3c0a0023
    ctx->pc = 0x164ce0u;
    SET_GPR_U32(ctx, 10, ((uint32_t)35 << 16));
    // 0x164ce4: 0x8d67a378
    ctx->pc = 0x164ce4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 11), 4294943608)));
    // 0x164ce8: 0x144480
    ctx->pc = 0x164ce8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 20), 18));
    // 0x164cec: 0x8d46a37c
    ctx->pc = 0x164cecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 4294943612)));
    // 0x164cf0: 0x104a80
    ctx->pc = 0x164cf0u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 16), 10));
    // 0x164cf4: 0x122300
    ctx->pc = 0x164cf4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 12));
    // 0x164cf8: 0x30a50fff
    ctx->pc = 0x164cf8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 4095));
    // 0x164cfc: 0x131300
    ctx->pc = 0x164cfcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 12));
    // 0x164d00: 0x30630fff
    ctx->pc = 0x164d00u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
    // 0x164d04: 0x852025
    ctx->pc = 0x164d04u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x164d08: 0x431025
    ctx->pc = 0x164d08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164d0c: 0xe83821
    ctx->pc = 0x164d0cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x164d10: 0xc93021
    ctx->pc = 0x164d10u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x164d14: 0xdfbf0050
    ctx->pc = 0x164d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164d18: 0xdfb40040
    ctx->pc = 0x164d18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164d1c: 0xdfb30030
    ctx->pc = 0x164d1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164d20: 0xdfb20020
    ctx->pc = 0x164d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164d24: 0xdfb10010
    ctx->pc = 0x164d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164d28: 0xdfb00000
    ctx->pc = 0x164d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164d2c: 0xad84a360
    ctx->pc = 0x164d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294943584), GPR_U32(ctx, 4));
    // 0x164d30: 0xada2a364
    ctx->pc = 0x164d30u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294943588), GPR_U32(ctx, 2));
    // 0x164d34: 0xad67a378
    ctx->pc = 0x164d34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294943608), GPR_U32(ctx, 7));
    // 0x164d38: 0xad46a37c
    ctx->pc = 0x164d38u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294943612), GPR_U32(ctx, 6));
    // 0x164d3c: 0x3e00008
    ctx->pc = 0x164D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164D40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164C54u: goto label_164c54;
            case 0x164CCCu: goto label_164ccc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164D44u;
}
