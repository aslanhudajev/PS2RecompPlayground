#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ReadControls
// Address: 0x204b18 - 0x2053fc
void ReadControls_0x204b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x204b18u;

    // 0x204b18: 0x27bdff30
    ctx->pc = 0x204b18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x204b1c: 0xffbf00c0
    ctx->pc = 0x204b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x204b20: 0xffbe00b0
    ctx->pc = 0x204b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x204b24: 0xffb700a0
    ctx->pc = 0x204b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x204b28: 0xffb60090
    ctx->pc = 0x204b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x204b2c: 0xffb50080
    ctx->pc = 0x204b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x204b30: 0xffb40070
    ctx->pc = 0x204b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x204b34: 0xffb30060
    ctx->pc = 0x204b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x204b38: 0xffb20050
    ctx->pc = 0x204b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x204b3c: 0xffb10040
    ctx->pc = 0x204b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x204b40: 0xffb00030
    ctx->pc = 0x204b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x204b44: 0x3a0202d
    ctx->pc = 0x204b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204b48: 0x3c10003c
    ctx->pc = 0x204b48u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x204b4c: 0x2605b2c0
    ctx->pc = 0x204b4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294947520));
    // 0x204b50: 0xc0812b6
    ctx->pc = 0x204B50u;
    SET_GPR_U32(ctx, 31, 0x204B58u);
    ctx->pc = 0x204B54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x204AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        lf_memcpy_0x204ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B58u; }
    }
    if (ctx->pc != 0x204B58u) { return; }
    ctx->pc = 0x204B58u;
    // 0x204b58: 0x3c04003c
    ctx->pc = 0x204b58u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x204b5c: 0x2484b2e0
    ctx->pc = 0x204b5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947552));
    // 0x204b60: 0x2605b2c0
    ctx->pc = 0x204b60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294947520));
    // 0x204b64: 0xc0812b6
    ctx->pc = 0x204B64u;
    SET_GPR_U32(ctx, 31, 0x204B6Cu);
    ctx->pc = 0x204B68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x204AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        lf_memcpy_0x204ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B6Cu; }
    }
    if (ctx->pc != 0x204B6Cu) { return; }
    ctx->pc = 0x204B6Cu;
    // 0x204b6c: 0x3c020031
    ctx->pc = 0x204b6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x204b70: 0x8c420f14
    ctx->pc = 0x204b70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3860)));
    // 0x204b74: 0x1040001e
    ctx->pc = 0x204B74u;
    {
        const bool branch_taken_0x204b74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x204B78u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x204b74) {
            ctx->pc = 0x204BF0u;
            goto label_204bf0;
        }
    }
    ctx->pc = 0x204B7Cu;
    // 0x204b7c: 0x8c62bde0
    ctx->pc = 0x204b7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294950368)));
    // 0x204b80: 0x10400213
    ctx->pc = 0x204B80u;
    {
        const bool branch_taken_0x204b80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x204B84u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x204b80) {
            ctx->pc = 0x2053D0u;
            goto label_2053d0;
        }
    }
    ctx->pc = 0x204B88u;
    // 0x204b88: 0xac60bde0
    ctx->pc = 0x204b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950368), GPR_U32(ctx, 0));
    // 0x204b8c: 0xb82d
    ctx->pc = 0x204b8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204b90: 0x200102d
    ctx->pc = 0x204b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204b94: 0x2608b2c0
    ctx->pc = 0x204b94u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 4294947520));
    // 0x204b98: 0x3c020031
    ctx->pc = 0x204b98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x204b9c: 0x24471ca0
    ctx->pc = 0x204b9cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 7328));
    // 0x204ba0: 0x3c02003c
    ctx->pc = 0x204ba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x204ba4: 0x2446b300
    ctx->pc = 0x204ba4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294947584));
    // 0x204ba8: 0x3c020031
    ctx->pc = 0x204ba8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x204bac: 0x24451cc0
    ctx->pc = 0x204bacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 7360));
    // 0x204bb0: 0x171880
    ctx->pc = 0x204bb0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 2));
    // 0x204bb4: 0x0
    ctx->pc = 0x204bb4u;
    // NOP
label_204bb8:
    // 0x204bb8: 0x682021
    ctx->pc = 0x204bb8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x204bbc: 0x671021
    ctx->pc = 0x204bbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x204bc0: 0x8c420000
    ctx->pc = 0x204bc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204bc4: 0xac820000
    ctx->pc = 0x204bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x204bc8: 0x662021
    ctx->pc = 0x204bc8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x204bcc: 0x651821
    ctx->pc = 0x204bccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x204bd0: 0x8c620000
    ctx->pc = 0x204bd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204bd4: 0xac820000
    ctx->pc = 0x204bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x204bd8: 0x26f70001
    ctx->pc = 0x204bd8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
    // 0x204bdc: 0x2ae20008
    ctx->pc = 0x204bdcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), 8));
    // 0x204be0: 0x1440fff5
    ctx->pc = 0x204BE0u;
    {
        const bool branch_taken_0x204be0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x204BE4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 2));
        if (branch_taken_0x204be0) {
            ctx->pc = 0x204BB8u;
            goto label_204bb8;
        }
    }
    ctx->pc = 0x204BE8u;
    // 0x204be8: 0x10000010
    ctx->pc = 0x204BE8u;
    {
        const bool branch_taken_0x204be8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x204BECu;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x204be8) {
            ctx->pc = 0x204C2Cu;
            goto label_204c2c;
        }
    }
    ctx->pc = 0x204BF0u;
label_204bf0:
    // 0x204bf0: 0xb82d
    ctx->pc = 0x204bf0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204bf4: 0x3c02003c
    ctx->pc = 0x204bf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x204bf8: 0x2445b2c0
    ctx->pc = 0x204bf8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x204bfc: 0x3c02003c
    ctx->pc = 0x204bfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x204c00: 0x2444b300
    ctx->pc = 0x204c00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294947584));
    // 0x204c04: 0x0
    ctx->pc = 0x204c04u;
    // NOP
label_204c08:
    // 0x204c08: 0x171080
    ctx->pc = 0x204c08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
    // 0x204c0c: 0x451821
    ctx->pc = 0x204c0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x204c10: 0x441021
    ctx->pc = 0x204c10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x204c14: 0xac400000
    ctx->pc = 0x204c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x204c18: 0x26f70001
    ctx->pc = 0x204c18u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
    // 0x204c1c: 0x2ae20008
    ctx->pc = 0x204c1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), 8));
    // 0x204c20: 0x1440fff9
    ctx->pc = 0x204C20u;
    {
        const bool branch_taken_0x204c20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x204C24u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x204c20) {
            ctx->pc = 0x204C08u;
            goto label_204c08;
        }
    }
    ctx->pc = 0x204C28u;
    // 0x204c28: 0x3c030031
    ctx->pc = 0x204c28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_204c2c:
    // 0x204c2c: 0x2402012c
    ctx->pc = 0x204c2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 300));
    // 0x204c30: 0xac620f0c
    ctx->pc = 0x204c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3852), GPR_U32(ctx, 2));
    // 0x204c34: 0x3c030031
    ctx->pc = 0x204c34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x204c38: 0x24020001
    ctx->pc = 0x204c38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x204c3c: 0xac620f18
    ctx->pc = 0x204c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3864), GPR_U32(ctx, 2));
    // 0x204c40: 0x3c020031
    ctx->pc = 0x204c40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x204c44: 0x8c420f10
    ctx->pc = 0x204c44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3856)));
    // 0x204c48: 0x1040000a
    ctx->pc = 0x204C48u;
    {
        const bool branch_taken_0x204c48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x204C4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x204c48) {
            ctx->pc = 0x204C74u;
            goto label_204c74;
        }
    }
    ctx->pc = 0x204C50u;
    // 0x204c50: 0x8c420e50
    ctx->pc = 0x204c50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3664)));
    // 0x204c54: 0x10400005
    ctx->pc = 0x204C54u;
    {
        const bool branch_taken_0x204c54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x204c54) {
            ctx->pc = 0x204C6Cu;
            goto label_204c6c;
        }
    }
    ctx->pc = 0x204C5Cu;
    // 0x204c5c: 0xc080f52
    ctx->pc = 0x204C5Cu;
    SET_GPR_U32(ctx, 31, 0x204C64u);
    ctx->pc = 0x204C60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x203D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        serve_mtap_0x203d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C64u; }
    }
    if (ctx->pc != 0x204C64u) { return; }
    ctx->pc = 0x204C64u;
    // 0x204c64: 0x10000004
    ctx->pc = 0x204C64u;
    {
        const bool branch_taken_0x204c64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x204C68u;
        SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
        if (branch_taken_0x204c64) {
            ctx->pc = 0x204C78u;
            goto label_204c78;
        }
    }
    ctx->pc = 0x204C6Cu;
label_204c6c:
    // 0x204c6c: 0xc080f52
    ctx->pc = 0x204C6Cu;
    SET_GPR_U32(ctx, 31, 0x204C74u);
    ctx->pc = 0x204C70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        serve_mtap_0x203d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C74u; }
    }
    if (ctx->pc != 0x204C74u) { return; }
    ctx->pc = 0x204C74u;
label_204c74:
    // 0x204c74: 0x3c040031
    ctx->pc = 0x204c74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
label_204c78:
    // 0x204c78: 0x3c030031
    ctx->pc = 0x204c78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x204c7c: 0x3c020031
    ctx->pc = 0x204c7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x204c80: 0xac401b60
    ctx->pc = 0x204c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x204c84: 0xac601b30
    ctx->pc = 0x204c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6960), GPR_U32(ctx, 0));
    // 0x204c88: 0xac801b48
    ctx->pc = 0x204c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6984), GPR_U32(ctx, 0));
    // 0x204c8c: 0xb82d
    ctx->pc = 0x204c8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c90: 0x171080
    ctx->pc = 0x204c90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
    // 0x204c94: 0x0
    ctx->pc = 0x204c94u;
    // NOP
label_204c98:
    // 0x204c98: 0x3c030031
    ctx->pc = 0x204c98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x204c9c: 0x24630e90
    ctx->pc = 0x204c9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3728));
    // 0x204ca0: 0x431021
    ctx->pc = 0x204ca0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204ca4: 0x8c5e0000
    ctx->pc = 0x204ca4u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204ca8: 0x1e1027
    ctx->pc = 0x204ca8u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x204cac: 0x2e2f00a
    ctx->pc = 0x204cacu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 30, GPR_U32(ctx, 23));
    // 0x204cb0: 0x1e1880
    ctx->pc = 0x204cb0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 30), 2));
    // 0x204cb4: 0x3a31021
    ctx->pc = 0x204cb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x204cb8: 0x8c540000
    ctx->pc = 0x204cb8u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204cbc: 0x2402003c
    ctx->pc = 0x204cbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x204cc0: 0x3c040031
    ctx->pc = 0x204cc0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x204cc4: 0x24841bbc
    ctx->pc = 0x204cc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7100));
    // 0x204cc8: 0x800013
    ctx->pc = 0x204cc8u;
    ctx->lo = GPR_U32(ctx, 4);
    // 0x204ccc: 0x72e21000
    ctx->pc = 0x204cccu;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x204cd0: 0x8c450000
    ctx->pc = 0x204cd0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204cd4: 0x3c02003c
    ctx->pc = 0x204cd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x204cd8: 0x2442b2c0
    ctx->pc = 0x204cd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x204cdc: 0x621821
    ctx->pc = 0x204cdcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x204ce0: 0x8c730000
    ctx->pc = 0x204ce0u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204ce4: 0x329600ff
    ctx->pc = 0x204ce4u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 20), 255));
    // 0x204ce8: 0x12600139
    ctx->pc = 0x204CE8u;
    {
        const bool branch_taken_0x204ce8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x204CECu;
        SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 19), 255));
        if (branch_taken_0x204ce8) {
            ctx->pc = 0x2051D0u;
            goto label_2051d0;
        }
    }
    ctx->pc = 0x204CF0u;
    // 0x204cf0: 0x202d
    ctx->pc = 0x204cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204cf4: 0x3c020031
    ctx->pc = 0x204cf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x204cf8: 0x24461948
    ctx->pc = 0x204cf8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 6472));
    // 0x204cfc: 0x538c0
    ctx->pc = 0x204cfcu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 5), 3));
    // 0x204d00: 0xe0102d
    ctx->pc = 0x204d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d04: 0x34450004
    ctx->pc = 0x204d04u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 4));
    // 0x204d08: 0x24080001
    ctx->pc = 0x204d08u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x204d0c: 0x41140
    ctx->pc = 0x204d0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 5));
label_204d10:
    // 0x204d10: 0xe21821
    ctx->pc = 0x204d10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x204d14: 0x661821
    ctx->pc = 0x204d14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x204d18: 0x8c630000
    ctx->pc = 0x204d18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204d1c: 0xa21021
    ctx->pc = 0x204d1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x204d20: 0x461021
    ctx->pc = 0x204d20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x204d24: 0x731824
    ctx->pc = 0x204d24u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x204d28: 0x10600008
    ctx->pc = 0x204D28u;
    {
        const bool branch_taken_0x204d28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204D2Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x204d28) {
            ctx->pc = 0x204D4Cu;
            goto label_204d4c;
        }
    }
    ctx->pc = 0x204D30u;
    // 0x204d30: 0x10400003
    ctx->pc = 0x204D30u;
    {
        const bool branch_taken_0x204d30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x204D34u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        if (branch_taken_0x204d30) {
            ctx->pc = 0x204D40u;
            goto label_204d40;
        }
    }
    ctx->pc = 0x204D38u;
    // 0x204d38: 0x50400005
    ctx->pc = 0x204D38u;
    {
        const bool branch_taken_0x204d38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x204d38) {
            ctx->pc = 0x204D3Cu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x204D50u;
            goto label_204d50;
        }
    }
    ctx->pc = 0x204D40u;
label_204d40:
    // 0x204d40: 0x24820008
    ctx->pc = 0x204d40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8));
    // 0x204d44: 0x481004
    ctx->pc = 0x204d44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x204d48: 0x2629825
    ctx->pc = 0x204d48u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_204d4c:
    // 0x204d4c: 0x24840001
    ctx->pc = 0x204d4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_204d50:
    // 0x204d50: 0x2882000a
    ctx->pc = 0x204d50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 10));
    // 0x204d54: 0x1440ffee
    ctx->pc = 0x204D54u;
    {
        const bool branch_taken_0x204d54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x204D58u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 5));
        if (branch_taken_0x204d54) {
            ctx->pc = 0x204D10u;
            goto label_204d10;
        }
    }
    ctx->pc = 0x204D5Cu;
    // 0x204d5c: 0x1e1880
    ctx->pc = 0x204d5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 30), 2));
    // 0x204d60: 0x3c04003c
    ctx->pc = 0x204d60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x204d64: 0x2484b2c0
    ctx->pc = 0x204d64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947520));
    // 0x204d68: 0x641021
    ctx->pc = 0x204d68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204d6c: 0xac530000
    ctx->pc = 0x204d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x204d70: 0x3c05003c
    ctx->pc = 0x204d70u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x204d74: 0x24a5b320
    ctx->pc = 0x204d74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947616));
    // 0x204d78: 0x651821
    ctx->pc = 0x204d78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x204d7c: 0xafa30020
    ctx->pc = 0x204d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x204d80: 0x2a0202d
    ctx->pc = 0x204d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d84: 0x2c0282d
    ctx->pc = 0x204d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d88: 0x24060003
    ctx->pc = 0x204d88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x204d8c: 0xc080fce
    ctx->pc = 0x204D8Cu;
    SET_GPR_U32(ctx, 31, 0x204D94u);
    ctx->pc = 0x204D90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        dir_edge_0x203f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D94u; }
    }
    if (ctx->pc != 0x204D94u) { return; }
    ctx->pc = 0x204D94u;
    // 0x204d94: 0x40802d
    ctx->pc = 0x204d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d98: 0x2a0202d
    ctx->pc = 0x204d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d9c: 0x2c0282d
    ctx->pc = 0x204d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204da0: 0x2406000c
    ctx->pc = 0x204da0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    // 0x204da4: 0xc080fce
    ctx->pc = 0x204DA4u;
    SET_GPR_U32(ctx, 31, 0x204DACu);
    ctx->pc = 0x204DA8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x203F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        dir_edge_0x203f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DACu; }
    }
    if (ctx->pc != 0x204DACu) { return; }
    ctx->pc = 0x204DACu;
    // 0x204dac: 0x40902d
    ctx->pc = 0x204dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204db0: 0x2a0202d
    ctx->pc = 0x204db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204db4: 0x2c0282d
    ctx->pc = 0x204db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204db8: 0x24060030
    ctx->pc = 0x204db8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    // 0x204dbc: 0xc080fce
    ctx->pc = 0x204DBCu;
    SET_GPR_U32(ctx, 31, 0x204DC4u);
    ctx->pc = 0x204DC0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x203F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        dir_edge_0x203f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DC4u; }
    }
    if (ctx->pc != 0x204DC4u) { return; }
    ctx->pc = 0x204DC4u;
    // 0x204dc4: 0x40882d
    ctx->pc = 0x204dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204dc8: 0x2a0202d
    ctx->pc = 0x204dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204dcc: 0x2c0282d
    ctx->pc = 0x204dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204dd0: 0x240600c0
    ctx->pc = 0x204dd0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 192));
    // 0x204dd4: 0xc080fce
    ctx->pc = 0x204DD4u;
    SET_GPR_U32(ctx, 31, 0x204DDCu);
    ctx->pc = 0x204DD8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x203F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        dir_edge_0x203f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DDCu; }
    }
    if (ctx->pc != 0x204DDCu) { return; }
    ctx->pc = 0x204DDCu;
    // 0x204ddc: 0x2128025
    ctx->pc = 0x204ddcu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x204de0: 0x2118025
    ctx->pc = 0x204de0u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x204de4: 0x2028025
    ctx->pc = 0x204de4u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x204de8: 0x3c050004
    ctx->pc = 0x204de8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4 << 16));
    // 0x204dec: 0x2651024
    ctx->pc = 0x204decu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x204df0: 0x10400005
    ctx->pc = 0x204DF0u;
    {
        const bool branch_taken_0x204df0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x204DF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204df0) {
            ctx->pc = 0x204E08u;
            goto label_204e08;
        }
    }
    ctx->pc = 0x204DF8u;
    // 0x204df8: 0x2021825
    ctx->pc = 0x204df8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x204dfc: 0x2851024
    ctx->pc = 0x204dfcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x204e00: 0x60202d
    ctx->pc = 0x204e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e04: 0x202200b
    ctx->pc = 0x204e04u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 16));
label_204e08:
    // 0x204e08: 0x3c020008
    ctx->pc = 0x204e08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
    // 0x204e0c: 0x2621824
    ctx->pc = 0x204e0cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x204e10: 0x10600005
    ctx->pc = 0x204E10u;
    {
        const bool branch_taken_0x204e10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204E14u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204e10) {
            ctx->pc = 0x204E28u;
            goto label_204e28;
        }
    }
    ctx->pc = 0x204E18u;
    // 0x204e18: 0xa31825
    ctx->pc = 0x204e18u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x204e1c: 0x2821024
    ctx->pc = 0x204e1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x204e20: 0x60282d
    ctx->pc = 0x204e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e24: 0x82280b
    ctx->pc = 0x204e24u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
label_204e28:
    // 0x204e28: 0x32630200
    ctx->pc = 0x204e28u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 512));
    // 0x204e2c: 0x10600005
    ctx->pc = 0x204E2Cu;
    {
        const bool branch_taken_0x204e2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204E30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204e2c) {
            ctx->pc = 0x204E44u;
            goto label_204e44;
        }
    }
    ctx->pc = 0x204E34u;
    // 0x204e34: 0x831825
    ctx->pc = 0x204e34u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204e38: 0x32820200
    ctx->pc = 0x204e38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 512));
    // 0x204e3c: 0x60202d
    ctx->pc = 0x204e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e40: 0xa2200b
    ctx->pc = 0x204e40u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
label_204e44:
    // 0x204e44: 0x32630400
    ctx->pc = 0x204e44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 1024));
    // 0x204e48: 0x10600005
    ctx->pc = 0x204E48u;
    {
        const bool branch_taken_0x204e48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204E4Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204e48) {
            ctx->pc = 0x204E60u;
            goto label_204e60;
        }
    }
    ctx->pc = 0x204E50u;
    // 0x204e50: 0xa31825
    ctx->pc = 0x204e50u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x204e54: 0x32820400
    ctx->pc = 0x204e54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1024));
    // 0x204e58: 0x60282d
    ctx->pc = 0x204e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e5c: 0x82280b
    ctx->pc = 0x204e5cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
label_204e60:
    // 0x204e60: 0x32630100
    ctx->pc = 0x204e60u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 256));
    // 0x204e64: 0x10600005
    ctx->pc = 0x204E64u;
    {
        const bool branch_taken_0x204e64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204E68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204e64) {
            ctx->pc = 0x204E7Cu;
            goto label_204e7c;
        }
    }
    ctx->pc = 0x204E6Cu;
    // 0x204e6c: 0x831825
    ctx->pc = 0x204e6cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204e70: 0x32820100
    ctx->pc = 0x204e70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 256));
    // 0x204e74: 0x60202d
    ctx->pc = 0x204e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e78: 0xa2200b
    ctx->pc = 0x204e78u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
label_204e7c:
    // 0x204e7c: 0x32638000
    ctx->pc = 0x204e7cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 32768));
    // 0x204e80: 0x10600005
    ctx->pc = 0x204E80u;
    {
        const bool branch_taken_0x204e80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204E84u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204e80) {
            ctx->pc = 0x204E98u;
            goto label_204e98;
        }
    }
    ctx->pc = 0x204E88u;
    // 0x204e88: 0xc31825
    ctx->pc = 0x204e88u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x204e8c: 0x32828000
    ctx->pc = 0x204e8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 32768));
    // 0x204e90: 0x60302d
    ctx->pc = 0x204e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e94: 0x82300b
    ctx->pc = 0x204e94u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 4));
label_204e98:
    // 0x204e98: 0x3c020001
    ctx->pc = 0x204e98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x204e9c: 0x2621824
    ctx->pc = 0x204e9cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x204ea0: 0x10600005
    ctx->pc = 0x204EA0u;
    {
        const bool branch_taken_0x204ea0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204EA4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204ea0) {
            ctx->pc = 0x204EB8u;
            goto label_204eb8;
        }
    }
    ctx->pc = 0x204EA8u;
    // 0x204ea8: 0xa31825
    ctx->pc = 0x204ea8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x204eac: 0x2821024
    ctx->pc = 0x204eacu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x204eb0: 0x60282d
    ctx->pc = 0x204eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204eb4: 0xc2280b
    ctx->pc = 0x204eb4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 6));
label_204eb8:
    // 0x204eb8: 0x32630800
    ctx->pc = 0x204eb8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 2048));
    // 0x204ebc: 0x10600005
    ctx->pc = 0x204EBCu;
    {
        const bool branch_taken_0x204ebc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204EC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204ebc) {
            ctx->pc = 0x204ED4u;
            goto label_204ed4;
        }
    }
    ctx->pc = 0x204EC4u;
    // 0x204ec4: 0x831825
    ctx->pc = 0x204ec4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204ec8: 0x32820800
    ctx->pc = 0x204ec8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 2048));
    // 0x204ecc: 0x60202d
    ctx->pc = 0x204eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ed0: 0xa2200b
    ctx->pc = 0x204ed0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
label_204ed4:
    // 0x204ed4: 0x32631000
    ctx->pc = 0x204ed4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 4096));
    // 0x204ed8: 0x10600005
    ctx->pc = 0x204ED8u;
    {
        const bool branch_taken_0x204ed8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204EDCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204ed8) {
            ctx->pc = 0x204EF0u;
            goto label_204ef0;
        }
    }
    ctx->pc = 0x204EE0u;
    // 0x204ee0: 0xa31825
    ctx->pc = 0x204ee0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x204ee4: 0x32821000
    ctx->pc = 0x204ee4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 4096));
    // 0x204ee8: 0x60282d
    ctx->pc = 0x204ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204eec: 0x82280b
    ctx->pc = 0x204eecu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
label_204ef0:
    // 0x204ef0: 0x32634000
    ctx->pc = 0x204ef0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 16384));
    // 0x204ef4: 0x10600005
    ctx->pc = 0x204EF4u;
    {
        const bool branch_taken_0x204ef4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204EF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204ef4) {
            ctx->pc = 0x204F0Cu;
            goto label_204f0c;
        }
    }
    ctx->pc = 0x204EFCu;
    // 0x204efc: 0x831825
    ctx->pc = 0x204efcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204f00: 0x32824000
    ctx->pc = 0x204f00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 16384));
    // 0x204f04: 0x60202d
    ctx->pc = 0x204f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f08: 0xa2200b
    ctx->pc = 0x204f08u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
label_204f0c:
    // 0x204f0c: 0x32632000
    ctx->pc = 0x204f0cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 8192));
    // 0x204f10: 0x10600005
    ctx->pc = 0x204F10u;
    {
        const bool branch_taken_0x204f10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204F14u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204f10) {
            ctx->pc = 0x204F28u;
            goto label_204f28;
        }
    }
    ctx->pc = 0x204F18u;
    // 0x204f18: 0xa31825
    ctx->pc = 0x204f18u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x204f1c: 0x32822000
    ctx->pc = 0x204f1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 8192));
    // 0x204f20: 0x60282d
    ctx->pc = 0x204f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f24: 0x82280b
    ctx->pc = 0x204f24u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
label_204f28:
    // 0x204f28: 0x3c020002
    ctx->pc = 0x204f28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x204f2c: 0x2621824
    ctx->pc = 0x204f2cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x204f30: 0x10600005
    ctx->pc = 0x204F30u;
    {
        const bool branch_taken_0x204f30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204F34u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204f30) {
            ctx->pc = 0x204F48u;
            goto label_204f48;
        }
    }
    ctx->pc = 0x204F38u;
    // 0x204f38: 0xc31825
    ctx->pc = 0x204f38u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x204f3c: 0x2821024
    ctx->pc = 0x204f3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x204f40: 0x60302d
    ctx->pc = 0x204f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f44: 0xa2300b
    ctx->pc = 0x204f44u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 5));
label_204f48:
    // 0x204f48: 0x3c020020
    ctx->pc = 0x204f48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x204f4c: 0x2621824
    ctx->pc = 0x204f4cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x204f50: 0x10600005
    ctx->pc = 0x204F50u;
    {
        const bool branch_taken_0x204f50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204F54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204f50) {
            ctx->pc = 0x204F68u;
            goto label_204f68;
        }
    }
    ctx->pc = 0x204F58u;
    // 0x204f58: 0x831825
    ctx->pc = 0x204f58u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204f5c: 0x2821024
    ctx->pc = 0x204f5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x204f60: 0x60202d
    ctx->pc = 0x204f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f64: 0xc2200b
    ctx->pc = 0x204f64u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 6));
label_204f68:
    // 0x204f68: 0x3c020010
    ctx->pc = 0x204f68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x204f6c: 0x2621824
    ctx->pc = 0x204f6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x204f70: 0x10600005
    ctx->pc = 0x204F70u;
    {
        const bool branch_taken_0x204f70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204F74u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204f70) {
            ctx->pc = 0x204F88u;
            goto label_204f88;
        }
    }
    ctx->pc = 0x204F78u;
    // 0x204f78: 0xa31825
    ctx->pc = 0x204f78u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x204f7c: 0x2821024
    ctx->pc = 0x204f7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x204f80: 0x60282d
    ctx->pc = 0x204f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f84: 0x82280b
    ctx->pc = 0x204f84u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
label_204f88:
    // 0x204f88: 0x3c020080
    ctx->pc = 0x204f88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
    // 0x204f8c: 0x2621824
    ctx->pc = 0x204f8cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x204f90: 0x10600005
    ctx->pc = 0x204F90u;
    {
        const bool branch_taken_0x204f90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204F94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204f90) {
            ctx->pc = 0x204FA8u;
            goto label_204fa8;
        }
    }
    ctx->pc = 0x204F98u;
    // 0x204f98: 0x831825
    ctx->pc = 0x204f98u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204f9c: 0x2821024
    ctx->pc = 0x204f9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x204fa0: 0x60202d
    ctx->pc = 0x204fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204fa4: 0xa2200b
    ctx->pc = 0x204fa4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
label_204fa8:
    // 0x204fa8: 0x3c020040
    ctx->pc = 0x204fa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x204fac: 0x2621824
    ctx->pc = 0x204facu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x204fb0: 0x10600005
    ctx->pc = 0x204FB0u;
    {
        const bool branch_taken_0x204fb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204FB4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204fb0) {
            ctx->pc = 0x204FC8u;
            goto label_204fc8;
        }
    }
    ctx->pc = 0x204FB8u;
    // 0x204fb8: 0xa31825
    ctx->pc = 0x204fb8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x204fbc: 0x2821024
    ctx->pc = 0x204fbcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x204fc0: 0x60282d
    ctx->pc = 0x204fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204fc4: 0x82280b
    ctx->pc = 0x204fc4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
label_204fc8:
    // 0x204fc8: 0x3c020800
    ctx->pc = 0x204fc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2048 << 16));
    // 0x204fcc: 0x2621824
    ctx->pc = 0x204fccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x204fd0: 0x10600005
    ctx->pc = 0x204FD0u;
    {
        const bool branch_taken_0x204fd0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204FD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204fd0) {
            ctx->pc = 0x204FE8u;
            goto label_204fe8;
        }
    }
    ctx->pc = 0x204FD8u;
    // 0x204fd8: 0x831825
    ctx->pc = 0x204fd8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204fdc: 0x2821024
    ctx->pc = 0x204fdcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x204fe0: 0x60202d
    ctx->pc = 0x204fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204fe4: 0xa2200b
    ctx->pc = 0x204fe4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
label_204fe8:
    // 0x204fe8: 0x3c020100
    ctx->pc = 0x204fe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x204fec: 0x2621824
    ctx->pc = 0x204fecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x204ff0: 0x10600005
    ctx->pc = 0x204FF0u;
    {
        const bool branch_taken_0x204ff0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x204FF4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x204ff0) {
            ctx->pc = 0x205008u;
            goto label_205008;
        }
    }
    ctx->pc = 0x204FF8u;
    // 0x204ff8: 0xa31825
    ctx->pc = 0x204ff8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x204ffc: 0x2821024
    ctx->pc = 0x204ffcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x205000: 0x60282d
    ctx->pc = 0x205000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205004: 0x82280b
    ctx->pc = 0x205004u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
label_205008:
    // 0x205008: 0x3c020200
    ctx->pc = 0x205008u;
    SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
    // 0x20500c: 0x2621824
    ctx->pc = 0x20500cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x205010: 0x10600005
    ctx->pc = 0x205010u;
    {
        const bool branch_taken_0x205010 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x205014u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x205010) {
            ctx->pc = 0x205028u;
            goto label_205028;
        }
    }
    ctx->pc = 0x205018u;
    // 0x205018: 0x831825
    ctx->pc = 0x205018u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20501c: 0x2821024
    ctx->pc = 0x20501cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x205020: 0x60202d
    ctx->pc = 0x205020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205024: 0xa2200b
    ctx->pc = 0x205024u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
label_205028:
    // 0x205028: 0x3c020400
    ctx->pc = 0x205028u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1024 << 16));
    // 0x20502c: 0x2621824
    ctx->pc = 0x20502cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x205030: 0x10600005
    ctx->pc = 0x205030u;
    {
        const bool branch_taken_0x205030 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x205034u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x205030) {
            ctx->pc = 0x205048u;
            goto label_205048;
        }
    }
    ctx->pc = 0x205038u;
    // 0x205038: 0xa31825
    ctx->pc = 0x205038u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20503c: 0x2821024
    ctx->pc = 0x20503cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x205040: 0x60282d
    ctx->pc = 0x205040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205044: 0x82280b
    ctx->pc = 0x205044u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
label_205048:
    // 0x205048: 0x3c022000
    ctx->pc = 0x205048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x20504c: 0x2621824
    ctx->pc = 0x20504cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x205050: 0x10600005
    ctx->pc = 0x205050u;
    {
        const bool branch_taken_0x205050 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x205054u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x205050) {
            ctx->pc = 0x205068u;
            goto label_205068;
        }
    }
    ctx->pc = 0x205058u;
    // 0x205058: 0x831825
    ctx->pc = 0x205058u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20505c: 0x2821024
    ctx->pc = 0x20505cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x205060: 0x60202d
    ctx->pc = 0x205060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205064: 0xa2200b
    ctx->pc = 0x205064u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
label_205068:
    // 0x205068: 0x3c021000
    ctx->pc = 0x205068u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x20506c: 0x2621824
    ctx->pc = 0x20506cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x205070: 0x10600005
    ctx->pc = 0x205070u;
    {
        const bool branch_taken_0x205070 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x205074u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x205070) {
            ctx->pc = 0x205088u;
            goto label_205088;
        }
    }
    ctx->pc = 0x205078u;
    // 0x205078: 0xa31825
    ctx->pc = 0x205078u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20507c: 0x2821024
    ctx->pc = 0x20507cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x205080: 0x60282d
    ctx->pc = 0x205080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205084: 0x82280b
    ctx->pc = 0x205084u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
label_205088:
    // 0x205088: 0x3c028000
    ctx->pc = 0x205088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x20508c: 0x2621824
    ctx->pc = 0x20508cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x205090: 0x10600005
    ctx->pc = 0x205090u;
    {
        const bool branch_taken_0x205090 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x205094u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x205090) {
            ctx->pc = 0x2050A8u;
            goto label_2050a8;
        }
    }
    ctx->pc = 0x205098u;
    // 0x205098: 0x831825
    ctx->pc = 0x205098u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20509c: 0x2821024
    ctx->pc = 0x20509cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2050a0: 0x60202d
    ctx->pc = 0x2050a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2050a4: 0xa2200b
    ctx->pc = 0x2050a4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
label_2050a8:
    // 0x2050a8: 0x3c054000
    ctx->pc = 0x2050a8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16384 << 16));
    // 0x2050ac: 0x2651024
    ctx->pc = 0x2050acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2050b0: 0x10400004
    ctx->pc = 0x2050B0u;
    {
        const bool branch_taken_0x2050b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2050B4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2050b0) {
            ctx->pc = 0x2050C4u;
            goto label_2050c4;
        }
    }
    ctx->pc = 0x2050B8u;
    // 0x2050b8: 0x621825
    ctx->pc = 0x2050b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2050bc: 0x2851024
    ctx->pc = 0x2050bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2050c0: 0x82180b
    ctx->pc = 0x2050c0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
label_2050c4:
    // 0x2050c4: 0x8fa20020
    ctx->pc = 0x2050c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2050c8: 0xac430000
    ctx->pc = 0x2050c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2050cc: 0x1e2080
    ctx->pc = 0x2050ccu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 30), 2));
    // 0x2050d0: 0x3c05003c
    ctx->pc = 0x2050d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2050d4: 0x24a5b340
    ctx->pc = 0x2050d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947648));
    // 0x2050d8: 0x851821
    ctx->pc = 0x2050d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2050dc: 0x3c05003c
    ctx->pc = 0x2050dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2050e0: 0x24a5b320
    ctx->pc = 0x2050e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947616));
    // 0x2050e4: 0x851021
    ctx->pc = 0x2050e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2050e8: 0x8c420000
    ctx->pc = 0x2050e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2050ec: 0xac620000
    ctx->pc = 0x2050ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2050f0: 0x3c03003c
    ctx->pc = 0x2050f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2050f4: 0x2463b2c0
    ctx->pc = 0x2050f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947520));
    // 0x2050f8: 0x831021
    ctx->pc = 0x2050f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2050fc: 0x8c420000
    ctx->pc = 0x2050fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205100: 0x1040002c
    ctx->pc = 0x205100u;
    {
        const bool branch_taken_0x205100 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x205104u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 30), 2));
        if (branch_taken_0x205100) {
            ctx->pc = 0x2051B4u;
            goto label_2051b4;
        }
    }
    ctx->pc = 0x205108u;
    // 0x205108: 0x5454002b
    ctx->pc = 0x205108u;
    {
        const bool branch_taken_0x205108 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x205108) {
            ctx->pc = 0x20510Cu;
            SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
            ctx->pc = 0x2051B8u;
            goto label_2051b8;
        }
    }
    ctx->pc = 0x205110u;
    // 0x205110: 0x3c05003c
    ctx->pc = 0x205110u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x205114: 0x24a5b360
    ctx->pc = 0x205114u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947680));
    // 0x205118: 0x853821
    ctx->pc = 0x205118u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20511c: 0x3c020031
    ctx->pc = 0x20511cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205120: 0x8ce30000
    ctx->pc = 0x205120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x205124: 0x8c42ffc0
    ctx->pc = 0x205124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967232)));
    // 0x205128: 0x622821
    ctx->pc = 0x205128u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20512c: 0xace50000
    ctx->pc = 0x20512cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x205130: 0x3c020031
    ctx->pc = 0x205130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205134: 0x24480e58
    ctx->pc = 0x205134u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 3672));
    // 0x205138: 0x3c02003c
    ctx->pc = 0x205138u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20513c: 0x2442b380
    ctx->pc = 0x20513cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947712));
    // 0x205140: 0x823021
    ctx->pc = 0x205140u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x205144: 0x8cc40000
    ctx->pc = 0x205144u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x205148: 0x41080
    ctx->pc = 0x205148u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20514c: 0x481021
    ctx->pc = 0x20514cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x205150: 0x8c430000
    ctx->pc = 0x205150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205154: 0xa3102b
    ctx->pc = 0x205154u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x205158: 0x54400027
    ctx->pc = 0x205158u;
    {
        const bool branch_taken_0x205158 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x205158) {
            ctx->pc = 0x20515Cu;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
            ctx->pc = 0x2051F8u;
            goto label_2051f8;
        }
    }
    ctx->pc = 0x205160u;
    // 0x205160: 0xa31023
    ctx->pc = 0x205160u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x205164: 0xace20000
    ctx->pc = 0x205164u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x205168: 0x24820001
    ctx->pc = 0x205168u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20516c: 0xacc20000
    ctx->pc = 0x20516cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x205170: 0x21080
    ctx->pc = 0x205170u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x205174: 0x481021
    ctx->pc = 0x205174u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x205178: 0x8c420000
    ctx->pc = 0x205178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20517c: 0x58400001
    ctx->pc = 0x20517Cu;
    {
        const bool branch_taken_0x20517c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20517c) {
            ctx->pc = 0x205180u;
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
            ctx->pc = 0x205184u;
            goto label_205184;
        }
    }
    ctx->pc = 0x205184u;
label_205184:
    // 0x205184: 0x1e1880
    ctx->pc = 0x205184u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 30), 2));
    // 0x205188: 0x3c05003c
    ctx->pc = 0x205188u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x20518c: 0x24a5b340
    ctx->pc = 0x20518cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947648));
    // 0x205190: 0x652021
    ctx->pc = 0x205190u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x205194: 0x3c02003c
    ctx->pc = 0x205194u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x205198: 0x2442b2c0
    ctx->pc = 0x205198u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x20519c: 0x621821
    ctx->pc = 0x20519cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2051a0: 0x8c820000
    ctx->pc = 0x2051a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2051a4: 0x8c630000
    ctx->pc = 0x2051a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2051a8: 0x431025
    ctx->pc = 0x2051a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2051ac: 0x10000011
    ctx->pc = 0x2051ACu;
    {
        const bool branch_taken_0x2051ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2051B0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2051ac) {
            ctx->pc = 0x2051F4u;
            goto label_2051f4;
        }
    }
    ctx->pc = 0x2051B4u;
label_2051b4:
    // 0x2051b4: 0x3c04003c
    ctx->pc = 0x2051b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_2051b8:
    // 0x2051b8: 0x2484b360
    ctx->pc = 0x2051b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947680));
    // 0x2051bc: 0x641021
    ctx->pc = 0x2051bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2051c0: 0xac400000
    ctx->pc = 0x2051c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2051c4: 0x3c05003c
    ctx->pc = 0x2051c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2051c8: 0x10000008
    ctx->pc = 0x2051C8u;
    {
        const bool branch_taken_0x2051c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2051CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947712));
        if (branch_taken_0x2051c8) {
            ctx->pc = 0x2051ECu;
            goto label_2051ec;
        }
    }
    ctx->pc = 0x2051D0u;
label_2051d0:
    // 0x2051d0: 0x1e1880
    ctx->pc = 0x2051d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 30), 2));
    // 0x2051d4: 0x3c04003c
    ctx->pc = 0x2051d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2051d8: 0x2484b320
    ctx->pc = 0x2051d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947616));
    // 0x2051dc: 0x641021
    ctx->pc = 0x2051dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2051e0: 0xac400000
    ctx->pc = 0x2051e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2051e4: 0x3c05003c
    ctx->pc = 0x2051e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2051e8: 0x24a5b340
    ctx->pc = 0x2051e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947648));
label_2051ec:
    // 0x2051ec: 0x651821
    ctx->pc = 0x2051ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2051f0: 0xac600000
    ctx->pc = 0x2051f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2051f4:
    // 0x2051f4: 0x26f70001
    ctx->pc = 0x2051f4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
label_2051f8:
    // 0x2051f8: 0x2ae20004
    ctx->pc = 0x2051f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), 4));
    // 0x2051fc: 0x1440fea6
    ctx->pc = 0x2051FCu;
    {
        const bool branch_taken_0x2051fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x205200u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
        if (branch_taken_0x2051fc) {
            ctx->pc = 0x204C98u;
            goto label_204c98;
        }
    }
    ctx->pc = 0x205204u;
    // 0x205204: 0xb82d
    ctx->pc = 0x205204u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205208: 0x3c020031
    ctx->pc = 0x205208u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20520c: 0x244a1b20
    ctx->pc = 0x20520cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 6944));
    // 0x205210: 0x3c02003c
    ctx->pc = 0x205210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x205214: 0x2454b2c0
    ctx->pc = 0x205214u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x205218: 0x3c020031
    ctx->pc = 0x205218u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20521c: 0x24521b38
    ctx->pc = 0x20521cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 6968));
    // 0x205220: 0x3c020031
    ctx->pc = 0x205220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205224: 0x24511c90
    ctx->pc = 0x205224u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7312));
    // 0x205228: 0x3c020031
    ctx->pc = 0x205228u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20522c: 0x24491b50
    ctx->pc = 0x20522cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 6992));
    // 0x205230: 0x3c02003c
    ctx->pc = 0x205230u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x205234: 0x2450b3a0
    ctx->pc = 0x205234u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294947744));
    // 0x205238: 0x240f0030
    ctx->pc = 0x205238u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 48));
    // 0x20523c: 0x3c020031
    ctx->pc = 0x20523cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205240: 0x8c53ffc0
    ctx->pc = 0x205240u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294967232)));
    // 0x205244: 0x3c02003c
    ctx->pc = 0x205244u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x205248: 0x244eb460
    ctx->pc = 0x205248u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 2), 4294947936));
    // 0x20524c: 0x3c0d0031
    ctx->pc = 0x20524cu;
    SET_GPR_U32(ctx, 13, ((uint32_t)49 << 16));
    // 0x205250: 0x3c0c0031
    ctx->pc = 0x205250u;
    SET_GPR_U32(ctx, 12, ((uint32_t)49 << 16));
    // 0x205254: 0x3c0b0031
    ctx->pc = 0x205254u;
    SET_GPR_U32(ctx, 11, ((uint32_t)49 << 16));
label_205258:
    // 0x205258: 0x171880
    ctx->pc = 0x205258u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 2));
    // 0x20525c: 0x6a2021
    ctx->pc = 0x20525cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x205260: 0x171100
    ctx->pc = 0x205260u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 4));
    // 0x205264: 0x541021
    ctx->pc = 0x205264u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x205268: 0x8c450000
    ctx->pc = 0x205268u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20526c: 0xac850000
    ctx->pc = 0x20526cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x205270: 0x722021
    ctx->pc = 0x205270u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x205274: 0x711021
    ctx->pc = 0x205274u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x205278: 0x8c460000
    ctx->pc = 0x205278u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20527c: 0xc51026
    ctx->pc = 0x20527cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x205280: 0x451024
    ctx->pc = 0x205280u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x205284: 0xac820000
    ctx->pc = 0x205284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x205288: 0x691821
    ctx->pc = 0x205288u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x20528c: 0x10a00022
    ctx->pc = 0x20528Cu;
    {
        const bool branch_taken_0x20528c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x205290u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x20528c) {
            ctx->pc = 0x205318u;
            goto label_205318;
        }
    }
    ctx->pc = 0x205294u;
    // 0x205294: 0x14a60021
    ctx->pc = 0x205294u;
    {
        const bool branch_taken_0x205294 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 6));
        ctx->pc = 0x205298u;
        { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x205294) {
            ctx->pc = 0x20531Cu;
            goto label_20531c;
        }
    }
    ctx->pc = 0x20529Cu;
    // 0x20529c: 0x703021
    ctx->pc = 0x20529cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2052a0: 0x8cc20000
    ctx->pc = 0x2052a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2052a4: 0x532821
    ctx->pc = 0x2052a4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2052a8: 0xacc50000
    ctx->pc = 0x2052a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x2052ac: 0x3c020031
    ctx->pc = 0x2052acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2052b0: 0x24480e58
    ctx->pc = 0x2052b0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 3672));
    // 0x2052b4: 0x6e1821
    ctx->pc = 0x2052b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x2052b8: 0x8c670000
    ctx->pc = 0x2052b8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2052bc: 0x71080
    ctx->pc = 0x2052bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x2052c0: 0x481021
    ctx->pc = 0x2052c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2052c4: 0x8c440000
    ctx->pc = 0x2052c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2052c8: 0xa4102a
    ctx->pc = 0x2052c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
    // 0x2052cc: 0x54400018
    ctx->pc = 0x2052CCu;
    {
        const bool branch_taken_0x2052cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2052cc) {
            ctx->pc = 0x2052D0u;
            SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 23), 2));
            ctx->pc = 0x205330u;
            goto label_205330;
        }
    }
    ctx->pc = 0x2052D4u;
    // 0x2052d4: 0xa41023
    ctx->pc = 0x2052d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2052d8: 0xacc20000
    ctx->pc = 0x2052d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2052dc: 0x24e20001
    ctx->pc = 0x2052dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
    // 0x2052e0: 0xac620000
    ctx->pc = 0x2052e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2052e4: 0x21080
    ctx->pc = 0x2052e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2052e8: 0x481021
    ctx->pc = 0x2052e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2052ec: 0x8c420000
    ctx->pc = 0x2052ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2052f0: 0x58400001
    ctx->pc = 0x2052F0u;
    {
        const bool branch_taken_0x2052f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2052f0) {
            ctx->pc = 0x2052F4u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
            ctx->pc = 0x2052F8u;
            goto label_2052f8;
        }
    }
    ctx->pc = 0x2052F8u;
label_2052f8:
    // 0x2052f8: 0x171880
    ctx->pc = 0x2052f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 2));
    // 0x2052fc: 0x692021
    ctx->pc = 0x2052fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x205300: 0x6a1821
    ctx->pc = 0x205300u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x205304: 0x8c820000
    ctx->pc = 0x205304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x205308: 0x8c630000
    ctx->pc = 0x205308u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20530c: 0x431025
    ctx->pc = 0x20530cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205310: 0x10000006
    ctx->pc = 0x205310u;
    {
        const bool branch_taken_0x205310 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x205314u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x205310) {
            ctx->pc = 0x20532Cu;
            goto label_20532c;
        }
    }
    ctx->pc = 0x205318u;
label_205318:
    // 0x205318: 0x2ef1818
    ctx->pc = 0x205318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20531c:
    // 0x20531c: 0x701021
    ctx->pc = 0x20531cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x205320: 0xac400000
    ctx->pc = 0x205320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x205324: 0x6e1821
    ctx->pc = 0x205324u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x205328: 0xac600000
    ctx->pc = 0x205328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20532c:
    // 0x20532c: 0x172080
    ctx->pc = 0x20532cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 23), 2));
label_205330:
    // 0x205330: 0x921821
    ctx->pc = 0x205330u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x205334: 0x8da21b48
    ctx->pc = 0x205334u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 13), 6984)));
    // 0x205338: 0x8c630000
    ctx->pc = 0x205338u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20533c: 0x431025
    ctx->pc = 0x20533cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205340: 0xada21b48
    ctx->pc = 0x205340u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 6984), GPR_U32(ctx, 2));
    // 0x205344: 0x8a1821
    ctx->pc = 0x205344u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x205348: 0x8d821b30
    ctx->pc = 0x205348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 6960)));
    // 0x20534c: 0x8c650000
    ctx->pc = 0x20534cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205350: 0x451025
    ctx->pc = 0x205350u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x205354: 0xad821b30
    ctx->pc = 0x205354u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 6960), GPR_U32(ctx, 2));
    // 0x205358: 0x891821
    ctx->pc = 0x205358u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x20535c: 0x8d621b60
    ctx->pc = 0x20535cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 7008)));
    // 0x205360: 0x8c630000
    ctx->pc = 0x205360u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205364: 0x431025
    ctx->pc = 0x205364u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205368: 0xad621b60
    ctx->pc = 0x205368u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 7008), GPR_U32(ctx, 2));
    // 0x20536c: 0x912021
    ctx->pc = 0x20536cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x205370: 0x26f70001
    ctx->pc = 0x205370u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
    // 0x205374: 0x2ae20002
    ctx->pc = 0x205374u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), 2));
    // 0x205378: 0x1440ffb7
    ctx->pc = 0x205378u;
    {
        const bool branch_taken_0x205378 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20537Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x205378) {
            ctx->pc = 0x205258u;
            goto label_205258;
        }
    }
    ctx->pc = 0x205380u;
    // 0x205380: 0xb82d
    ctx->pc = 0x205380u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205384: 0x3c020031
    ctx->pc = 0x205384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205388: 0x24451cc0
    ctx->pc = 0x205388u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 7360));
    // 0x20538c: 0x3c020031
    ctx->pc = 0x20538cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205390: 0x24441ca0
    ctx->pc = 0x205390u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 7328));
    // 0x205394: 0x171080
    ctx->pc = 0x205394u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
label_205398:
    // 0x205398: 0x451821
    ctx->pc = 0x205398u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20539c: 0xac600000
    ctx->pc = 0x20539cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2053a0: 0x441021
    ctx->pc = 0x2053a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2053a4: 0xac400000
    ctx->pc = 0x2053a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2053a8: 0x26f70001
    ctx->pc = 0x2053a8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
    // 0x2053ac: 0x2ae20008
    ctx->pc = 0x2053acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), 8));
    // 0x2053b0: 0x1440fff9
    ctx->pc = 0x2053B0u;
    {
        const bool branch_taken_0x2053b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2053B4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
        if (branch_taken_0x2053b0) {
            ctx->pc = 0x205398u;
            goto label_205398;
        }
    }
    ctx->pc = 0x2053B8u;
    // 0x2053b8: 0x3c020031
    ctx->pc = 0x2053b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2053bc: 0xac400f18
    ctx->pc = 0x2053bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3864), GPR_U32(ctx, 0));
    // 0x2053c0: 0x3c030031
    ctx->pc = 0x2053c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2053c4: 0x2402018f
    ctx->pc = 0x2053c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 399));
    // 0x2053c8: 0xac620f0c
    ctx->pc = 0x2053c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3852), GPR_U32(ctx, 2));
    // 0x2053cc: 0xdfbf00c0
    ctx->pc = 0x2053ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2053d0:
    // 0x2053d0: 0xdfbe00b0
    ctx->pc = 0x2053d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2053d4: 0xdfb700a0
    ctx->pc = 0x2053d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2053d8: 0xdfb60090
    ctx->pc = 0x2053d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2053dc: 0xdfb50080
    ctx->pc = 0x2053dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2053e0: 0xdfb40070
    ctx->pc = 0x2053e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2053e4: 0xdfb30060
    ctx->pc = 0x2053e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2053e8: 0xdfb20050
    ctx->pc = 0x2053e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2053ec: 0xdfb10040
    ctx->pc = 0x2053ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2053f0: 0xdfb00030
    ctx->pc = 0x2053f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2053f4: 0x3e00008
    ctx->pc = 0x2053F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2053F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204BB8u: goto label_204bb8;
            case 0x204BF0u: goto label_204bf0;
            case 0x204C08u: goto label_204c08;
            case 0x204C2Cu: goto label_204c2c;
            case 0x204C6Cu: goto label_204c6c;
            case 0x204C74u: goto label_204c74;
            case 0x204C78u: goto label_204c78;
            case 0x204C98u: goto label_204c98;
            case 0x204D10u: goto label_204d10;
            case 0x204D40u: goto label_204d40;
            case 0x204D4Cu: goto label_204d4c;
            case 0x204D50u: goto label_204d50;
            case 0x204E08u: goto label_204e08;
            case 0x204E28u: goto label_204e28;
            case 0x204E44u: goto label_204e44;
            case 0x204E60u: goto label_204e60;
            case 0x204E7Cu: goto label_204e7c;
            case 0x204E98u: goto label_204e98;
            case 0x204EB8u: goto label_204eb8;
            case 0x204ED4u: goto label_204ed4;
            case 0x204EF0u: goto label_204ef0;
            case 0x204F0Cu: goto label_204f0c;
            case 0x204F28u: goto label_204f28;
            case 0x204F48u: goto label_204f48;
            case 0x204F68u: goto label_204f68;
            case 0x204F88u: goto label_204f88;
            case 0x204FA8u: goto label_204fa8;
            case 0x204FC8u: goto label_204fc8;
            case 0x204FE8u: goto label_204fe8;
            case 0x205008u: goto label_205008;
            case 0x205028u: goto label_205028;
            case 0x205048u: goto label_205048;
            case 0x205068u: goto label_205068;
            case 0x205088u: goto label_205088;
            case 0x2050A8u: goto label_2050a8;
            case 0x2050C4u: goto label_2050c4;
            case 0x205184u: goto label_205184;
            case 0x2051B4u: goto label_2051b4;
            case 0x2051B8u: goto label_2051b8;
            case 0x2051D0u: goto label_2051d0;
            case 0x2051ECu: goto label_2051ec;
            case 0x2051F4u: goto label_2051f4;
            case 0x2051F8u: goto label_2051f8;
            case 0x205258u: goto label_205258;
            case 0x2052F8u: goto label_2052f8;
            case 0x205318u: goto label_205318;
            case 0x20531Cu: goto label_20531c;
            case 0x20532Cu: goto label_20532c;
            case 0x205330u: goto label_205330;
            case 0x205398u: goto label_205398;
            case 0x2053D0u: goto label_2053d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2053FCu;
}
