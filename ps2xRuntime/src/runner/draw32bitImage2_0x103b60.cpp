#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: draw32bitImage2
// Address: 0x103b60 - 0x103e00
void draw32bitImage2_0x103b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103b60u;

    // 0x103b60: 0x27bdff70
    ctx->pc = 0x103b60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x103b64: 0x8f8282b4
    ctx->pc = 0x103b64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x103b68: 0xffb70070
    ctx->pc = 0x103b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x103b6c: 0xffb60060
    ctx->pc = 0x103b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x103b70: 0x140b82d
    ctx->pc = 0x103b70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b74: 0xffb50050
    ctx->pc = 0x103b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x103b78: 0x100b02d
    ctx->pc = 0x103b78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b7c: 0xffb40040
    ctx->pc = 0x103b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x103b80: 0x120a82d
    ctx->pc = 0x103b80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b84: 0xffb30030
    ctx->pc = 0x103b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x103b88: 0xe0a02d
    ctx->pc = 0x103b88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b8c: 0xffb20020
    ctx->pc = 0x103b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103b90: 0xc0982d
    ctx->pc = 0x103b90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b94: 0xffb10010
    ctx->pc = 0x103b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103b98: 0x317200ff
    ctx->pc = 0x103b98u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 11), 255));
    // 0x103b9c: 0xffb00000
    ctx->pc = 0x103b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103ba0: 0xa0882d
    ctx->pc = 0x103ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ba4: 0x80802d
    ctx->pc = 0x103ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ba8: 0x12020005
    ctx->pc = 0x103BA8u;
    {
        const bool branch_taken_0x103ba8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x103BACu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        if (branch_taken_0x103ba8) {
            ctx->pc = 0x103BC0u;
            goto label_103bc0;
        }
    }
    ctx->pc = 0x103BB0u;
    // 0x103bb0: 0x24052b00
    ctx->pc = 0x103bb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x103bb4: 0x220302d
    ctx->pc = 0x103bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103bb8: 0xc040c8c
    ctx->pc = 0x103BB8u;
    SET_GPR_U32(ctx, 31, 0x103BC0u);
    ctx->pc = 0x103BBCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103230u;
    {
        const uint32_t __entryPc = ctx->pc;
        load32bitImage_0x103230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103BC0u; }
    }
    if (ctx->pc != 0x103BC0u) { return; }
    ctx->pc = 0x103BC0u;
label_103bc0:
    // 0x103bc0: 0x8f8282b8
    ctx->pc = 0x103bc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103bc4: 0x70001ca9
    ctx->pc = 0x103bc4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103bc8: 0xaf9082b4
    ctx->pc = 0x103bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 16));
    // 0x103bcc: 0x3c051000
    ctx->pc = 0x103bccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x103bd0: 0x5283c
    ctx->pc = 0x103bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x103bd4: 0x34a50005
    ctx->pc = 0x103bd4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 5));
    // 0x103bd8: 0x7c430000
    ctx->pc = 0x103bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x103bdc: 0x3c071000
    ctx->pc = 0x103bdcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)4096 << 16));
    // 0x103be0: 0x2406000e
    ctx->pc = 0x103be0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x103be4: 0x2403003f
    ctx->pc = 0x103be4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 63));
    // 0x103be8: 0xfc450010
    ctx->pc = 0x103be8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x103bec: 0x260202d
    ctx->pc = 0x103becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103bf0: 0xac470000
    ctx->pc = 0x103bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x103bf4: 0x24050002
    ctx->pc = 0x103bf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x103bf8: 0xfc430028
    ctx->pc = 0x103bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x103bfc: 0xfc460018
    ctx->pc = 0x103bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 6));
    // 0x103c00: 0xc040a92
    ctx->pc = 0x103C00u;
    SET_GPR_U32(ctx, 31, 0x103C08u);
    ctx->pc = 0x103C04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 0));
    ctx->pc = 0x102A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        power_0x102a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103C08u; }
    }
    if (ctx->pc != 0x103C08u) { return; }
    ctx->pc = 0x103C08u;
    // 0x103c08: 0x40802d
    ctx->pc = 0x103c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c0c: 0x220202d
    ctx->pc = 0x103c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c10: 0xc040a92
    ctx->pc = 0x103C10u;
    SET_GPR_U32(ctx, 31, 0x103C18u);
    ctx->pc = 0x103C14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x102A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        power_0x102a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103C18u; }
    }
    if (ctx->pc != 0x103C18u) { return; }
    ctx->pc = 0x103C18u;
    // 0x103c18: 0x2403ffff
    ctx->pc = 0x103c18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103c1c: 0x2624003f
    ctx->pc = 0x103c1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 63));
    // 0x103c20: 0x71182a
    ctx->pc = 0x103c20u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x103c24: 0x223200b
    ctx->pc = 0x103c24u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 17));
    // 0x103c28: 0x42183
    ctx->pc = 0x103c28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x103c2c: 0x216b8
    ctx->pc = 0x103c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x103c30: 0x1087b8
    ctx->pc = 0x103c30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 30);
    // 0x103c34: 0x423b8
    ctx->pc = 0x103c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x103c38: 0x34038000
    ctx->pc = 0x103c38u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x103c3c: 0x31bbc
    ctx->pc = 0x103c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x103c40: 0x2028025
    ctx->pc = 0x103c40u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x103c44: 0x832025
    ctx->pc = 0x103c44u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x103c48: 0x121c00
    ctx->pc = 0x103c48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 16));
    // 0x103c4c: 0x123600
    ctx->pc = 0x103c4cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 18), 24));
    // 0x103c50: 0x121200
    ctx->pc = 0x103c50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 8));
    // 0x103c54: 0x902025
    ctx->pc = 0x103c54u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x103c58: 0x431025
    ctx->pc = 0x103c58u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x103c5c: 0xd23025
    ctx->pc = 0x103c5cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x103c60: 0x155043
    ctx->pc = 0x103c60u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 21), 1));
    // 0x103c64: 0x24050004
    ctx->pc = 0x103c64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x103c68: 0x5283c
    ctx->pc = 0x103c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x103c6c: 0x34a52b00
    ctx->pc = 0x103c6cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 11008));
    // 0x103c70: 0x8f9582b8
    ctx->pc = 0x103c70u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103c74: 0xc23025
    ctx->pc = 0x103c74u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x103c78: 0x852025
    ctx->pc = 0x103c78u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x103c7c: 0x28a9023
    ctx->pc = 0x103c7cu;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
    // 0x103c80: 0x174843
    ctx->pc = 0x103c80u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 23), 1));
    // 0x103c84: 0x24020006
    ctx->pc = 0x103c84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x103c88: 0x24050154
    ctx->pc = 0x103c88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 340));
    // 0x103c8c: 0x240b001f
    ctx->pc = 0x103c8cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 31));
    // 0x103c90: 0xb583c
    ctx->pc = 0x103c90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x103c94: 0x356b0029
    ctx->pc = 0x103c94u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 41));
    // 0x103c98: 0x240c0042
    ctx->pc = 0x103c98u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 66));
    // 0x103c9c: 0x240d0001
    ctx->pc = 0x103c9cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 1));
    // 0x103ca0: 0x3c0e8000
    ctx->pc = 0x103ca0u;
    SET_GPR_U32(ctx, 14, ((uint32_t)32768 << 16));
    // 0x103ca4: 0xe703c
    ctx->pc = 0x103ca4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x103ca8: 0x35ce8001
    ctx->pc = 0x103ca8u;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), 32769));
    // 0x103cac: 0x3c0f4343
    ctx->pc = 0x103cacu;
    SET_GPR_U32(ctx, 15, ((uint32_t)17219 << 16));
    // 0x103cb0: 0x35ef4343
    ctx->pc = 0x103cb0u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), 17219));
    // 0x103cb4: 0xfea40030
    ctx->pc = 0x103cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 4));
    // 0x103cb8: 0x2c98023
    ctx->pc = 0x103cb8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 9)));
    // 0x103cbc: 0xfea20038
    ctx->pc = 0x103cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 56), GPR_U64(ctx, 2));
    // 0x103cc0: 0x26a70090
    ctx->pc = 0x103cc0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 21), 144));
    // 0x103cc4: 0xfea50040
    ctx->pc = 0x103cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 5));
    // 0x103cc8: 0x3c080010
    ctx->pc = 0x103cc8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)16 << 16));
    // 0x103ccc: 0xfeab0050
    ctx->pc = 0x103cccu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 80), GPR_U64(ctx, 11));
    // 0x103cd0: 0x28a5021
    ctx->pc = 0x103cd0u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
    // 0x103cd4: 0xfeac0058
    ctx->pc = 0x103cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 12));
    // 0x103cd8: 0x118900
    ctx->pc = 0x103cd8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 4));
    // 0x103cdc: 0xfea60060
    ctx->pc = 0x103cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 96), GPR_U64(ctx, 6));
    // 0x103ce0: 0x26a200b0
    ctx->pc = 0x103ce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 176));
    // 0x103ce4: 0xaeb20090
    ctx->pc = 0x103ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 18));
    // 0x103ce8: 0x135900
    ctx->pc = 0x103ce8u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 19), 4));
    // 0x103cec: 0xfead0068
    ctx->pc = 0x103cecu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 104), GPR_U64(ctx, 13));
    // 0x103cf0: 0x26a500d0
    ctx->pc = 0x103cf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 208));
    // 0x103cf4: 0xfeae0070
    ctx->pc = 0x103cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 112), GPR_U64(ctx, 14));
    // 0x103cf8: 0x2c94821
    ctx->pc = 0x103cf8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 9)));
    // 0x103cfc: 0xfeaf0078
    ctx->pc = 0x103cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 120), GPR_U64(ctx, 15));
    // 0x103d00: 0x26a600f0
    ctx->pc = 0x103d00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 240));
    // 0x103d04: 0xfea00048
    ctx->pc = 0x103d04u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 0));
    // 0x103d08: 0x3c0c7000
    ctx->pc = 0x103d08u;
    SET_GPR_U32(ctx, 12, ((uint32_t)28672 << 16));
    // 0x103d0c: 0xaea00080
    ctx->pc = 0x103d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 0));
    // 0x103d10: 0x202d
    ctx->pc = 0x103d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d14: 0xaea00084
    ctx->pc = 0x103d14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
    // 0x103d18: 0xacf00004
    ctx->pc = 0x103d18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x103d1c: 0xace0000c
    ctx->pc = 0x103d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x103d20: 0xace80008
    ctx->pc = 0x103d20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x103d24: 0xaeb100a0
    ctx->pc = 0x103d24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 160), GPR_U32(ctx, 17));
    // 0x103d28: 0xaea000a4
    ctx->pc = 0x103d28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 0));
    // 0x103d2c: 0xaeaa00b0
    ctx->pc = 0x103d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 10));
    // 0x103d30: 0xac500004
    ctx->pc = 0x103d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x103d34: 0xac40000c
    ctx->pc = 0x103d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x103d38: 0xac480008
    ctx->pc = 0x103d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x103d3c: 0xaeb200d0
    ctx->pc = 0x103d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 208), GPR_U32(ctx, 18));
    // 0x103d40: 0x700014a9
    ctx->pc = 0x103d40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103d44: 0xaea000c0
    ctx->pc = 0x103d44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 0));
    // 0x103d48: 0xaeab00c4
    ctx->pc = 0x103d48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 11));
    // 0x103d4c: 0xaca0000c
    ctx->pc = 0x103d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x103d50: 0xaca90004
    ctx->pc = 0x103d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x103d54: 0xaca80008
    ctx->pc = 0x103d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x103d58: 0xaeb100e0
    ctx->pc = 0x103d58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 17));
    // 0x103d5c: 0xaeab00e4
    ctx->pc = 0x103d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 11));
    // 0x103d60: 0xaeaa00f0
    ctx->pc = 0x103d60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 10));
    // 0x103d64: 0xacc90004
    ctx->pc = 0x103d64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x103d68: 0xacc80008
    ctx->pc = 0x103d68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x103d6c: 0xacc0000c
    ctx->pc = 0x103d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x103d70: 0x7ea20100
    ctx->pc = 0x103d70u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 256), GPR_VEC(ctx, 2));
    // 0x103d74: 0x8ea20000
    ctx->pc = 0x103d74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x103d78: 0xaeac0100
    ctx->pc = 0x103d78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 256), GPR_U32(ctx, 12));
    // 0x103d7c: 0x3442000f
    ctx->pc = 0x103d7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 15));
    // 0x103d80: 0xc043948
    ctx->pc = 0x103D80u;
    SET_GPR_U32(ctx, 31, 0x103D88u);
    ctx->pc = 0x103D84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103D88u; }
    }
    if (ctx->pc != 0x103D88u) { return; }
    ctx->pc = 0x103D88u;
    // 0x103d88: 0x202d
    ctx->pc = 0x103d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d8c: 0xc043322
    ctx->pc = 0x103D8Cu;
    SET_GPR_U32(ctx, 31, 0x103D94u);
    ctx->pc = 0x103D90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103D94u; }
    }
    if (ctx->pc != 0x103D94u) { return; }
    ctx->pc = 0x103D94u;
    // 0x103d94: 0x8f848490
    ctx->pc = 0x103d94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103d98: 0x282d
    ctx->pc = 0x103d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d9c: 0xc04372a
    ctx->pc = 0x103D9Cu;
    SET_GPR_U32(ctx, 31, 0x103DA4u);
    ctx->pc = 0x103DA0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DA4u; }
    }
    if (ctx->pc != 0x103DA4u) { return; }
    ctx->pc = 0x103DA4u;
    // 0x103da4: 0x8f8382b8
    ctx->pc = 0x103da4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103da8: 0x3c050fff
    ctx->pc = 0x103da8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4095 << 16));
    // 0x103dac: 0x34a5ffff
    ctx->pc = 0x103dacu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x103db0: 0x8f848490
    ctx->pc = 0x103db0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103db4: 0xc0435d6
    ctx->pc = 0x103DB4u;
    SET_GPR_U32(ctx, 31, 0x103DBCu);
    ctx->pc = 0x103DB8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x10D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DBCu; }
    }
    if (ctx->pc != 0x103DBCu) { return; }
    ctx->pc = 0x103DBCu;
    // 0x103dbc: 0x202d
    ctx->pc = 0x103dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103dc0: 0xc043322
    ctx->pc = 0x103DC0u;
    SET_GPR_U32(ctx, 31, 0x103DC8u);
    ctx->pc = 0x103DC4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DC8u; }
    }
    if (ctx->pc != 0x103DC8u) { return; }
    ctx->pc = 0x103DC8u;
    // 0x103dc8: 0x8f848490
    ctx->pc = 0x103dc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103dcc: 0x282d
    ctx->pc = 0x103dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103dd0: 0xdfbf0080
    ctx->pc = 0x103dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x103dd4: 0x302d
    ctx->pc = 0x103dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103dd8: 0xdfb70070
    ctx->pc = 0x103dd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x103ddc: 0xdfb60060
    ctx->pc = 0x103ddcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x103de0: 0xdfb50050
    ctx->pc = 0x103de0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x103de4: 0xdfb40040
    ctx->pc = 0x103de4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103de8: 0xdfb30030
    ctx->pc = 0x103de8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103dec: 0xdfb20020
    ctx->pc = 0x103decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103df0: 0xdfb10010
    ctx->pc = 0x103df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103df4: 0xdfb00000
    ctx->pc = 0x103df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103df8: 0x804372a
    ctx->pc = 0x103DF8u;
    ctx->pc = 0x103DFCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x10DCA8u;
    sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    ctx->pc = 0x103E00u;
}
