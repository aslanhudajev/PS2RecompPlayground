#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_movie
// Address: 0x282a70 - 0x282b9c
void init_movie_0x282a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x282a70u;

    // 0x282a70: 0x27bdffd0
    ctx->pc = 0x282a70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282a74: 0xffbf0020
    ctx->pc = 0x282a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x282a78: 0xffb10010
    ctx->pc = 0x282a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x282a7c: 0xffb00000
    ctx->pc = 0x282a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282a80: 0x3c020031
    ctx->pc = 0x282a80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282a84: 0x8c42f18c
    ctx->pc = 0x282a84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963596)));
    // 0x282a88: 0x10400006
    ctx->pc = 0x282A88u;
    {
        const bool branch_taken_0x282a88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282A8Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x282a88) {
            ctx->pc = 0x282AA4u;
            goto label_282aa4;
        }
    }
    ctx->pc = 0x282A90u;
    // 0x282a90: 0x3c030035
    ctx->pc = 0x282a90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x282a94: 0x24020001
    ctx->pc = 0x282a94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x282a98: 0xac62a2d8
    ctx->pc = 0x282a98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943448), GPR_U32(ctx, 2));
    // 0x282a9c: 0x1000003a
    ctx->pc = 0x282A9Cu;
    {
        const bool branch_taken_0x282a9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282AA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x282a9c) {
            ctx->pc = 0x282B88u;
            goto label_282b88;
        }
    }
    ctx->pc = 0x282AA4u;
label_282aa4:
    // 0x282aa4: 0x3c020035
    ctx->pc = 0x282aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x282aa8: 0xac409ba0
    ctx->pc = 0x282aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941600), GPR_U32(ctx, 0));
    // 0x282aac: 0x3c020035
    ctx->pc = 0x282aacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x282ab0: 0xac519c94
    ctx->pc = 0x282ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941844), GPR_U32(ctx, 17));
    // 0x282ab4: 0x3c100035
    ctx->pc = 0x282ab4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x282ab8: 0x24020001
    ctx->pc = 0x282ab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x282abc: 0xae029c90
    ctx->pc = 0x282abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941840), GPR_U32(ctx, 2));
    // 0x282ac0: 0x3c060035
    ctx->pc = 0x282ac0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)53 << 16));
    // 0x282ac4: 0x3c050035
    ctx->pc = 0x282ac4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
    // 0x282ac8: 0x3c040035
    ctx->pc = 0x282ac8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x282acc: 0x3c030035
    ctx->pc = 0x282accu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x282ad0: 0x2402ffff
    ctx->pc = 0x282ad0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282ad4: 0xac629ba8
    ctx->pc = 0x282ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941608), GPR_U32(ctx, 2));
    // 0x282ad8: 0xac829bb0
    ctx->pc = 0x282ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294941616), GPR_U32(ctx, 2));
    // 0x282adc: 0xaca29bb4
    ctx->pc = 0x282adcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294941620), GPR_U32(ctx, 2));
    // 0x282ae0: 0xacc29bac
    ctx->pc = 0x282ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294941612), GPR_U32(ctx, 2));
    // 0x282ae4: 0x3c020035
    ctx->pc = 0x282ae4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x282ae8: 0x8c44a2e0
    ctx->pc = 0x282ae8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
    // 0x282aec: 0xc0a0896
    ctx->pc = 0x282AECu;
    SET_GPR_U32(ctx, 31, 0x282AF4u);
    ctx->pc = 0x282AF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x282258u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_attract_mode_0x282258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282AF4u; }
    }
    if (ctx->pc != 0x282AF4u) { return; }
    ctx->pc = 0x282AF4u;
    // 0x282af4: 0xc089994
    ctx->pc = 0x282AF4u;
    SET_GPR_U32(ctx, 31, 0x282AFCu);
    ctx->pc = 0x226650u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMBMem_0x226650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282AFCu; }
    }
    if (ctx->pc != 0x282AFCu) { return; }
    ctx->pc = 0x282AFCu;
    // 0x282afc: 0x24020002
    ctx->pc = 0x282afcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x282b00: 0xae029c90
    ctx->pc = 0x282b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941840), GPR_U32(ctx, 2));
    // 0x282b04: 0x3c040035
    ctx->pc = 0x282b04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x282b08: 0x3c020035
    ctx->pc = 0x282b08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x282b0c: 0x24439c40
    ctx->pc = 0x282b0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294941760));
    // 0x282b10: 0x3c020035
    ctx->pc = 0x282b10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x282b14: 0x8c429bbc
    ctx->pc = 0x282b14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941628)));
    // 0x282b18: 0x21080
    ctx->pc = 0x282b18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x282b1c: 0x112900
    ctx->pc = 0x282b1cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 4));
    // 0x282b20: 0x451021
    ctx->pc = 0x282b20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x282b24: 0x431021
    ctx->pc = 0x282b24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282b28: 0x8c420000
    ctx->pc = 0x282b28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282b2c: 0x14400004
    ctx->pc = 0x282B2Cu;
    {
        const bool branch_taken_0x282b2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282B30u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294943460), GPR_U32(ctx, 2));
        if (branch_taken_0x282b2c) {
            ctx->pc = 0x282B40u;
            goto label_282b40;
        }
    }
    ctx->pc = 0x282B34u;
    // 0x282b34: 0xa31021
    ctx->pc = 0x282b34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x282b38: 0x8c420000
    ctx->pc = 0x282b38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282b3c: 0xac82a2e4
    ctx->pc = 0x282b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943460), GPR_U32(ctx, 2));
label_282b40:
    // 0x282b40: 0x3c100035
    ctx->pc = 0x282b40u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x282b44: 0xae00a2d8
    ctx->pc = 0x282b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943448), GPR_U32(ctx, 0));
    // 0x282b48: 0x3c030035
    ctx->pc = 0x282b48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x282b4c: 0x2402000a
    ctx->pc = 0x282b4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x282b50: 0xac629c90
    ctx->pc = 0x282b50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941840), GPR_U32(ctx, 2));
    // 0x282b54: 0x3c020035
    ctx->pc = 0x282b54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x282b58: 0x3c04003b
    ctx->pc = 0x282b58u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x282b5c: 0x2484c458
    ctx->pc = 0x282b5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952024));
    // 0x282b60: 0x8c45a2e4
    ctx->pc = 0x282b60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294943460)));
    // 0x282b64: 0xc0b724a
    ctx->pc = 0x282B64u;
    SET_GPR_U32(ctx, 31, 0x282B6Cu);
    ctx->pc = 0x282B68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DC928u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitMovie_0x2dc928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282B6Cu; }
    }
    if (ctx->pc != 0x282B6Cu) { return; }
    ctx->pc = 0x282B6Cu;
    // 0x282b6c: 0x14400003
    ctx->pc = 0x282B6Cu;
    {
        const bool branch_taken_0x282b6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282B70u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x282b6c) {
            ctx->pc = 0x282B7Cu;
            goto label_282b7c;
        }
    }
    ctx->pc = 0x282B74u;
    // 0x282b74: 0x24020001
    ctx->pc = 0x282b74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x282b78: 0xae02a2d8
    ctx->pc = 0x282b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943448), GPR_U32(ctx, 2));
label_282b7c:
    // 0x282b7c: 0x24020063
    ctx->pc = 0x282b7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x282b80: 0xac629c90
    ctx->pc = 0x282b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941840), GPR_U32(ctx, 2));
    // 0x282b84: 0x24020001
    ctx->pc = 0x282b84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_282b88:
    // 0x282b88: 0xdfbf0020
    ctx->pc = 0x282b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282b8c: 0xdfb10010
    ctx->pc = 0x282b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282b90: 0xdfb00000
    ctx->pc = 0x282b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282b94: 0x3e00008
    ctx->pc = 0x282B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282B98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282AA4u: goto label_282aa4;
            case 0x282B40u: goto label_282b40;
            case 0x282B7Cu: goto label_282b7c;
            case 0x282B88u: goto label_282b88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282B9Cu;
}
