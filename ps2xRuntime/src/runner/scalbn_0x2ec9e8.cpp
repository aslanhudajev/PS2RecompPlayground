#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: scalbn
// Address: 0x2ec9e8 - 0x2ecb9c
void scalbn_0x2ec9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ec9e8u;

    // 0x2ec9e8: 0x27bdffd0
    ctx->pc = 0x2ec9e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ec9ec: 0xffb00000
    ctx->pc = 0x2ec9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ec9f0: 0xffbf0020
    ctx->pc = 0x2ec9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ec9f4: 0xa0802d
    ctx->pc = 0x2ec9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec9f8: 0xffb10010
    ctx->pc = 0x2ec9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ec9fc: 0x80102d
    ctx->pc = 0x2ec9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eca00: 0x2303f
    ctx->pc = 0x2eca00u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2eca04: 0x2283c
    ctx->pc = 0x2eca04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eca08: 0x5283f
    ctx->pc = 0x2eca08u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2eca0c: 0x3c117ff0
    ctx->pc = 0x2eca0cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)32752 << 16));
    // 0x2eca10: 0xd11024
    ctx->pc = 0x2eca10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2eca14: 0x21d03
    ctx->pc = 0x2eca14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 20));
    // 0x2eca18: 0x14600018
    ctx->pc = 0x2ECA18u;
    {
        const bool branch_taken_0x2eca18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ECA1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2047));
        if (branch_taken_0x2eca18) {
            ctx->pc = 0x2ECA7Cu;
            goto label_2eca7c;
        }
    }
    ctx->pc = 0x2ECA20u;
    // 0x2eca20: 0x3c027fff
    ctx->pc = 0x2eca20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x2eca24: 0x3442ffff
    ctx->pc = 0x2eca24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2eca28: 0xc21024
    ctx->pc = 0x2eca28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eca2c: 0xa21025
    ctx->pc = 0x2eca2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2eca30: 0x10400055
    ctx->pc = 0x2ECA30u;
    {
        const bool branch_taken_0x2eca30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECA34u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2eca30) {
            ctx->pc = 0x2ECB88u;
            goto label_2ecb88;
        }
    }
    ctx->pc = 0x2ECA38u;
    // 0x2eca38: 0x340586a0
    ctx->pc = 0x2eca38u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 34464));
    // 0x2eca3c: 0x52bfc
    ctx->pc = 0x2eca3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2eca40: 0xc0be370
    ctx->pc = 0x2ECA40u;
    SET_GPR_U32(ctx, 31, 0x2ECA48u);
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECA48u; }
    }
    if (ctx->pc != 0x2ECA48u) { return; }
    ctx->pc = 0x2ECA48u;
    // 0x2eca48: 0x40202d
    ctx->pc = 0x2eca48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eca4c: 0x2303f
    ctx->pc = 0x2eca4cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2eca50: 0xd11824
    ctx->pc = 0x2eca50u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2eca54: 0x3c02ffff
    ctx->pc = 0x2eca54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2eca58: 0x31d03
    ctx->pc = 0x2eca58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 20));
    // 0x2eca5c: 0x34423cb0
    ctx->pc = 0x2eca5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 15536));
    // 0x2eca60: 0x202102a
    ctx->pc = 0x2eca60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2eca64: 0x10400004
    ctx->pc = 0x2ECA64u;
    {
        const bool branch_taken_0x2eca64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECA68u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967242));
        if (branch_taken_0x2eca64) {
            ctx->pc = 0x2ECA78u;
            goto label_2eca78;
        }
    }
    ctx->pc = 0x2ECA6Cu;
    // 0x2eca6c: 0x3c02003c
    ctx->pc = 0x2eca6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2eca70: 0x10000043
    ctx->pc = 0x2ECA70u;
    {
        const bool branch_taken_0x2eca70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECA74u;
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294941848)));
        if (branch_taken_0x2eca70) {
            ctx->pc = 0x2ECB80u;
            goto label_2ecb80;
        }
    }
    ctx->pc = 0x2ECA78u;
label_2eca78:
    // 0x2eca78: 0x240207ff
    ctx->pc = 0x2eca78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2047));
label_2eca7c:
    // 0x2eca7c: 0x14620005
    ctx->pc = 0x2ECA7Cu;
    {
        const bool branch_taken_0x2eca7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2ECA80u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        if (branch_taken_0x2eca7c) {
            ctx->pc = 0x2ECA94u;
            goto label_2eca94;
        }
    }
    ctx->pc = 0x2ECA84u;
    // 0x2eca84: 0xc0be340
    ctx->pc = 0x2ECA84u;
    SET_GPR_U32(ctx, 31, 0x2ECA8Cu);
    ctx->pc = 0x2ECA88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECA8Cu; }
    }
    if (ctx->pc != 0x2ECA8Cu) { return; }
    ctx->pc = 0x2ECA8Cu;
    // 0x2eca8c: 0x1000003f
    ctx->pc = 0x2ECA8Cu;
    {
        const bool branch_taken_0x2eca8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECA90u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2eca8c) {
            ctx->pc = 0x2ECB8Cu;
            goto label_2ecb8c;
        }
    }
    ctx->pc = 0x2ECA94u;
label_2eca94:
    // 0x2eca94: 0x286207ff
    ctx->pc = 0x2eca94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2047));
    // 0x2eca98: 0x14400008
    ctx->pc = 0x2ECA98u;
    {
        const bool branch_taken_0x2eca98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ECA9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2eca98) {
            ctx->pc = 0x2ECABCu;
            goto label_2ecabc;
        }
    }
    ctx->pc = 0x2ECAA0u;
    // 0x2ecaa0: 0x80282d
    ctx->pc = 0x2ecaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecaa4: 0xdc509ca0
    ctx->pc = 0x2ecaa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294941856)));
    // 0x2ecaa8: 0xc0bb354
    ctx->pc = 0x2ECAA8u;
    SET_GPR_U32(ctx, 31, 0x2ECAB0u);
    ctx->pc = 0x2ECAACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ECD50u;
    {
        const uint32_t __entryPc = ctx->pc;
        copysign_0x2ecd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECAB0u; }
    }
    if (ctx->pc != 0x2ECAB0u) { return; }
    ctx->pc = 0x2ECAB0u;
    // 0x2ecab0: 0x40202d
    ctx->pc = 0x2ecab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecab4: 0x10000032
    ctx->pc = 0x2ECAB4u;
    {
        const bool branch_taken_0x2ecab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECAB8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ecab4) {
            ctx->pc = 0x2ECB80u;
            goto label_2ecb80;
        }
    }
    ctx->pc = 0x2ECABCu;
label_2ecabc:
    // 0x2ecabc: 0x1860000e
    ctx->pc = 0x2ECABCu;
    {
        const bool branch_taken_0x2ecabc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2ECAC0u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 20));
        if (branch_taken_0x2ecabc) {
            ctx->pc = 0x2ECAF8u;
            goto label_2ecaf8;
        }
    }
    ctx->pc = 0x2ECAC4u;
    // 0x2ecac4: 0x3c02800f
    ctx->pc = 0x2ecac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32783 << 16));
    // 0x2ecac8: 0x3442ffff
    ctx->pc = 0x2ecac8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ecacc: 0x80182d
    ctx->pc = 0x2ecaccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecad0: 0xc21024
    ctx->pc = 0x2ecad0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ecad4: 0x3c04ffff
    ctx->pc = 0x2ecad4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x2ecad8: 0x4203e
    ctx->pc = 0x2ecad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ecadc: 0x451025
    ctx->pc = 0x2ecadcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ecae0: 0x641824
    ctx->pc = 0x2ecae0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ecae4: 0x2103c
    ctx->pc = 0x2ecae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ecae8: 0x622025
    ctx->pc = 0x2ecae8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ecaec: 0x10000026
    ctx->pc = 0x2ECAECu;
    {
        const bool branch_taken_0x2ecaec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECAF0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ecaec) {
            ctx->pc = 0x2ECB88u;
            goto label_2ecb88;
        }
    }
    ctx->pc = 0x2ECAF4u;
    // 0x2ecaf4: 0x0
    ctx->pc = 0x2ecaf4u;
    // NOP
label_2ecaf8:
    // 0x2ecaf8: 0x2862ffcb
    ctx->pc = 0x2ecaf8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4294967243));
    // 0x2ecafc: 0x10400013
    ctx->pc = 0x2ECAFCu;
    {
        const bool branch_taken_0x2ecafc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECB00u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
        if (branch_taken_0x2ecafc) {
            ctx->pc = 0x2ECB4Cu;
            goto label_2ecb4c;
        }
    }
    ctx->pc = 0x2ECB04u;
    // 0x2ecb04: 0x50102a
    ctx->pc = 0x2ecb04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x2ecb08: 0x10400008
    ctx->pc = 0x2ECB08u;
    {
        const bool branch_taken_0x2ecb08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECB0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2ecb08) {
            ctx->pc = 0x2ECB2Cu;
            goto label_2ecb2c;
        }
    }
    ctx->pc = 0x2ECB10u;
    // 0x2ecb10: 0x80282d
    ctx->pc = 0x2ecb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb14: 0xdc509ca0
    ctx->pc = 0x2ecb14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294941856)));
    // 0x2ecb18: 0xc0bb354
    ctx->pc = 0x2ECB18u;
    SET_GPR_U32(ctx, 31, 0x2ECB20u);
    ctx->pc = 0x2ECB1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ECD50u;
    {
        const uint32_t __entryPc = ctx->pc;
        copysign_0x2ecd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB20u; }
    }
    if (ctx->pc != 0x2ECB20u) { return; }
    ctx->pc = 0x2ECB20u;
    // 0x2ecb20: 0x40202d
    ctx->pc = 0x2ecb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb24: 0x10000016
    ctx->pc = 0x2ECB24u;
    {
        const bool branch_taken_0x2ecb24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECB28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ecb24) {
            ctx->pc = 0x2ECB80u;
            goto label_2ecb80;
        }
    }
    ctx->pc = 0x2ECB2Cu;
label_2ecb2c:
    // 0x2ecb2c: 0x3c02003c
    ctx->pc = 0x2ecb2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2ecb30: 0x80282d
    ctx->pc = 0x2ecb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb34: 0xdc509c98
    ctx->pc = 0x2ecb34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294941848)));
    // 0x2ecb38: 0xc0bb354
    ctx->pc = 0x2ECB38u;
    SET_GPR_U32(ctx, 31, 0x2ECB40u);
    ctx->pc = 0x2ECB3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ECD50u;
    {
        const uint32_t __entryPc = ctx->pc;
        copysign_0x2ecd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB40u; }
    }
    if (ctx->pc != 0x2ECB40u) { return; }
    ctx->pc = 0x2ECB40u;
    // 0x2ecb40: 0x40202d
    ctx->pc = 0x2ecb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb44: 0x1000000e
    ctx->pc = 0x2ECB44u;
    {
        const bool branch_taken_0x2ecb44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECB48u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ecb44) {
            ctx->pc = 0x2ECB80u;
            goto label_2ecb80;
        }
    }
    ctx->pc = 0x2ECB4Cu;
label_2ecb4c:
    // 0x2ecb4c: 0x24630036
    ctx->pc = 0x2ecb4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 54));
    // 0x2ecb50: 0x3c02800f
    ctx->pc = 0x2ecb50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32783 << 16));
    // 0x2ecb54: 0x3442ffff
    ctx->pc = 0x2ecb54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ecb58: 0x32d00
    ctx->pc = 0x2ecb58u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 20));
    // 0x2ecb5c: 0xc21024
    ctx->pc = 0x2ecb5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ecb60: 0x3c03ffff
    ctx->pc = 0x2ecb60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2ecb64: 0x3183e
    ctx->pc = 0x2ecb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ecb68: 0x451025
    ctx->pc = 0x2ecb68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ecb6c: 0x832024
    ctx->pc = 0x2ecb6cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ecb70: 0x2103c
    ctx->pc = 0x2ecb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ecb74: 0x822025
    ctx->pc = 0x2ecb74u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ecb78: 0x3405f240
    ctx->pc = 0x2ecb78u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 62016));
    // 0x2ecb7c: 0x52bbc
    ctx->pc = 0x2ecb7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_2ecb80:
    // 0x2ecb80: 0xc0be370
    ctx->pc = 0x2ECB80u;
    SET_GPR_U32(ctx, 31, 0x2ECB88u);
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB88u; }
    }
    if (ctx->pc != 0x2ECB88u) { return; }
    ctx->pc = 0x2ECB88u;
label_2ecb88:
    // 0x2ecb88: 0xdfbf0020
    ctx->pc = 0x2ecb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ecb8c:
    // 0x2ecb8c: 0xdfb10010
    ctx->pc = 0x2ecb8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecb90: 0xdfb00000
    ctx->pc = 0x2ecb90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecb94: 0x3e00008
    ctx->pc = 0x2ECB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECB98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ECA78u: goto label_2eca78;
            case 0x2ECA7Cu: goto label_2eca7c;
            case 0x2ECA94u: goto label_2eca94;
            case 0x2ECABCu: goto label_2ecabc;
            case 0x2ECAF8u: goto label_2ecaf8;
            case 0x2ECB2Cu: goto label_2ecb2c;
            case 0x2ECB4Cu: goto label_2ecb4c;
            case 0x2ECB80u: goto label_2ecb80;
            case 0x2ECB88u: goto label_2ecb88;
            case 0x2ECB8Cu: goto label_2ecb8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ECB9Cu;
}
