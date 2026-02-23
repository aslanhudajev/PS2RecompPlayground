#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _getPtsDtsFlags
// Address: 0x162af8 - 0x162c8c
void _getPtsDtsFlags_0x162af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_getPtsDtsFlags");


    ctx->pc = 0x162af8u;

    // 0x162af8: 0x27bdff50
    ctx->pc = 0x162af8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x162afc: 0x3c020023
    ctx->pc = 0x162afcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x162b00: 0xffbe0090
    ctx->pc = 0x162b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x162b04: 0xffb50060
    ctx->pc = 0x162b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x162b08: 0xc0f02d
    ctx->pc = 0x162b08u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b0c: 0xffb40050
    ctx->pc = 0x162b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x162b10: 0xa0a82d
    ctx->pc = 0x162b10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b14: 0xffbf00a0
    ctx->pc = 0x162b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x162b18: 0xffb70080
    ctx->pc = 0x162b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x162b1c: 0xffb60070
    ctx->pc = 0x162b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x162b20: 0xffb20030
    ctx->pc = 0x162b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x162b24: 0xffb10020
    ctx->pc = 0x162b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x162b28: 0xffb00010
    ctx->pc = 0x162b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x162b2c: 0x8c43a21c
    ctx->pc = 0x162b2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    // 0x162b30: 0xafa70000
    ctx->pc = 0x162b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x162b34: 0xffb30040
    ctx->pc = 0x162b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x162b38: 0x8c730040
    ctx->pc = 0x162b38u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x162b3c: 0x8e620070
    ctx->pc = 0x162b3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x162b40: 0x10400025
    ctx->pc = 0x162B40u;
    {
        const bool branch_taken_0x162b40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162B44u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162b40) {
            ctx->pc = 0x162BD8u;
            goto label_162bd8;
        }
    }
    ctx->pc = 0x162B48u;
    // 0x162b48: 0xde820018
    ctx->pc = 0x162b48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x162b4c: 0x4430024
    ctx->pc = 0x162B4Cu;
    {
        const bool branch_taken_0x162b4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x162b4c) {
            ctx->pc = 0x162B50u;
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
            ctx->pc = 0x162BE0u;
            goto label_162be0;
        }
    }
    ctx->pc = 0x162B54u;
    // 0x162b54: 0x8e770080
    ctx->pc = 0x162b54u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x162b58: 0x6e20021
    ctx->pc = 0x162B58u;
    {
        const bool branch_taken_0x162b58 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x162b58) {
            ctx->pc = 0x162B5Cu;
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
            ctx->pc = 0x162BE0u;
            goto label_162be0;
        }
    }
    ctx->pc = 0x162B60u;
    // 0x162b60: 0xde700088
    ctx->pc = 0x162b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x162b64: 0xde650078
    ctx->pc = 0x162b64u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x162b68: 0x10803c
    ctx->pc = 0x162b68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x162b6c: 0x10803f
    ctx->pc = 0x162b6cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x162b70: 0x32120001
    ctx->pc = 0x162b70u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 16), 1));
    // 0x162b74: 0x30a50001
    ctx->pc = 0x162b74u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    // 0x162b78: 0xc0528a8
    ctx->pc = 0x162B78u;
    SET_GPR_U32(ctx, 31, 0x162B80u);
    ctx->pc = 0x162B7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14A2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x14a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B80u; }
        else if (ctx->pc != 0x162B80u) { ctx->pc = 0x162B80u; }
    }
    if (ctx->pc != 0x162B80u) { return; }
    ctx->pc = 0x162B80u;
    // 0x162b80: 0x8e760090
    ctx->pc = 0x162b80u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x162b84: 0x40202d
    ctx->pc = 0x162b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b88: 0xc0528a8
    ctx->pc = 0x162B88u;
    SET_GPR_U32(ctx, 31, 0x162B90u);
    ctx->pc = 0x162B8Cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x14A2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x14a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B90u; }
        else if (ctx->pc != 0x162B90u) { ctx->pc = 0x162B90u; }
    }
    if (ctx->pc != 0x162B90u) { return; }
    ctx->pc = 0x162B90u;
    // 0x162b90: 0xde640078
    ctx->pc = 0x162b90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x162b94: 0x2883c
    ctx->pc = 0x162b94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x162b98: 0x11883f
    ctx->pc = 0x162b98u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x162b9c: 0xc0528a8
    ctx->pc = 0x162B9Cu;
    SET_GPR_U32(ctx, 31, 0x162BA4u);
    ctx->pc = 0x162BA0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14A2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x14a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BA4u; }
        else if (ctx->pc != 0x162BA4u) { ctx->pc = 0x162BA4u; }
    }
    if (ctx->pc != 0x162BA4u) { return; }
    ctx->pc = 0x162BA4u;
    // 0x162ba4: 0x217f8
    ctx->pc = 0x162ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x162ba8: 0x2103f
    ctx->pc = 0x162ba8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x162bac: 0x240202d
    ctx->pc = 0x162bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162bb0: 0x511021
    ctx->pc = 0x162bb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x162bb4: 0x2e21021
    ctx->pc = 0x162bb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x162bb8: 0xfea20000
    ctx->pc = 0x162bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x162bbc: 0xde650078
    ctx->pc = 0x162bbcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x162bc0: 0xc0528a8
    ctx->pc = 0x162BC0u;
    SET_GPR_U32(ctx, 31, 0x162BC8u);
    ctx->pc = 0x162BC4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x14A2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x14a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BC8u; }
        else if (ctx->pc != 0x162BC8u) { ctx->pc = 0x162BC8u; }
    }
    if (ctx->pc != 0x162BC8u) { return; }
    ctx->pc = 0x162BC8u;
    // 0x162bc8: 0x10400005
    ctx->pc = 0x162BC8u;
    {
        const bool branch_taken_0x162bc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162BCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x162bc8) {
            ctx->pc = 0x162BE0u;
            goto label_162be0;
        }
    }
    ctx->pc = 0x162BD0u;
    // 0x162bd0: 0x10000003
    ctx->pc = 0x162BD0u;
    {
        const bool branch_taken_0x162bd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162BD4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
        if (branch_taken_0x162bd0) {
            ctx->pc = 0x162BE0u;
            goto label_162be0;
        }
    }
    ctx->pc = 0x162BD8u;
label_162bd8:
    // 0x162bd8: 0xde820018
    ctx->pc = 0x162bd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x162bdc: 0xfea20000
    ctx->pc = 0x162bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_162be0:
    // 0x162be0: 0x8e6300f8
    ctx->pc = 0x162be0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x162be4: 0x24020002
    ctx->pc = 0x162be4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x162be8: 0x54620009
    ctx->pc = 0x162BE8u;
    {
        const bool branch_taken_0x162be8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x162be8) {
            ctx->pc = 0x162BECu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->pc = 0x162C10u;
            goto label_162c10;
        }
    }
    ctx->pc = 0x162BF0u;
    // 0x162bf0: 0xde6200f0
    ctx->pc = 0x162bf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x162bf4: 0x4420006
    ctx->pc = 0x162BF4u;
    {
        const bool branch_taken_0x162bf4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x162bf4) {
            ctx->pc = 0x162BF8u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->pc = 0x162C10u;
            goto label_162c10;
        }
    }
    ctx->pc = 0x162BFCu;
    // 0x162bfc: 0xfea20000
    ctx->pc = 0x162bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x162c00: 0x2402ffff
    ctx->pc = 0x162c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162c04: 0xae6000f8
    ctx->pc = 0x162c04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 0));
    // 0x162c08: 0xfe6200f0
    ctx->pc = 0x162c08u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x162c0c: 0x8e850040
    ctx->pc = 0x162c0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_162c10:
    // 0x162c10: 0x8e84003c
    ctx->pc = 0x162c10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x162c14: 0x8e820034
    ctx->pc = 0x162c14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x162c18: 0x52978
    ctx->pc = 0x162c18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x162c1c: 0x421b8
    ctx->pc = 0x162c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    // 0x162c20: 0x8e860030
    ctx->pc = 0x162c20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x162c24: 0x8e87002c
    ctx->pc = 0x162c24u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x162c28: 0xa42825
    ctx->pc = 0x162c28u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x162c2c: 0x8e830038
    ctx->pc = 0x162c2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x162c30: 0x21238
    ctx->pc = 0x162c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x162c34: 0xde840020
    ctx->pc = 0x162c34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x162c38: 0x471025
    ctx->pc = 0x162c38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x162c3c: 0x630f8
    ctx->pc = 0x162c3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 3);
    // 0x162c40: 0x319f8
    ctx->pc = 0x162c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x162c44: 0xffc40000
    ctx->pc = 0x162c44u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x162c48: 0x661825
    ctx->pc = 0x162c48u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x162c4c: 0x451025
    ctx->pc = 0x162c4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x162c50: 0xdfbf00a0
    ctx->pc = 0x162c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x162c54: 0x431025
    ctx->pc = 0x162c54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x162c58: 0xdfbe0090
    ctx->pc = 0x162c58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x162c5c: 0x8fa30000
    ctx->pc = 0x162c5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162c60: 0xdfb70080
    ctx->pc = 0x162c60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x162c64: 0xdfb60070
    ctx->pc = 0x162c64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x162c68: 0xdfb50060
    ctx->pc = 0x162c68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x162c6c: 0xdfb40050
    ctx->pc = 0x162c6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162c70: 0xdfb30040
    ctx->pc = 0x162c70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162c74: 0xdfb20030
    ctx->pc = 0x162c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162c78: 0xdfb10020
    ctx->pc = 0x162c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162c7c: 0xdfb00010
    ctx->pc = 0x162c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162c80: 0xfc620000
    ctx->pc = 0x162c80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x162c84: 0x3e00008
    ctx->pc = 0x162C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162BD8u: goto label_162bd8;
            case 0x162BE0u: goto label_162be0;
            case 0x162C10u: goto label_162c10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162C8Cu;
}
