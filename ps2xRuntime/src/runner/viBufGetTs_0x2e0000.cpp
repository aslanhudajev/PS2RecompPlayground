#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufGetTs
// Address: 0x2e0000 - 0x2e01c4
void viBufGetTs_0x2e0000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e0000u;

    // 0x2e0000: 0x27bdff50
    ctx->pc = 0x2e0000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e0004: 0xffbf00a0
    ctx->pc = 0x2e0004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2e0008: 0xffbe0090
    ctx->pc = 0x2e0008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2e000c: 0xffb70080
    ctx->pc = 0x2e000cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2e0010: 0xffb60070
    ctx->pc = 0x2e0010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2e0014: 0xffb50060
    ctx->pc = 0x2e0014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2e0018: 0xffb40050
    ctx->pc = 0x2e0018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2e001c: 0xffb30040
    ctx->pc = 0x2e001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2e0020: 0xffb20030
    ctx->pc = 0x2e0020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2e0024: 0xffb10020
    ctx->pc = 0x2e0024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2e0028: 0xffb00010
    ctx->pc = 0x2e0028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e002c: 0x80902d
    ctx->pc = 0x2e002cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0030: 0xa0b82d
    ctx->pc = 0x2e0030u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0034: 0x3c021000
    ctx->pc = 0x2e0034u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2e0038: 0x3442b410
    ctx->pc = 0x2e0038u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46096));
    // 0x2e003c: 0x8c510000
    ctx->pc = 0x2e003cu;
    SET_GPR_U32(ctx, 17, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2e0040: 0x3c021000
    ctx->pc = 0x2e0040u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2e0044: 0x34422020
    ctx->pc = 0x2e0044u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8224));
    // 0x2e0048: 0x8c430000
    ctx->pc = 0x2e0048u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2e004c: 0x8e500038
    ctx->pc = 0x2e004cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2e0050: 0x3210007f
    ctx->pc = 0x2e0050u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 127));
    // 0x2e0054: 0x31402
    ctx->pc = 0x2e0054u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 16));
    // 0x2e0058: 0x30420003
    ctx->pc = 0x2e0058u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x2e005c: 0x31a02
    ctx->pc = 0x2e005cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x2e0060: 0x3063000f
    ctx->pc = 0x2e0060u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x2e0064: 0x431021
    ctx->pc = 0x2e0064u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e0068: 0x21100
    ctx->pc = 0x2e0068u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e006c: 0x2228823
    ctx->pc = 0x2e006cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e0070: 0x8e420008
    ctx->pc = 0x2e0070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2e0074: 0x2aac0
    ctx->pc = 0x2e0074u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 2), 11));
    // 0x2e0078: 0xc0c0d88
    ctx->pc = 0x2E0078u;
    SET_GPR_U32(ctx, 31, 0x2E0080u);
    ctx->pc = 0x2E007Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0080u; }
    }
    if (ctx->pc != 0x2E0080u) { return; }
    ctx->pc = 0x2E0080u;
    // 0x2e0080: 0x2402ffff
    ctx->pc = 0x2e0080u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e0084: 0xfee20000
    ctx->pc = 0x2e0084u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x2e0088: 0xfee20008
    ctx->pc = 0x2e0088u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
    // 0x2e008c: 0x1080c3
    ctx->pc = 0x2e008cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 3));
    // 0x2e0090: 0x2308821
    ctx->pc = 0x2e0090u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e0094: 0x2358821
    ctx->pc = 0x2e0094u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2e0098: 0x8e420000
    ctx->pc = 0x2e0098u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e009c: 0x2228823
    ctx->pc = 0x2e009cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e00a0: 0x235001b
    ctx->pc = 0x2e00a0u;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 17) / divisor; ctx->hi = GPR_U32(ctx, 21) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,17); } }
    // 0x2e00a4: 0x1010
    ctx->pc = 0x2e00a4u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x2e00a8: 0x52a00001
    ctx->pc = 0x2E00A8u;
    {
        const bool branch_taken_0x2e00a8 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e00a8) {
            ctx->pc = 0x2E00ACu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2E00B0u;
            goto label_2e00b0;
        }
    }
    ctx->pc = 0x2E00B0u;
label_2e00b0:
    // 0x2e00b0: 0x40882d
    ctx->pc = 0x2e00b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00b4: 0x8e560058
    ctx->pc = 0x2e00b4u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2e00b8: 0x8e42005c
    ctx->pc = 0x2e00b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2e00bc: 0x982d
    ctx->pc = 0x2e00bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00c0: 0x1ac00031
    ctx->pc = 0x2E00C0u;
    {
        const bool branch_taken_0x2e00c0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2E00C4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2e00c0) {
            ctx->pc = 0x2E0188u;
            goto label_2e0188;
        }
    }
    ctx->pc = 0x2E00C8u;
    // 0x2e00c8: 0x561023
    ctx->pc = 0x2e00c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2e00cc: 0xafa20000
    ctx->pc = 0x2e00ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e00d0: 0x241effff
    ctx->pc = 0x2e00d0u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e00d4: 0x8e430054
    ctx->pc = 0x2e00d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2e00d8:
    // 0x2e00d8: 0x8fa40000
    ctx->pc = 0x2e00d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e00dc: 0x831021
    ctx->pc = 0x2e00dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e00e0: 0x531021
    ctx->pc = 0x2e00e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e00e4: 0x43001a
    ctx->pc = 0x2e00e4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2e00e8: 0x2010
    ctx->pc = 0x2e00e8u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x2e00ec: 0x50600001
    ctx->pc = 0x2E00ECu;
    {
        const bool branch_taken_0x2e00ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e00ec) {
            ctx->pc = 0x2E00F0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2E00F4u;
            goto label_2e00f4;
        }
    }
    ctx->pc = 0x2E00F4u;
label_2e00f4:
    // 0x2e00f4: 0x8e420050
    ctx->pc = 0x2e00f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2e00f8: 0x24030018
    ctx->pc = 0x2e00f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e00fc: 0x838018
    ctx->pc = 0x2e00fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2e0100: 0x2021021
    ctx->pc = 0x2e0100u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e0104: 0x220202d
    ctx->pc = 0x2e0104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0108: 0x8c450010
    ctx->pc = 0x2e0108u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e010c: 0x8c460014
    ctx->pc = 0x2e010cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2e0110: 0xc0b7c4c
    ctx->pc = 0x2E0110u;
    SET_GPR_U32(ctx, 31, 0x2E0118u);
    ctx->pc = 0x2E0114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DF130u;
    {
        const uint32_t __entryPc = ctx->pc;
        IsPtsInRegion_0x2df130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0118u; }
    }
    if (ctx->pc != 0x2E0118u) { return; }
    ctx->pc = 0x2E0118u;
    // 0x2e0118: 0x10400016
    ctx->pc = 0x2E0118u;
    {
        const bool branch_taken_0x2e0118 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E011Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x2e0118) {
            ctx->pc = 0x2E0174u;
            goto label_2e0174;
        }
    }
    ctx->pc = 0x2E0120u;
    // 0x2e0120: 0x8e420050
    ctx->pc = 0x2e0120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2e0124: 0x2021021
    ctx->pc = 0x2e0124u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e0128: 0xdc420000
    ctx->pc = 0x2e0128u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e012c: 0xfee20000
    ctx->pc = 0x2e012cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x2e0130: 0x8e420050
    ctx->pc = 0x2e0130u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2e0134: 0x2021021
    ctx->pc = 0x2e0134u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e0138: 0xdc420008
    ctx->pc = 0x2e0138u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e013c: 0xfee20008
    ctx->pc = 0x2e013cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
    // 0x2e0140: 0x8e420050
    ctx->pc = 0x2e0140u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2e0144: 0x2021021
    ctx->pc = 0x2e0144u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e0148: 0xfc5e0000
    ctx->pc = 0x2e0148u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 30));
    // 0x2e014c: 0x8e420050
    ctx->pc = 0x2e014cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2e0150: 0x2021021
    ctx->pc = 0x2e0150u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e0154: 0xfc5e0008
    ctx->pc = 0x2e0154u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 30));
    // 0x2e0158: 0x24140001
    ctx->pc = 0x2e0158u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e015c: 0x8e420058
    ctx->pc = 0x2e015cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2e0160: 0x40202d
    ctx->pc = 0x2e0160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0164: 0x28430002
    ctx->pc = 0x2e0164u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 2));
    // 0x2e0168: 0x283100a
    ctx->pc = 0x2e0168u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 20));
    // 0x2e016c: 0x822023
    ctx->pc = 0x2e016cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e0170: 0xae440058
    ctx->pc = 0x2e0170u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 4));
label_2e0174:
    // 0x2e0174: 0x276102a
    ctx->pc = 0x2e0174u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 22)));
    // 0x2e0178: 0x10400003
    ctx->pc = 0x2E0178u;
    {
        const bool branch_taken_0x2e0178 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e0178) {
            ctx->pc = 0x2E0188u;
            goto label_2e0188;
        }
    }
    ctx->pc = 0x2E0180u;
    // 0x2e0180: 0x5280ffd5
    ctx->pc = 0x2E0180u;
    {
        const bool branch_taken_0x2e0180 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e0180) {
            ctx->pc = 0x2E0184u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->pc = 0x2E00D8u;
            goto label_2e00d8;
        }
    }
    ctx->pc = 0x2E0188u;
label_2e0188:
    // 0x2e0188: 0xc0c0d80
    ctx->pc = 0x2E0188u;
    SET_GPR_U32(ctx, 31, 0x2E0190u);
    ctx->pc = 0x2E018Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->pc = 0x303600u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x303600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0190u; }
    }
    if (ctx->pc != 0x2E0190u) { return; }
    ctx->pc = 0x2E0190u;
    // 0x2e0190: 0x24020001
    ctx->pc = 0x2e0190u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0194: 0xdfbf00a0
    ctx->pc = 0x2e0194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e0198: 0xdfbe0090
    ctx->pc = 0x2e0198u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e019c: 0xdfb70080
    ctx->pc = 0x2e019cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e01a0: 0xdfb60070
    ctx->pc = 0x2e01a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e01a4: 0xdfb50060
    ctx->pc = 0x2e01a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e01a8: 0xdfb40050
    ctx->pc = 0x2e01a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e01ac: 0xdfb30040
    ctx->pc = 0x2e01acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e01b0: 0xdfb20030
    ctx->pc = 0x2e01b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e01b4: 0xdfb10020
    ctx->pc = 0x2e01b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e01b8: 0xdfb00010
    ctx->pc = 0x2e01b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e01bc: 0x3e00008
    ctx->pc = 0x2E01BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E01C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E00B0u: goto label_2e00b0;
            case 0x2E00D8u: goto label_2e00d8;
            case 0x2E00F4u: goto label_2e00f4;
            case 0x2E0174u: goto label_2e0174;
            case 0x2E0188u: goto label_2e0188;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E01C4u;
}
