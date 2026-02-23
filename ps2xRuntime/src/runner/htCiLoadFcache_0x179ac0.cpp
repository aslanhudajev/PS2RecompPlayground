#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiLoadFcache
// Address: 0x179ac0 - 0x179be4
void htCiLoadFcache_0x179ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiLoadFcache");


    ctx->pc = 0x179ac0u;

    // 0x179ac0: 0x27bdffa0
    ctx->pc = 0x179ac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x179ac4: 0x3c02002e
    ctx->pc = 0x179ac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x179ac8: 0xffb40040
    ctx->pc = 0x179ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x179acc: 0xffb20020
    ctx->pc = 0x179accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x179ad0: 0x24540840
    ctx->pc = 0x179ad0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 2112));
    // 0x179ad4: 0xffb10010
    ctx->pc = 0x179ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x179ad8: 0xa0902d
    ctx->pc = 0x179ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179adc: 0xffb00000
    ctx->pc = 0x179adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179ae0: 0x80882d
    ctx->pc = 0x179ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ae4: 0xffb30030
    ctx->pc = 0x179ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x179ae8: 0xc0802d
    ctx->pc = 0x179ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179aec: 0xffbf0050
    ctx->pc = 0x179aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x179af0: 0xe0982d
    ctx->pc = 0x179af0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179af4: 0x280202d
    ctx->pc = 0x179af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179af8: 0x282d
    ctx->pc = 0x179af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179afc: 0xc050cfe
    ctx->pc = 0x179AFCu;
    SET_GPR_U32(ctx, 31, 0x179B04u);
    ctx->pc = 0x179B00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B04u; }
        else if (ctx->pc != 0x179B04u) { ctx->pc = 0x179B04u; }
    }
    if (ctx->pc != 0x179B04u) { return; }
    ctx->pc = 0x179B04u;
    // 0x179b04: 0x3c030024
    ctx->pc = 0x179b04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x179b08: 0x8c62a428
    ctx->pc = 0x179b08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943784)));
    // 0x179b0c: 0x14400003
    ctx->pc = 0x179B0Cu;
    {
        const bool branch_taken_0x179b0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x179b0c) {
            ctx->pc = 0x179B1Cu;
            goto label_179b1c;
        }
    }
    ctx->pc = 0x179B14u;
    // 0x179b14: 0xc05e69c
    ctx->pc = 0x179B14u;
    SET_GPR_U32(ctx, 31, 0x179B1Cu);
    ctx->pc = 0x179A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_init_flist_0x179a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B1Cu; }
        else if (ctx->pc != 0x179B1Cu) { ctx->pc = 0x179B1Cu; }
    }
    if (ctx->pc != 0x179B1Cu) { return; }
    ctx->pc = 0x179B1Cu;
label_179b1c:
    // 0x179b1c: 0xc05e21a
    ctx->pc = 0x179B1Cu;
    SET_GPR_U32(ctx, 31, 0x179B24u);
    ctx->pc = 0x178868u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_wait_io_0x178868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B24u; }
        else if (ctx->pc != 0x179B24u) { ctx->pc = 0x179B24u; }
    }
    if (ctx->pc != 0x179B24u) { return; }
    ctx->pc = 0x179B24u;
    // 0x179b24: 0xc05e61c
    ctx->pc = 0x179B24u;
    SET_GPR_U32(ctx, 31, 0x179B2Cu);
    ctx->pc = 0x179870u;
    {
        const uint32_t __entryPc = ctx->pc;
        close_file_all_0x179870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B2Cu; }
        else if (ctx->pc != 0x179B2Cu) { ctx->pc = 0x179B2Cu; }
    }
    if (ctx->pc != 0x179B2Cu) { return; }
    ctx->pc = 0x179B2Cu;
    // 0x179b2c: 0x12200025
    ctx->pc = 0x179B2Cu;
    {
        const bool branch_taken_0x179b2c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x179B30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179b2c) {
            ctx->pc = 0x179BC4u;
            goto label_179bc4;
        }
    }
    ctx->pc = 0x179B34u;
    // 0x179b34: 0x12400024
    ctx->pc = 0x179B34u;
    {
        const bool branch_taken_0x179b34 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x179B38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x179b34) {
            ctx->pc = 0x179BC8u;
            goto label_179bc8;
        }
    }
    ctx->pc = 0x179B3Cu;
    // 0x179b3c: 0x12000022
    ctx->pc = 0x179B3Cu;
    {
        const bool branch_taken_0x179b3c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x179B40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179b3c) {
            ctx->pc = 0x179BC8u;
            goto label_179bc8;
        }
    }
    ctx->pc = 0x179B44u;
    // 0x179b44: 0xc05e588
    ctx->pc = 0x179B44u;
    SET_GPR_U32(ctx, 31, 0x179B4Cu);
    ctx->pc = 0x179B48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179620u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_load_flist_0x179620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B4Cu; }
        else if (ctx->pc != 0x179B4Cu) { ctx->pc = 0x179B4Cu; }
    }
    if (ctx->pc != 0x179B4Cu) { return; }
    ctx->pc = 0x179B4Cu;
    // 0x179b4c: 0x5440000b
    ctx->pc = 0x179B4Cu;
    {
        const bool branch_taken_0x179b4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x179b4c) {
            ctx->pc = 0x179B50u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 19), 9));
            ctx->pc = 0x179B7Cu;
            goto label_179b7c;
        }
    }
    ctx->pc = 0x179B54u;
    // 0x179b54: 0x3c04002c
    ctx->pc = 0x179b54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x179b58: 0x220282d
    ctx->pc = 0x179b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b5c: 0xc05114a
    ctx->pc = 0x179B5Cu;
    SET_GPR_U32(ctx, 31, 0x179B64u);
    ctx->pc = 0x179B60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949264));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B64u; }
        else if (ctx->pc != 0x179B64u) { ctx->pc = 0x179B64u; }
    }
    if (ctx->pc != 0x179B64u) { return; }
    ctx->pc = 0x179B64u;
    // 0x179b64: 0x3c05002c
    ctx->pc = 0x179b64u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x179b68: 0x202d
    ctx->pc = 0x179b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b6c: 0xc05e1ca
    ctx->pc = 0x179B6Cu;
    SET_GPR_U32(ctx, 31, 0x179B74u);
    ctx->pc = 0x179B70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294949304));
    ctx->pc = 0x178728u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_call_errfn_0x178728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B74u; }
        else if (ctx->pc != 0x179B74u) { ctx->pc = 0x179B74u; }
    }
    if (ctx->pc != 0x179B74u) { return; }
    ctx->pc = 0x179B74u;
    // 0x179b74: 0x10000013
    ctx->pc = 0x179B74u;
    {
        const bool branch_taken_0x179b74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179B78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179b74) {
            ctx->pc = 0x179BC4u;
            goto label_179bc4;
        }
    }
    ctx->pc = 0x179B7Cu;
label_179b7c:
    // 0x179b7c: 0x280282d
    ctx->pc = 0x179b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b80: 0x211001b
    ctx->pc = 0x179b80u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 16) / divisor; ctx->hi = GPR_U32(ctx, 17) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,16); } }
    // 0x179b84: 0x52200001
    ctx->pc = 0x179B84u;
    {
        const bool branch_taken_0x179b84 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x179b84) {
            ctx->pc = 0x179B88u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x179B8Cu;
            goto label_179b8c;
        }
    }
    ctx->pc = 0x179B8Cu;
label_179b8c:
    // 0x179b8c: 0x240202d
    ctx->pc = 0x179b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b90: 0x260382d
    ctx->pc = 0x179b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b94: 0x8012
    ctx->pc = 0x179b94u;
    SET_GPR_U32(ctx, 16, ctx->lo);
    // 0x179b98: 0xc05e538
    ctx->pc = 0x179B98u;
    SET_GPR_U32(ctx, 31, 0x179BA0u);
    ctx->pc = 0x179B9Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1794E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        analysis_flist_0x1794e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BA0u; }
        else if (ctx->pc != 0x179BA0u) { ctx->pc = 0x179BA0u; }
    }
    if (ctx->pc != 0x179BA0u) { return; }
    ctx->pc = 0x179BA0u;
    // 0x179ba0: 0x240202d
    ctx->pc = 0x179ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ba4: 0xc05e5bc
    ctx->pc = 0x179BA4u;
    SET_GPR_U32(ctx, 31, 0x179BACu);
    ctx->pc = 0x179BA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1796F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        open_file_all_0x1796f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BACu; }
        else if (ctx->pc != 0x179BACu) { ctx->pc = 0x179BACu; }
    }
    if (ctx->pc != 0x179BACu) { return; }
    ctx->pc = 0x179BACu;
    // 0x179bac: 0x26630001
    ctx->pc = 0x179bacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 1));
    // 0x179bb0: 0x1080c0
    ctx->pc = 0x179bb0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
    // 0x179bb4: 0x431018
    ctx->pc = 0x179bb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x179bb8: 0x52200001
    ctx->pc = 0x179BB8u;
    {
        const bool branch_taken_0x179bb8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x179bb8) {
            ctx->pc = 0x179BBCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x179BC0u;
            goto label_179bc0;
        }
    }
    ctx->pc = 0x179BC0u;
label_179bc0:
    // 0x179bc0: 0x2021021
    ctx->pc = 0x179bc0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_179bc4:
    // 0x179bc4: 0xdfbf0050
    ctx->pc = 0x179bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_179bc8:
    // 0x179bc8: 0xdfb40040
    ctx->pc = 0x179bc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179bcc: 0xdfb30030
    ctx->pc = 0x179bccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179bd0: 0xdfb20020
    ctx->pc = 0x179bd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179bd4: 0xdfb10010
    ctx->pc = 0x179bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179bd8: 0xdfb00000
    ctx->pc = 0x179bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179bdc: 0x3e00008
    ctx->pc = 0x179BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179BE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179B1Cu: goto label_179b1c;
            case 0x179B7Cu: goto label_179b7c;
            case 0x179B8Cu: goto label_179b8c;
            case 0x179BC0u: goto label_179bc0;
            case 0x179BC4u: goto label_179bc4;
            case 0x179BC8u: goto label_179bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179BE4u;
}
