#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNewObject
// Address: 0x2c88d8 - 0x2c8978
void MBNewObject_0x2c88d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c88d8u;

    // 0x2c88d8: 0x27bdffc0
    ctx->pc = 0x2c88d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c88dc: 0xffbf0030
    ctx->pc = 0x2c88dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c88e0: 0xffb20020
    ctx->pc = 0x2c88e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c88e4: 0xffb10010
    ctx->pc = 0x2c88e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c88e8: 0xffb00000
    ctx->pc = 0x2c88e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c88ec: 0x80882d
    ctx->pc = 0x2c88ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c88f0: 0xc0202d
    ctx->pc = 0x2c88f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c88f4: 0x14800008
    ctx->pc = 0x2C88F4u;
    {
        const bool branch_taken_0x2c88f4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C88F8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c88f4) {
            ctx->pc = 0x2C8918u;
            goto label_2c8918;
        }
    }
    ctx->pc = 0x2C88FCu;
    // 0x2c88fc: 0x32422000
    ctx->pc = 0x2c88fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 8192));
    // 0x2c8900: 0x10400003
    ctx->pc = 0x2C8900u;
    {
        const bool branch_taken_0x2c8900 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8904u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c8900) {
            ctx->pc = 0x2C8910u;
            goto label_2c8910;
        }
    }
    ctx->pc = 0x2C8908u;
    // 0x2c8908: 0x10000003
    ctx->pc = 0x2C8908u;
    {
        const bool branch_taken_0x2c8908 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C890Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294953372)));
        if (branch_taken_0x2c8908) {
            ctx->pc = 0x2C8918u;
            goto label_2c8918;
        }
    }
    ctx->pc = 0x2C8910u;
label_2c8910:
    // 0x2c8910: 0x3c020038
    ctx->pc = 0x2c8910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c8914: 0x8c44c9a0
    ctx->pc = 0x2c8914u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294953376)));
label_2c8918:
    // 0x2c8918: 0x2402ffff
    ctx->pc = 0x2c8918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c891c: 0x16220005
    ctx->pc = 0x2C891Cu;
    {
        const bool branch_taken_0x2c891c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x2c891c) {
            ctx->pc = 0x2C8934u;
            goto label_2c8934;
        }
    }
    ctx->pc = 0x2C8924u;
    // 0x2c8924: 0xc0b3ec0
    ctx->pc = 0x2C8924u;
    SET_GPR_U32(ctx, 31, 0x2C892Cu);
    ctx->pc = 0x2C8928u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C892Cu; }
    }
    if (ctx->pc != 0x2C892Cu) { return; }
    ctx->pc = 0x2C892Cu;
    // 0x2c892c: 0x1000000b
    ctx->pc = 0x2C892Cu;
    {
        const bool branch_taken_0x2c892c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8930u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c892c) {
            ctx->pc = 0x2C895Cu;
            goto label_2c895c;
        }
    }
    ctx->pc = 0x2C8934u;
label_2c8934:
    // 0x2c8934: 0xc0b3ec0
    ctx->pc = 0x2C8934u;
    SET_GPR_U32(ctx, 31, 0x2C893Cu);
    ctx->pc = 0x2C8938u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C893Cu; }
    }
    if (ctx->pc != 0x2C893Cu) { return; }
    ctx->pc = 0x2C893Cu;
    // 0x2c893c: 0x40802d
    ctx->pc = 0x2c893cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8940: 0x12000006
    ctx->pc = 0x2C8940u;
    {
        const bool branch_taken_0x2c8940 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8944u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c8940) {
            ctx->pc = 0x2C895Cu;
            goto label_2c895c;
        }
    }
    ctx->pc = 0x2C8948u;
    // 0x2c8948: 0xc0b220e
    ctx->pc = 0x2C8948u;
    SET_GPR_U32(ctx, 31, 0x2C8950u);
    ctx->pc = 0x2C894Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C8838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetObject_0x2c8838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8950u; }
    }
    if (ctx->pc != 0x2C8950u) { return; }
    ctx->pc = 0x2C8950u;
    // 0x2c8950: 0x8e020060
    ctx->pc = 0x2c8950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2c8954: 0x2421025
    ctx->pc = 0x2c8954u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2c8958: 0xae020060
    ctx->pc = 0x2c8958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_2c895c:
    // 0x2c895c: 0x200102d
    ctx->pc = 0x2c895cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8960: 0xdfbf0030
    ctx->pc = 0x2c8960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8964: 0xdfb20020
    ctx->pc = 0x2c8964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8968: 0xdfb10010
    ctx->pc = 0x2c8968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c896c: 0xdfb00000
    ctx->pc = 0x2c896cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8970: 0x3e00008
    ctx->pc = 0x2C8970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8974u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8910u: goto label_2c8910;
            case 0x2C8918u: goto label_2c8918;
            case 0x2C8934u: goto label_2c8934;
            case 0x2C895Cu: goto label_2c895c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C8978u;
}
