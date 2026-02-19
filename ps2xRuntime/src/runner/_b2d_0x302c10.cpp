#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _b2d
// Address: 0x302c10 - 0x302d8c
void _b2d_0x302c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x302c10u;

    // 0x302c10: 0x27bdff90
    ctx->pc = 0x302c10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x302c14: 0xffb40050
    ctx->pc = 0x302c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x302c18: 0xffb20030
    ctx->pc = 0x302c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x302c1c: 0x24940014
    ctx->pc = 0x302c1cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 4), 20));
    // 0x302c20: 0xffb00010
    ctx->pc = 0x302c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x302c24: 0xffbf0060
    ctx->pc = 0x302c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x302c28: 0xa0802d
    ctx->pc = 0x302c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c2c: 0xffb30040
    ctx->pc = 0x302c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x302c30: 0xffb10020
    ctx->pc = 0x302c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x302c34: 0x8c820010
    ctx->pc = 0x302c34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x302c38: 0x21080
    ctx->pc = 0x302c38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x302c3c: 0x2829021
    ctx->pc = 0x302c3cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x302c40: 0x2652fffc
    ctx->pc = 0x302c40u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x302c44: 0x8e530000
    ctx->pc = 0x302c44u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x302c48: 0xc0c08d6
    ctx->pc = 0x302C48u;
    SET_GPR_U32(ctx, 31, 0x302C50u);
    ctx->pc = 0x302C4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302358u;
    {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x302358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302C50u; }
    }
    if (ctx->pc != 0x302C50u) { return; }
    ctx->pc = 0x302C50u;
    // 0x302c50: 0x40302d
    ctx->pc = 0x302c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c54: 0x24020020
    ctx->pc = 0x302c54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x302c58: 0x28c3000b
    ctx->pc = 0x302c58u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 11));
    // 0x302c5c: 0x461023
    ctx->pc = 0x302c5cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x302c60: 0x1060001a
    ctx->pc = 0x302C60u;
    {
        const bool branch_taken_0x302c60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x302C64u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x302c60) {
            ctx->pc = 0x302CCCu;
            goto label_302ccc;
        }
    }
    ctx->pc = 0x302C68u;
    // 0x302c68: 0x2402000b
    ctx->pc = 0x302c68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x302c6c: 0x3c043ff0
    ctx->pc = 0x302c6cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)16368 << 16));
    // 0x302c70: 0x461023
    ctx->pc = 0x302c70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x302c74: 0x3c03ffff
    ctx->pc = 0x302c74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x302c78: 0x3183e
    ctx->pc = 0x302c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x302c7c: 0x531006
    ctx->pc = 0x302c7cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x302c80: 0x2238824
    ctx->pc = 0x302c80u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x302c84: 0x441025
    ctx->pc = 0x302c84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x302c88: 0x292182b
    ctx->pc = 0x302c88u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x302c8c: 0x2103c
    ctx->pc = 0x302c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x302c90: 0x2228825
    ctx->pc = 0x302c90u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x302c94: 0x10600002
    ctx->pc = 0x302C94u;
    {
        const bool branch_taken_0x302c94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x302C98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x302c94) {
            ctx->pc = 0x302CA0u;
            goto label_302ca0;
        }
    }
    ctx->pc = 0x302C9Cu;
    // 0x302c9c: 0x8e44fffc
    ctx->pc = 0x302c9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_302ca0:
    // 0x302ca0: 0x2402000b
    ctx->pc = 0x302ca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x302ca4: 0x24c30015
    ctx->pc = 0x302ca4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 21));
    // 0x302ca8: 0x461023
    ctx->pc = 0x302ca8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x302cac: 0x731804
    ctx->pc = 0x302cacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x302cb0: 0x441006
    ctx->pc = 0x302cb0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x302cb4: 0x621825
    ctx->pc = 0x302cb4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x302cb8: 0x2404ffff
    ctx->pc = 0x302cb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x302cbc: 0x4203c
    ctx->pc = 0x302cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x302cc0: 0x3183c
    ctx->pc = 0x302cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x302cc4: 0x1000001f
    ctx->pc = 0x302CC4u;
    {
        const bool branch_taken_0x302cc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x302CC8u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        if (branch_taken_0x302cc4) {
            ctx->pc = 0x302D44u;
            goto label_302d44;
        }
    }
    ctx->pc = 0x302CCCu;
label_302ccc:
    // 0x302ccc: 0x292102b
    ctx->pc = 0x302cccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x302cd0: 0x10400003
    ctx->pc = 0x302CD0u;
    {
        const bool branch_taken_0x302cd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x302CD4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x302cd0) {
            ctx->pc = 0x302CE0u;
            goto label_302ce0;
        }
    }
    ctx->pc = 0x302CD8u;
    // 0x302cd8: 0x2652fffc
    ctx->pc = 0x302cd8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x302cdc: 0x8e470000
    ctx->pc = 0x302cdcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_302ce0:
    // 0x302ce0: 0x24c6fff5
    ctx->pc = 0x302ce0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x302ce4: 0x10c0001a
    ctx->pc = 0x302CE4u;
    {
        const bool branch_taken_0x302ce4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x302CE8u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        if (branch_taken_0x302ce4) {
            ctx->pc = 0x302D50u;
            goto label_302d50;
        }
    }
    ctx->pc = 0x302CECu;
    // 0x302cec: 0x3c053ff0
    ctx->pc = 0x302cecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)16368 << 16));
    // 0x302cf0: 0x471006
    ctx->pc = 0x302cf0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x302cf4: 0xd31804
    ctx->pc = 0x302cf4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x302cf8: 0x451025
    ctx->pc = 0x302cf8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x302cfc: 0x3c04ffff
    ctx->pc = 0x302cfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x302d00: 0x4203e
    ctx->pc = 0x302d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x302d04: 0x621825
    ctx->pc = 0x302d04u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x302d08: 0x2248824
    ctx->pc = 0x302d08u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x302d0c: 0x3183c
    ctx->pc = 0x302d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x302d10: 0x292102b
    ctx->pc = 0x302d10u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x302d14: 0x2238825
    ctx->pc = 0x302d14u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x302d18: 0x10400002
    ctx->pc = 0x302D18u;
    {
        const bool branch_taken_0x302d18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x302D1Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x302d18) {
            ctx->pc = 0x302D24u;
            goto label_302d24;
        }
    }
    ctx->pc = 0x302D20u;
    // 0x302d20: 0x8e53fffc
    ctx->pc = 0x302d20u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_302d24:
    // 0x302d24: 0x61023
    ctx->pc = 0x302d24u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x302d28: 0xc71804
    ctx->pc = 0x302d28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x302d2c: 0x531006
    ctx->pc = 0x302d2cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x302d30: 0x2404ffff
    ctx->pc = 0x302d30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x302d34: 0x4203c
    ctx->pc = 0x302d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x302d38: 0x621825
    ctx->pc = 0x302d38u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x302d3c: 0x2248824
    ctx->pc = 0x302d3cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x302d40: 0x3183c
    ctx->pc = 0x302d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_302d44:
    // 0x302d44: 0x3183e
    ctx->pc = 0x302d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x302d48: 0x10000007
    ctx->pc = 0x302D48u;
    {
        const bool branch_taken_0x302d48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x302D4Cu;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        if (branch_taken_0x302d48) {
            ctx->pc = 0x302D68u;
            goto label_302d68;
        }
    }
    ctx->pc = 0x302D50u;
label_302d50:
    // 0x302d50: 0x3c033ff0
    ctx->pc = 0x302d50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16368 << 16));
    // 0x302d54: 0x2631825
    ctx->pc = 0x302d54u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x302d58: 0x7103c
    ctx->pc = 0x302d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x302d5c: 0x2103e
    ctx->pc = 0x302d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x302d60: 0x3883c
    ctx->pc = 0x302d60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x302d64: 0x2228825
    ctx->pc = 0x302d64u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_302d68:
    // 0x302d68: 0x220102d
    ctx->pc = 0x302d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302d6c: 0xdfbf0060
    ctx->pc = 0x302d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x302d70: 0xdfb40050
    ctx->pc = 0x302d70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x302d74: 0xdfb30040
    ctx->pc = 0x302d74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302d78: 0xdfb20030
    ctx->pc = 0x302d78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302d7c: 0xdfb10020
    ctx->pc = 0x302d7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302d80: 0xdfb00010
    ctx->pc = 0x302d80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302d84: 0x3e00008
    ctx->pc = 0x302D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302D88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302CA0u: goto label_302ca0;
            case 0x302CCCu: goto label_302ccc;
            case 0x302CE0u: goto label_302ce0;
            case 0x302D24u: goto label_302d24;
            case 0x302D44u: goto label_302d44;
            case 0x302D50u: goto label_302d50;
            case 0x302D68u: goto label_302d68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x302D8Cu;
}
