#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: quorem
// Address: 0x12dd10 - 0x12df24
void quorem_0x12dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12dd10u;

    // 0x12dd10: 0x27bdff80
    ctx->pc = 0x12dd10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12dd14: 0xa0702d
    ctx->pc = 0x12dd14u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd18: 0xffb40040
    ctx->pc = 0x12dd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12dd1c: 0xffbf0070
    ctx->pc = 0x12dd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12dd20: 0x80a02d
    ctx->pc = 0x12dd20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd24: 0xffb60060
    ctx->pc = 0x12dd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x12dd28: 0xffb50050
    ctx->pc = 0x12dd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x12dd2c: 0xffb30030
    ctx->pc = 0x12dd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x12dd30: 0xffb20020
    ctx->pc = 0x12dd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12dd34: 0xffb10010
    ctx->pc = 0x12dd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12dd38: 0xffb00000
    ctx->pc = 0x12dd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dd3c: 0x8dd00010
    ctx->pc = 0x12dd3cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x12dd40: 0x8e820010
    ctx->pc = 0x12dd40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x12dd44: 0x50102a
    ctx->pc = 0x12dd44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x12dd48: 0x1440006c
    ctx->pc = 0x12DD48u;
    {
        const bool branch_taken_0x12dd48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12DD4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12dd48) {
            ctx->pc = 0x12DEFCu;
            goto label_12defc;
        }
    }
    ctx->pc = 0x12DD50u;
    // 0x12dd50: 0x2610ffff
    ctx->pc = 0x12dd50u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x12dd54: 0x25cb0014
    ctx->pc = 0x12dd54u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 14), 20));
    // 0x12dd58: 0x103880
    ctx->pc = 0x12dd58u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 16), 2));
    // 0x12dd5c: 0x26910014
    ctx->pc = 0x12dd5cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 20), 20));
    // 0x12dd60: 0x1679821
    ctx->pc = 0x12dd60u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x12dd64: 0x2274021
    ctx->pc = 0x12dd64u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x12dd68: 0x8e620000
    ctx->pc = 0x12dd68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12dd6c: 0x8d0d0000
    ctx->pc = 0x12dd6cu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12dd70: 0x220502d
    ctx->pc = 0x12dd70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd74: 0x24420001
    ctx->pc = 0x12dd74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x12dd78: 0x1a2001b
    ctx->pc = 0x12dd78u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 13) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,13); } }
    // 0x12dd7c: 0x50400001
    ctx->pc = 0x12DD7Cu;
    {
        const bool branch_taken_0x12dd7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12dd7c) {
            ctx->pc = 0x12DD80u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x12DD84u;
            goto label_12dd84;
        }
    }
    ctx->pc = 0x12DD84u;
label_12dd84:
    // 0x12dd84: 0xa812
    ctx->pc = 0x12dd84u;
    SET_GPR_U32(ctx, 21, ctx->lo);
    // 0x12dd88: 0x2a0902d
    ctx->pc = 0x12dd88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd8c: 0x1240002a
    ctx->pc = 0x12DD8Cu;
    {
        const bool branch_taken_0x12dd8c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x12DD90u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12dd8c) {
            ctx->pc = 0x12DE38u;
            goto label_12de38;
        }
    }
    ctx->pc = 0x12DD94u;
    // 0x12dd94: 0x602d
    ctx->pc = 0x12dd94u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd98: 0x182d
    ctx->pc = 0x12dd98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd9c: 0x0
    ctx->pc = 0x12dd9cu;
    // NOP
label_12dda0:
    // 0x12dda0: 0x8d640000
    ctx->pc = 0x12dda0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12dda4: 0x8d460000
    ctx->pc = 0x12dda4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12dda8: 0x256b0004
    ctx->pc = 0x12dda8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
    // 0x12ddac: 0x3082ffff
    ctx->pc = 0x12ddacu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x12ddb0: 0x26b382b
    ctx->pc = 0x12ddb0u;
    SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x12ddb4: 0x522818
    ctx->pc = 0x12ddb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x12ddb8: 0x42402
    ctx->pc = 0x12ddb8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 16));
    // 0x12ddbc: 0x922018
    ctx->pc = 0x12ddbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x12ddc0: 0xa31021
    ctx->pc = 0x12ddc0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12ddc4: 0x3045ffff
    ctx->pc = 0x12ddc4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
    // 0x12ddc8: 0x30c3ffff
    ctx->pc = 0x12ddc8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 65535));
    // 0x12ddcc: 0x21402
    ctx->pc = 0x12ddccu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x12ddd0: 0x651823
    ctx->pc = 0x12ddd0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12ddd4: 0x824821
    ctx->pc = 0x12ddd4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12ddd8: 0x6c1821
    ctx->pc = 0x12ddd8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x12dddc: 0x63402
    ctx->pc = 0x12dddcu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 16));
    // 0x12dde0: 0x3122ffff
    ctx->pc = 0x12dde0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 9), 65535));
    // 0x12dde4: 0x36403
    ctx->pc = 0x12dde4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x12dde8: 0xc23023
    ctx->pc = 0x12dde8u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12ddec: 0xcc2821
    ctx->pc = 0x12ddecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x12ddf0: 0xa5430000
    ctx->pc = 0x12ddf0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x12ddf4: 0xa5450002
    ctx->pc = 0x12ddf4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x12ddf8: 0x91c02
    ctx->pc = 0x12ddf8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 9), 16));
    // 0x12ddfc: 0x56403
    ctx->pc = 0x12ddfcu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x12de00: 0x10e0ffe7
    ctx->pc = 0x12DE00u;
    {
        const bool branch_taken_0x12de00 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x12DE04u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
        if (branch_taken_0x12de00) {
            ctx->pc = 0x12DDA0u;
            goto label_12dda0;
        }
    }
    ctx->pc = 0x12DE08u;
    // 0x12de08: 0x15a0000c
    ctx->pc = 0x12DE08u;
    {
        const bool branch_taken_0x12de08 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 0));
        ctx->pc = 0x12DE0Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12de08) {
            ctx->pc = 0x12DE3Cu;
            goto label_12de3c;
        }
    }
    ctx->pc = 0x12DE10u;
    // 0x12de10: 0x10000002
    ctx->pc = 0x12DE10u;
    {
        const bool branch_taken_0x12de10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12DE14u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
        if (branch_taken_0x12de10) {
            ctx->pc = 0x12DE1Cu;
            goto label_12de1c;
        }
    }
    ctx->pc = 0x12DE18u;
label_12de18:
    // 0x12de18: 0x2610ffff
    ctx->pc = 0x12de18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_12de1c:
    // 0x12de1c: 0x228102b
    ctx->pc = 0x12de1cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x12de20: 0x50400005
    ctx->pc = 0x12DE20u;
    {
        const bool branch_taken_0x12de20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12de20) {
            ctx->pc = 0x12DE24u;
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->pc = 0x12DE38u;
            goto label_12de38;
        }
    }
    ctx->pc = 0x12DE28u;
    // 0x12de28: 0x8d020000
    ctx->pc = 0x12de28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12de2c: 0x1040fffa
    ctx->pc = 0x12DE2Cu;
    {
        const bool branch_taken_0x12de2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12DE30u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
        if (branch_taken_0x12de2c) {
            ctx->pc = 0x12DE18u;
            goto label_12de18;
        }
    }
    ctx->pc = 0x12DE34u;
    // 0x12de34: 0xae900010
    ctx->pc = 0x12de34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_12de38:
    // 0x12de38: 0x1c0282d
    ctx->pc = 0x12de38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_12de3c:
    // 0x12de3c: 0xc04c1e2
    ctx->pc = 0x12DE3Cu;
    SET_GPR_U32(ctx, 31, 0x12DE44u);
    ctx->pc = 0x12DE40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130788u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x130788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE44u; }
    }
    if (ctx->pc != 0x12DE44u) { return; }
    ctx->pc = 0x12DE44u;
    // 0x12de44: 0x440002c
    ctx->pc = 0x12DE44u;
    {
        const bool branch_taken_0x12de44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12DE48u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12de44) {
            ctx->pc = 0x12DEF8u;
            goto label_12def8;
        }
    }
    ctx->pc = 0x12DE4Cu;
    // 0x12de4c: 0x26b20001
    ctx->pc = 0x12de4cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 1));
    // 0x12de50: 0x602d
    ctx->pc = 0x12de50u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de54: 0x182d
    ctx->pc = 0x12de54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de58: 0x220502d
    ctx->pc = 0x12de58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de5c: 0x103880
    ctx->pc = 0x12de5cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 16), 2));
label_12de60:
    // 0x12de60: 0x8d640000
    ctx->pc = 0x12de60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12de64: 0x8d450000
    ctx->pc = 0x12de64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12de68: 0x256b0004
    ctx->pc = 0x12de68u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
    // 0x12de6c: 0x3082ffff
    ctx->pc = 0x12de6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x12de70: 0x43402
    ctx->pc = 0x12de70u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 4), 16));
    // 0x12de74: 0x431021
    ctx->pc = 0x12de74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12de78: 0x3044ffff
    ctx->pc = 0x12de78u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
    // 0x12de7c: 0x30a3ffff
    ctx->pc = 0x12de7cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x12de80: 0x21402
    ctx->pc = 0x12de80u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x12de84: 0x641823
    ctx->pc = 0x12de84u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12de88: 0xc24821
    ctx->pc = 0x12de88u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12de8c: 0x6c1821
    ctx->pc = 0x12de8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x12de90: 0x3122ffff
    ctx->pc = 0x12de90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 9), 65535));
    // 0x12de94: 0x52c02
    ctx->pc = 0x12de94u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 16));
    // 0x12de98: 0x36403
    ctx->pc = 0x12de98u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x12de9c: 0xa22823
    ctx->pc = 0x12de9cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12dea0: 0xac2821
    ctx->pc = 0x12dea0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x12dea4: 0xa5430000
    ctx->pc = 0x12dea4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x12dea8: 0xa5450002
    ctx->pc = 0x12dea8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x12deac: 0x91c02
    ctx->pc = 0x12deacu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 9), 16));
    // 0x12deb0: 0x56403
    ctx->pc = 0x12deb0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x12deb4: 0x26b102b
    ctx->pc = 0x12deb4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x12deb8: 0x1040ffe9
    ctx->pc = 0x12DEB8u;
    {
        const bool branch_taken_0x12deb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12DEBCu;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
        if (branch_taken_0x12deb8) {
            ctx->pc = 0x12DE60u;
            goto label_12de60;
        }
    }
    ctx->pc = 0x12DEC0u;
    // 0x12dec0: 0x2274021
    ctx->pc = 0x12dec0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x12dec4: 0x8d020000
    ctx->pc = 0x12dec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12dec8: 0x1440000c
    ctx->pc = 0x12DEC8u;
    {
        const bool branch_taken_0x12dec8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12DECCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12dec8) {
            ctx->pc = 0x12DEFCu;
            goto label_12defc;
        }
    }
    ctx->pc = 0x12DED0u;
    // 0x12ded0: 0x10000002
    ctx->pc = 0x12DED0u;
    {
        const bool branch_taken_0x12ded0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12DED4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
        if (branch_taken_0x12ded0) {
            ctx->pc = 0x12DEDCu;
            goto label_12dedc;
        }
    }
    ctx->pc = 0x12DED8u;
label_12ded8:
    // 0x12ded8: 0x2610ffff
    ctx->pc = 0x12ded8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_12dedc:
    // 0x12dedc: 0x228102b
    ctx->pc = 0x12dedcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x12dee0: 0x50400005
    ctx->pc = 0x12DEE0u;
    {
        const bool branch_taken_0x12dee0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12dee0) {
            ctx->pc = 0x12DEE4u;
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->pc = 0x12DEF8u;
            goto label_12def8;
        }
    }
    ctx->pc = 0x12DEE8u;
    // 0x12dee8: 0x8d020000
    ctx->pc = 0x12dee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12deec: 0x5040fffa
    ctx->pc = 0x12DEECu;
    {
        const bool branch_taken_0x12deec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12deec) {
            ctx->pc = 0x12DEF0u;
            SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
            ctx->pc = 0x12DED8u;
            goto label_12ded8;
        }
    }
    ctx->pc = 0x12DEF4u;
    // 0x12def4: 0xae900010
    ctx->pc = 0x12def4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_12def8:
    // 0x12def8: 0x240102d
    ctx->pc = 0x12def8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12defc:
    // 0x12defc: 0xdfbf0070
    ctx->pc = 0x12defcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12df00: 0xdfb60060
    ctx->pc = 0x12df00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12df04: 0xdfb50050
    ctx->pc = 0x12df04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12df08: 0xdfb40040
    ctx->pc = 0x12df08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12df0c: 0xdfb30030
    ctx->pc = 0x12df0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12df10: 0xdfb20020
    ctx->pc = 0x12df10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12df14: 0xdfb10010
    ctx->pc = 0x12df14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12df18: 0xdfb00000
    ctx->pc = 0x12df18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12df1c: 0x3e00008
    ctx->pc = 0x12DF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DF20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DD84u: goto label_12dd84;
            case 0x12DDA0u: goto label_12dda0;
            case 0x12DE18u: goto label_12de18;
            case 0x12DE1Cu: goto label_12de1c;
            case 0x12DE38u: goto label_12de38;
            case 0x12DE3Cu: goto label_12de3c;
            case 0x12DE60u: goto label_12de60;
            case 0x12DED8u: goto label_12ded8;
            case 0x12DEDCu: goto label_12dedc;
            case 0x12DEF8u: goto label_12def8;
            case 0x12DEFCu: goto label_12defc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DF24u;
}
