#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiLoadFpCache
// Address: 0x179be8 - 0x179cd8
void htCiLoadFpCache_0x179be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiLoadFpCache");


    ctx->pc = 0x179be8u;

    // 0x179be8: 0x27bdffb0
    ctx->pc = 0x179be8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x179bec: 0x3c02002e
    ctx->pc = 0x179becu;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x179bf0: 0xffb30030
    ctx->pc = 0x179bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x179bf4: 0xffb20020
    ctx->pc = 0x179bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x179bf8: 0xc0982d
    ctx->pc = 0x179bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179bfc: 0xffb10010
    ctx->pc = 0x179bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x179c00: 0x24520840
    ctx->pc = 0x179c00u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 2112));
    // 0x179c04: 0xffb00000
    ctx->pc = 0x179c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179c08: 0xa0882d
    ctx->pc = 0x179c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c0c: 0x80802d
    ctx->pc = 0x179c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c10: 0xffbf0040
    ctx->pc = 0x179c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x179c14: 0x240202d
    ctx->pc = 0x179c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c18: 0x282d
    ctx->pc = 0x179c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c1c: 0xc050cfe
    ctx->pc = 0x179C1Cu;
    SET_GPR_U32(ctx, 31, 0x179C24u);
    ctx->pc = 0x179C20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C24u; }
        else if (ctx->pc != 0x179C24u) { ctx->pc = 0x179C24u; }
    }
    if (ctx->pc != 0x179C24u) { return; }
    ctx->pc = 0x179C24u;
    // 0x179c24: 0x3c030024
    ctx->pc = 0x179c24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x179c28: 0x8c62a428
    ctx->pc = 0x179c28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943784)));
    // 0x179c2c: 0x14400003
    ctx->pc = 0x179C2Cu;
    {
        const bool branch_taken_0x179c2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x179c2c) {
            ctx->pc = 0x179C3Cu;
            goto label_179c3c;
        }
    }
    ctx->pc = 0x179C34u;
    // 0x179c34: 0xc05e69c
    ctx->pc = 0x179C34u;
    SET_GPR_U32(ctx, 31, 0x179C3Cu);
    ctx->pc = 0x179A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_init_flist_0x179a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C3Cu; }
        else if (ctx->pc != 0x179C3Cu) { ctx->pc = 0x179C3Cu; }
    }
    if (ctx->pc != 0x179C3Cu) { return; }
    ctx->pc = 0x179C3Cu;
label_179c3c:
    // 0x179c3c: 0xc05e21a
    ctx->pc = 0x179C3Cu;
    SET_GPR_U32(ctx, 31, 0x179C44u);
    ctx->pc = 0x178868u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_wait_io_0x178868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C44u; }
        else if (ctx->pc != 0x179C44u) { ctx->pc = 0x179C44u; }
    }
    if (ctx->pc != 0x179C44u) { return; }
    ctx->pc = 0x179C44u;
    // 0x179c44: 0xc05e61c
    ctx->pc = 0x179C44u;
    SET_GPR_U32(ctx, 31, 0x179C4Cu);
    ctx->pc = 0x179870u;
    {
        const uint32_t __entryPc = ctx->pc;
        close_file_all_0x179870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C4Cu; }
        else if (ctx->pc != 0x179C4Cu) { ctx->pc = 0x179C4Cu; }
    }
    if (ctx->pc != 0x179C4Cu) { return; }
    ctx->pc = 0x179C4Cu;
    // 0x179c4c: 0x1200001b
    ctx->pc = 0x179C4Cu;
    {
        const bool branch_taken_0x179c4c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x179C50u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179c4c) {
            ctx->pc = 0x179CBCu;
            goto label_179cbc;
        }
    }
    ctx->pc = 0x179C54u;
    // 0x179c54: 0x1220001a
    ctx->pc = 0x179C54u;
    {
        const bool branch_taken_0x179c54 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x179C58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x179c54) {
            ctx->pc = 0x179CC0u;
            goto label_179cc0;
        }
    }
    ctx->pc = 0x179C5Cu;
    // 0x179c5c: 0x12600018
    ctx->pc = 0x179C5Cu;
    {
        const bool branch_taken_0x179c5c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x179C60u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179c5c) {
            ctx->pc = 0x179CC0u;
            goto label_179cc0;
        }
    }
    ctx->pc = 0x179C64u;
    // 0x179c64: 0xc05e588
    ctx->pc = 0x179C64u;
    SET_GPR_U32(ctx, 31, 0x179C6Cu);
    ctx->pc = 0x179C68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179620u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_load_flist_0x179620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C6Cu; }
        else if (ctx->pc != 0x179C6Cu) { ctx->pc = 0x179C6Cu; }
    }
    if (ctx->pc != 0x179C6Cu) { return; }
    ctx->pc = 0x179C6Cu;
    // 0x179c6c: 0x5440000b
    ctx->pc = 0x179C6Cu;
    {
        const bool branch_taken_0x179c6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x179c6c) {
            ctx->pc = 0x179C70u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x179C9Cu;
            goto label_179c9c;
        }
    }
    ctx->pc = 0x179C74u;
    // 0x179c74: 0x3c04002c
    ctx->pc = 0x179c74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x179c78: 0x200282d
    ctx->pc = 0x179c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c7c: 0xc05114a
    ctx->pc = 0x179C7Cu;
    SET_GPR_U32(ctx, 31, 0x179C84u);
    ctx->pc = 0x179C80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949264));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C84u; }
        else if (ctx->pc != 0x179C84u) { ctx->pc = 0x179C84u; }
    }
    if (ctx->pc != 0x179C84u) { return; }
    ctx->pc = 0x179C84u;
    // 0x179c84: 0x3c05002c
    ctx->pc = 0x179c84u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x179c88: 0x202d
    ctx->pc = 0x179c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c8c: 0xc05e1ca
    ctx->pc = 0x179C8Cu;
    SET_GPR_U32(ctx, 31, 0x179C94u);
    ctx->pc = 0x179C90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294949304));
    ctx->pc = 0x178728u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_call_errfn_0x178728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C94u; }
        else if (ctx->pc != 0x179C94u) { ctx->pc = 0x179C94u; }
    }
    if (ctx->pc != 0x179C94u) { return; }
    ctx->pc = 0x179C94u;
    // 0x179c94: 0x10000009
    ctx->pc = 0x179C94u;
    {
        const bool branch_taken_0x179c94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179C98u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179c94) {
            ctx->pc = 0x179CBCu;
            goto label_179cbc;
        }
    }
    ctx->pc = 0x179C9Cu;
label_179c9c:
    // 0x179c9c: 0x1330c2
    ctx->pc = 0x179c9cu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 19), 3));
    // 0x179ca0: 0x220202d
    ctx->pc = 0x179ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ca4: 0xc05e538
    ctx->pc = 0x179CA4u;
    SET_GPR_U32(ctx, 31, 0x179CACu);
    ctx->pc = 0x179CA8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 257));
    ctx->pc = 0x1794E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        analysis_flist_0x1794e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179CACu; }
        else if (ctx->pc != 0x179CACu) { ctx->pc = 0x179CACu; }
    }
    if (ctx->pc != 0x179CACu) { return; }
    ctx->pc = 0x179CACu;
    // 0x179cac: 0x220202d
    ctx->pc = 0x179cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179cb0: 0xc05e5bc
    ctx->pc = 0x179CB0u;
    SET_GPR_U32(ctx, 31, 0x179CB8u);
    ctx->pc = 0x179CB4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1796F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        open_file_all_0x1796f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179CB8u; }
        else if (ctx->pc != 0x179CB8u) { ctx->pc = 0x179CB8u; }
    }
    if (ctx->pc != 0x179CB8u) { return; }
    ctx->pc = 0x179CB8u;
    // 0x179cb8: 0x210c0
    ctx->pc = 0x179cb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_179cbc:
    // 0x179cbc: 0xdfbf0040
    ctx->pc = 0x179cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_179cc0:
    // 0x179cc0: 0xdfb30030
    ctx->pc = 0x179cc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179cc4: 0xdfb20020
    ctx->pc = 0x179cc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179cc8: 0xdfb10010
    ctx->pc = 0x179cc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179ccc: 0xdfb00000
    ctx->pc = 0x179cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179cd0: 0x3e00008
    ctx->pc = 0x179CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179CD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179C3Cu: goto label_179c3c;
            case 0x179C9Cu: goto label_179c9c;
            case 0x179CBCu: goto label_179cbc;
            case 0x179CC0u: goto label_179cc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179CD8u;
}
