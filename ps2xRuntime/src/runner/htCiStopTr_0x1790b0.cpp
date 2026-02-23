#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiStopTr
// Address: 0x1790b0 - 0x179170
void htCiStopTr_0x1790b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiStopTr");


    ctx->pc = 0x1790b0u;

    // 0x1790b0: 0x27bdffd0
    ctx->pc = 0x1790b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1790b4: 0xffb00000
    ctx->pc = 0x1790b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1790b8: 0xffbf0020
    ctx->pc = 0x1790b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1790bc: 0x80802d
    ctx->pc = 0x1790bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1790c0: 0x16000009
    ctx->pc = 0x1790C0u;
    {
        const bool branch_taken_0x1790c0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1790C4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x1790c0) {
            ctx->pc = 0x1790E8u;
            goto label_1790e8;
        }
    }
    ctx->pc = 0x1790C8u;
    // 0x1790c8: 0x3c05002c
    ctx->pc = 0x1790c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x1790cc: 0xdfbf0020
    ctx->pc = 0x1790ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1790d0: 0xdfb10010
    ctx->pc = 0x1790d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1790d4: 0x202d
    ctx->pc = 0x1790d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1790d8: 0xdfb00000
    ctx->pc = 0x1790d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1790dc: 0x24a5b830
    ctx->pc = 0x1790dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948912));
    // 0x1790e0: 0x805e1ca
    ctx->pc = 0x1790E0u;
    ctx->pc = 0x1790E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x178728u;
    htci_call_errfn_0x178728(rdram, ctx, runtime); return;
    ctx->pc = 0x1790E8u;
label_1790e8:
    // 0x1790e8: 0x82030002
    ctx->pc = 0x1790e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1790ec: 0x1060001b
    ctx->pc = 0x1790ECu;
    {
        const bool branch_taken_0x1790ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1790F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1790ec) {
            ctx->pc = 0x17915Cu;
            goto label_17915c;
        }
    }
    ctx->pc = 0x1790F4u;
    // 0x1790f4: 0x54620019
    ctx->pc = 0x1790F4u;
    {
        const bool branch_taken_0x1790f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1790f4) {
            ctx->pc = 0x1790F8u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x17915Cu;
            goto label_17915c;
        }
    }
    ctx->pc = 0x1790FCu;
    // 0x1790fc: 0x8e030008
    ctx->pc = 0x1790fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x179100: 0x24020001
    ctx->pc = 0x179100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x179104: 0x54620015
    ctx->pc = 0x179104u;
    {
        const bool branch_taken_0x179104 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x179104) {
            ctx->pc = 0x179108u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x17915Cu;
            goto label_17915c;
        }
    }
    ctx->pc = 0x17910Cu;
    // 0x17910c: 0x10000004
    ctx->pc = 0x17910Cu;
    {
        const bool branch_taken_0x17910c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179110u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17910c) {
            ctx->pc = 0x179120u;
            goto label_179120;
        }
    }
    ctx->pc = 0x179114u;
    // 0x179114: 0x0
    ctx->pc = 0x179114u;
    // NOP
label_179118:
    // 0x179118: 0xc05e1be
    ctx->pc = 0x179118u;
    SET_GPR_U32(ctx, 31, 0x179120u);
    ctx->pc = 0x17911Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1786F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_wait_0x1786f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179120u; }
        else if (ctx->pc != 0x179120u) { ctx->pc = 0x179120u; }
    }
    if (ctx->pc != 0x179120u) { return; }
    ctx->pc = 0x179120u;
label_179120:
    // 0x179120: 0x2a220014
    ctx->pc = 0x179120u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 20));
    // 0x179124: 0x5040000d
    ctx->pc = 0x179124u;
    {
        const bool branch_taken_0x179124 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x179124) {
            ctx->pc = 0x179128u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x17915Cu;
            goto label_17915c;
        }
    }
    ctx->pc = 0x17912Cu;
    // 0x17912c: 0xc05d95e
    ctx->pc = 0x17912Cu;
    SET_GPR_U32(ctx, 31, 0x179134u);
    ctx->pc = 0x176578u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Lock_0x176578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179134u; }
        else if (ctx->pc != 0x179134u) { ctx->pc = 0x179134u; }
    }
    if (ctx->pc != 0x179134u) { return; }
    ctx->pc = 0x179134u;
    // 0x179134: 0x8e04000c
    ctx->pc = 0x179134u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x179138: 0x26060008
    ctx->pc = 0x179138u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 8));
    // 0x17913c: 0xc05651a
    ctx->pc = 0x17913Cu;
    SET_GPR_U32(ctx, 31, 0x179144u);
    ctx->pc = 0x179140u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x159468u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceIoctl_0x159468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179144u; }
        else if (ctx->pc != 0x179144u) { ctx->pc = 0x179144u; }
    }
    if (ctx->pc != 0x179144u) { return; }
    ctx->pc = 0x179144u;
    // 0x179144: 0xc05d966
    ctx->pc = 0x179144u;
    SET_GPR_U32(ctx, 31, 0x17914Cu);
    ctx->pc = 0x176598u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Unlock_0x176598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17914Cu; }
        else if (ctx->pc != 0x17914Cu) { ctx->pc = 0x17914Cu; }
    }
    if (ctx->pc != 0x17914Cu) { return; }
    ctx->pc = 0x17914Cu;
    // 0x17914c: 0x8e020008
    ctx->pc = 0x17914cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x179150: 0x1440fff1
    ctx->pc = 0x179150u;
    {
        const bool branch_taken_0x179150 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x179150) {
            ctx->pc = 0x179118u;
            goto label_179118;
        }
    }
    ctx->pc = 0x179158u;
    // 0x179158: 0xa2000002
    ctx->pc = 0x179158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_17915c:
    // 0x17915c: 0xdfbf0020
    ctx->pc = 0x17915cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179160: 0xdfb10010
    ctx->pc = 0x179160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179164: 0xdfb00000
    ctx->pc = 0x179164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179168: 0x3e00008
    ctx->pc = 0x179168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17916Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1790E8u: goto label_1790e8;
            case 0x179118u: goto label_179118;
            case 0x179120u: goto label_179120;
            case 0x17915Cu: goto label_17915c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179170u;
}
